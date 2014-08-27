#include "cstring.hpp"
#include "kianstring.hpp"

ostream &operator<<(ostream &os, const KianString &str){
	os<<str.ch_;
	return os;
}

inline void swap(KianString &str1, KianString &str2){
	using std::swap;
	swap(str1.ch_, str2.ch_);
}
