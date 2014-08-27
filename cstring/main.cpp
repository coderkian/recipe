#include <iostream>
#include "cstring.hpp"
#include "kianstring.hpp"

using namespace std;

int main(int argc, char **grgv){
	KianString str1("aaaa");
	KianString str2("bbbb");
	KianString str3 = str1+str2;
	KianString str4 = "cccc";
	str4 += "dddd";
	cout<<str1<<endl;
	cout<<str2<<endl;
	cout<<str3<<endl;
	cout<<str4<<endl;
	return 0;
}
