#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

unique_ptr<string> demo(const char * s)
{
	unique_ptr<string> temp(new string(s));
	return temp;
}

unique_ptr<int> make_int(int n)
{
	return unique_ptr<int>(new int(n));
}

void show(unique_ptr<int> &p1)
{
	cout << *p1 << ' ';
}

int main() {

	/****************************************************************************************************************
	 *    Date    : 2017/11/20 11:45
	 *
	 *    Author  : Smile
	 *    Contact : smile@illidan.org
	 *
	 *    Brief   : auto_ptr
	 *
	 ****************************************************************************************************************/
	//auto_ptr<string> films[5] =
	//{
	//	auto_ptr<string>(new string("Fowl Balls")),
	//	auto_ptr<string>(new string("Duck Walks")),
	//	auto_ptr<string>(new string("Chicken Runs")),
	//	auto_ptr<string>(new string("Turkey Errors")),
	//	auto_ptr<string>(new string("Goose Eggs"))
	//};
	//auto_ptr<string> pwin;
	//pwin = films[2]; // films[2] loses ownership. 将所有权从films[2]转让给pwin，此时films[2]不再引用该字符串从而变成空指针
	//films[2] = auto_ptr<string>(new string("123"));

	//cout << "The nominees for best avian baseballl film are\n";
	//for (int i = 0; i < 5; ++i)
	//	cout << *films[i] << endl;
	//cout << "The winner is " << *pwin << endl;

	/****************************************************************************************************************
	 *    Date    : 2017/11/20 14:03
	 *
	 *    Author  : Smile
	 *    Contact : smile@illidan.org
	 *
	 *    Brief   : unique_ptr
	 *
	 ****************************************************************************************************************/
	//unique_ptr<string> pu1(new string("hello world"));
	//unique_ptr<string> pu2;
	////pu2 = pu1;                                      // #1 not allowed
	//unique_ptr<string> pu3;
	//pu3 = unique_ptr<string>(new string("You"));   // #2 allowed

	/****************************************************************************************************************
	 *    Date    : 2017/11/20 11:47
	 *
	 *    Author  : Smile
	 *    Contact : smile@illidan.org
	 *
	 *    Brief   : std::move()
	 *
	 ****************************************************************************************************************/
	//unique_ptr<string> ps1, ps2;
	//ps1 = demo("hello");
	//ps2 = move(ps1);
	//ps1 = demo("alexia");
	//cout << *ps2 << "  " << *ps1 << endl;

	/****************************************************************************************************************
	 *    Date    : 2017/11/20 14:05
	 *
	 *    Author  : Smile
	 *    Contact : smile@illidan.org
	 *
	 *    Brief   : STL and unique_ptr
	 *
	 ****************************************************************************************************************/
	//const int size = 10;
	//vector<unique_ptr<int>> vp(size);
	//for (int i = 0; i < vp.size(); i++)
	//	vp[i] = make_int(rand() % 1000);            // copy temporary unique_ptr
	//vp.push_back(make_int(rand() % 1000));			// ok because arg is temporary
	//for_each(vp.begin(), vp.end(), show);           // use for_each()

	system("pause");
	return 0;
}