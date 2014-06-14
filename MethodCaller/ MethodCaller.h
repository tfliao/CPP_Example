#ifndef __METHODCALLER__
#define __METHODCALLER__

class functor
{
	public:
		virtual ~functor() {}
		virtual void operator()() = 0;
};


template<class C, typename F>
class MethodCaller : public functor
{
	C& ins;
	F fun;
	public:
		MethodCaller(C& c, F f) : ins(c), fun(f) {}
		~MethodCaller() {}
		
		void operator()() {
			(ins.*fun) ();
		}
};

template<class C, typename F>
MethodCaller<C, F>* newCallback(C& c, F f) 
{
	return new MethodCaller<C,F>(c,f);
}

#endif
