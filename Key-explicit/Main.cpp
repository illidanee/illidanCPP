#include <iostream>

class Object
{
public:
	explicit Object(int id) : _id(id) { std::cout << "Object Constructor." << std::endl; };
	Object(const Object& that) : _id(that._id) { std::cout << "Object Copy Constructor." << std::endl; }
	Object& operator=(const Object& that) { _id = that._id; std::cout << "Object =." << std::endl; return *this; }
	~Object() { std::cout << "Object Destructor." << std::endl; };
private:
	int _id;
};


int main()
{
	Object a1(1);		//normal constructor.

	//Object b1 = 1;		//explicit constructor not allow. no-explicit case £º b1 normal constructor.
	Object b2 = a1;		//copy constructor
	
	Object c1(2);		//normal constructor.
	//c1 = 1;				//explicit constructor not allow. no-explicit case £º temp var normal constructor -> c1 copy constructor -> temp var destructor.
	c1 = a1;			//operator =.

	system("pause");
	return 0;
}