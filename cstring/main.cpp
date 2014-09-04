#include <iostream>
#include "cstring.hpp"
#include "mystring.hpp"

using namespace std;

int main(int argc, char **grgv){
	MyString str1("aaaa");
	MyString str2("bbbb");
	MyString str3 = str1+str2;
	MyString str4 = "cccc";
	str4 += "dddd";
	cout<<str1<<endl;
	cout<<str2<<endl;
	cout<<str3<<endl;
	cout<<str4<<endl;
	return 0;
}
