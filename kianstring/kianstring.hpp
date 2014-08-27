#ifndef KIANSTRING_HPP
#define KIANSTRING_HPP

#include <iostream>
#include "cstring.hpp"

using namespace std;

class KianString{
public:
	//default constructor
	KianString()=default;
	
	KianString(const char *c): ch_(0) {
		ch_ = (char*)malloc(sizeof(char)*(strlen(c)+1));
		strncpy(ch_, c, strlen(c)+1);
	};
	
	~KianString(){
		free(ch_);
	}

	//copy constructor
	KianString(const KianString &str){
		ch_ = (char*)malloc(sizeof(char)*(str.size()+1));
		strncpy(ch_, str.ch_, str.size()+1);
	}

	//assign operator, is ok for both lvalue and rvalue!
	KianString &operator=(KianString str) noexcept {
		swap(*this, str);
		return *this;
	}

	//move constructor
	KianString(KianString &&str) noexcept : ch_(str.ch_) {
		str.ch_ = NULL;
	}
	
	KianString &operator+=(const KianString &str){
		ch_ = (char*)realloc(ch_, strlen(ch_)+str.size()+1);
		strcat(ch_, str.ch_);
		return *this;
	}

	bool operator==(const KianString &str1){
		return strcmp(ch_, str1.c_str())==0;
	}
	bool operator!=(const KianString &str){
		return !(*this==str);
	}


	char &operator[](std::size_t n){return ch_[n];}
	const char &operator[](std::size_t n)const  {return ch_[n];}

	char *c_str() const {return ch_;};
	int size() const {return strlen(ch_);};
	friend void swap(KianString &str1, KianString &str2);
	friend ostream &operator<<(ostream &os, const KianString &str);
private:
	char *ch_;
};

void swap(KianString &str1, KianString &str2);
ostream &operator<<(ostream &os, const KianString &str);

template<typename T>
const T operator+(const T& lhs, const T& rhs) {
  return T(lhs) += rhs;    
}

#endif
