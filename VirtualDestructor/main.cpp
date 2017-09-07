#include <iostream>

/****************************************************************************************************************
 *    date    : 2017/09/07 14:19
 *
 *    author  : Smile
 *    Contact : smile@illidan.org
 *
 *    brief   : 测试纯虚函数是否可以有函数实现
 *					1. 纯虚函数可以有自己的实现，并且在子类函数体中调用。
 *					2. 由于纯虚基类需要有自己的析构来释放必要的内存，所以C++允许纯虚函数有自己的实现。
 *
 ****************************************************************************************************************/



class XParent
{
public:
	XParent();
	virtual ~XParent() = 0;
	virtual void Tell() = 0;
};

XParent::XParent()
{
	std::cout << "Parent constructor!" << std::endl;
}

XParent::~XParent()
{
	std::cout << "Parent destructor!" << std::endl;
}

void XParent::Tell()
{
	std::cout << "Hello! I am Parent Class." << std::endl;
}

class XChild : public XParent
{
public:
	XChild();
	virtual ~XChild();
	virtual void Tell();
};

XChild::XChild()
{
	std::cout << "Child constructor!" << std::endl;
}

XChild::~XChild()
{
	std::cout << "Child destructor!" << std::endl;
}

void XChild::Tell()
{
	XParent::Tell();
	std::cout << "Hello! I am Child Class." << std::endl;
}

int main()
{
	XChild child;
	child.Tell();

	system("pause");
}