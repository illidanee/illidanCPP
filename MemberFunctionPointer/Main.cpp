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
	//��Ա����ָ��
	typedef   void  (tt::* FUNCTYPE1)();

	FUNCTYPE1 ptr11 = &tt::fn1;	//��ȷ
	//FUNCTYPE1 ptr12 = tt::fn1;	//����

	//���ó�Ա����ָ��
	tt a;
	(a.*ptr11)();

	tt *b = new tt;
	(b->*ptr11)();

	//ȫ�ֺ���ָ��
	typedef   void  (* FUNCTYPE2)();
	FUNCTYPE2 ptr21 = &fn2;		//��ȷ
	FUNCTYPE2 ptr22 = fn2;		//��ȷ

	return 0;
}