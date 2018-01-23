#include <iostream>

class tt
{
public: 
	void fn1() 
	{ 
		printf("tt::fn1 \n"); 
	}
};

void fn2()
{
	printf("fn2 \n");
}

int main()
{
	//成员函数指针
	typedef   void  (tt::* FUNCTYPE1)();

	FUNCTYPE1 ptr11 = &tt::fn1;	//正确
	//FUNCTYPE1 ptr12 = tt::fn1;	//错误

	//调用成员函数指针
	tt a;
	(a.*ptr11)();

	tt *b = new tt;
	(b->*ptr11)();

	//全局函数指针
	typedef   void  (* FUNCTYPE2)();
	FUNCTYPE2 ptr21 = &fn2;		//正确
	FUNCTYPE2 ptr22 = fn2;		//正确

	return 0;
}