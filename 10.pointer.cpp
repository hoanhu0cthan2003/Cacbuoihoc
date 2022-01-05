#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*int x{ 5 };
	cout << x << '\n';
	cout << &x << '\n'; */

	//2
	/*int x{ 5 };
	cout << x << '\n';
	cout << &x << '\n';
	cout << *(&x) << '\n';*/

	//3
	/*int* iPtr, int2;
	double* dPtr;*/

	//4
	/*int v{ 5 };
	int* ptr{ &v };
	cout << &v << '\n';
	cout << ptr << '\n';
	cout << *ptr << '\n';*/

	//5
	/*int iValue{ 5 };
	double dValue{ 8.0 };
	int* iPtr{ &iValue };
	double* dPtr{ &dValue };*/

	//6
	//int x{ 8 };
	//cout << typeid(x).name() << '\n';
	//cout << typeid(&x).name() << '\n';

	//7
	/*int Value{ 5 };
	int* ptr{ &Value };
	cout << &Value << '\n';
	cout << ptr << '\n';
	cout << *ptr << '\n';*/

	//8
	/*int value1{ 5 };
	int value2{ 7 };

	int* ptr;
	ptr = &value1;
	cout << *ptr << '\n';

	ptr = &value2;
	cout << *ptr << '\n';*/

	//----------------------------------------------------------------------------

	int array[5]{ 1, 2, 5 ,7 ,9 };
	cout << array << '\n'; 
	cout << &array[0] << '\n'; 
	cout << *array << '\n';

	int* ptr{ array };
	cout << *ptr << '\n'; 
	cout << sizeof(array) << '\n'; 
	cout << sizeof(ptr) << '\n'; 
}

