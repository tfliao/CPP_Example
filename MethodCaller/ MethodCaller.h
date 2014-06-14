#ifndef __METHODCALLER__
#define __METHODCALLER__

class caller
{
	public:
		virtual ~caller() {}
		virtual void operator()() = 0;
};

template<class Class, typename Function>
class MethodCaller : public caller
{
	Class& _ref;
	Function _f;
	public:
		MethodCaller(Class& c, Function f) : _ref(c), _f(f) {}
		~MethodCaller() {}
		
		void operator()() {
			(_ref.*_f) ();
		}
};

template<class Class, typename Function>
MethodCaller<Class, Function>* make_caller(Class& c, Function f) 
{
	return new MethodCaller<Class, Function>(c,f);
}

#endif
