#include<iostream>

using namespace std;

class Singleton {

private:
	int value = 0;
	static Singleton* instance;
	Singleton()
	{
	}
public:
	Singleton(const Singleton& obj) = delete;

	static Singleton* getInstance()
	{
		if (instance == NULL)
		{
			instance = new Singleton;
			return instance;
		}
		else
		{
			return instance;
		}
	}

	void setValue(int a)
	{
		value = a;
	}

	void showValue()
	{
		cout << value << endl;
	}

};

Singleton* Singleton::instance = NULL;


int main()
{
	Singleton* obj1 = Singleton::getInstance();
	obj1->setValue(5);
	obj1->showValue();
	Singleton* obj2 = Singleton::getInstance();
	obj2->showValue();
	return 0;
}