#include "MethodCaller.h"

void do_something(functor* callback)
{
	(*callback)();
	delete callback;
}
