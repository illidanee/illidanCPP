#include <iostream>


class XClass
{
public:
	//constructor / destructor
	XClass(int id) { m_ID = id; std::cout << "Constructors" << std::endl; }
	~XClass() { m_ID = -1; std::cout << "Destructors" << std::endl; }	
	
	//operator new / delete
	void* operator new(size_t size)
	{
		std::cout << "Call operator new Function." << std::endl;
		return malloc(size);
	}

	void operator delete(void* ptr)
	{
		std::cout << "Call operator delete Function." << std::endl;
		free(ptr);
	}

	//placement new
	void* operator new(size_t size, XClass* ptr)
	{
		std::cout << "Call placement new Function." << std::endl;
		return ptr;
	}

	//normal
	void Tell() { std::cout << "My ID is " << m_ID << std::endl; }


private:
	int m_ID;
};

int main()
{
/*
	一般对象构造过程
*/
	XClass* p = new XClass(10);
	delete p;


/*
	分解对象构造过程
*/
	////1- 分配内存
	//XClass* pObject = (XClass*)XClass::operator new(sizeof(XClass));
	////2- 构造对象
	//new(pObject) XClass(1);
	////3- 使用对象
	//pObject->Tell();
	////4- 析构对象
	//pObject->~XClass();
	////5- 释放内存
	//XClass::operator delete(pObject);


 	system("pause");
}