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
	һ����������
*/
	XClass* p = new XClass(10);
	delete p;


/*
	�ֽ���������
*/
	////1- �����ڴ�
	//XClass* pObject = (XClass*)XClass::operator new(sizeof(XClass));
	////2- �������
	//new(pObject) XClass(1);
	////3- ʹ�ö���
	//pObject->Tell();
	////4- ��������
	//pObject->~XClass();
	////5- �ͷ��ڴ�
	//XClass::operator delete(pObject);


 	system("pause");
}