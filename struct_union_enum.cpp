#include <iostream>
using namespace std;

typedef struct A
{
	char c;
	int a;
	double b;
}A;

typedef union B
{
	int a;
	double b;
	char c;
}B;

typedef enum C
{
	one,
	two,
	three
};

int main()
{
	A obj1;
	obj1.a = 49;
	cout << obj1.a;
	obj1.b = 49;
	cout << obj1.b;
	obj1.c = 49;
	cout << obj1.c << endl;


	B obj2;
	obj2.a = 97;
	cout << obj2.a;
	cout << obj2.b;
	cout << obj2.c << endl;

	enum C obj3;
	obj3 = one;
	cout << obj3;
	obj3 = two;
	cout << obj3;
	obj3 = three;
	cout << obj3;

	cout << endl << sizeof(int);
	cout << endl << sizeof(float);
	cout << endl << sizeof(double);
	cout << endl << sizeof(char);

	cout << endl << "struct: " << sizeof(A);
	cout << endl << "union: "  << sizeof(B);
	cout << endl << "enum: "   << sizeof(C);

	return 0;
}