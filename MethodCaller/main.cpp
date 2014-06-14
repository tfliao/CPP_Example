#include <iostream>
#include "MethodCaller.h"
using namespace std;

void do_something(caller* callback);

class Class
{
	public: 
		void method() { cout << "method() called" << endl; }
};

int main()
{
	Class c;
	do_something(make_caller(c, &Class::method));
	
	return 0;
}
