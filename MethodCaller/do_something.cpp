#include "MethodCaller.h"

void do_something(caller* callback)
{
	// ... do somthing
	(*callback)();
	delete callback;
}
