#include <iostream>
#include "MethodCaller.h"
using namespace std;

void do_something(functor* callback);

class Car 
{
	public: 
		void color() { cout << "red" << endl; }
};

int main()
{
	Car car;
	do_something(back);
	do_something(newCallback(car, &Car::color));
	
	return 0;
}
