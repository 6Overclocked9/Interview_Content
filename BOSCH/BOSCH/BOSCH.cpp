class ABC
{
private:
    int a;
    int b;

public:
    ABC(int x, int y)
    {
        a = x;
        b = y;
    }
}

class ABCD
{
private:

public:
    void add(int a, int b)



}


class ABCDE
{
private:

public:
    static void add(int a, int b)



}


class dummy
{
private:
    int a;

public:

    dummy(const Dummy& obj)
    {
        a = obj.a;
    }

}

class Singleton
{
private:
    int a;
    static Sigleton* instance;
    Singleton()
    {

    };
public:

    static Sigleton* getInstance()
    {
        if (instance == nullptr)
        {
            instance = new Singleton;
            return instance;
        }
        else
        {
            return instance;
        }
    }
}

Singleton

volat

#include <iostream>

using namespace std;

int main()
{

    float a[3] = { 1.5,2.3,3.5 };

    int* ptr = a;

    for (int i = 0; i < 3; i++)
    {
        cout << *(ptr + i);
    }

    return 0;
}

#include <iostream>

using namespace std;


void removed(int a[5], int size)
{
    int b[size] = { 0,0,0,0,0 };

    for (int i; i < size; i++)
    {
        for (int j; j < size; j++)
        {
            if (a[i] == b[j])
            {
                break;
            }
            if (j == size)
            {
                b[i] = a[i];
            }
        }
    }

    for (int i; i < size; i++)
    {
        a[i] = b[i];
    }

    cout << endl << "after" << endl;
    for (int i; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return;
}

int main()
{

    int a[5] = { 2,1,2,3,5 };

    for (int i; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    removed(a, 5);


    return 0;
}





//////////////////////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
/* C++ program to remove duplicate elements in an array */
/*My Solution*/
#include <iostream>

using namespace std;

void removed(int* a, const int size) // Passing Array to Function
{
    int b[5] = {0,0,0,0,0};
    int counter = 1;
    b[0] = a[0];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                break;
            }
            if ((i-1) == j)
            {
                b[counter] = a[i];
                counter++;
            }
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        a[i] = b[i];
    }
    return;
}

int main()
{

    int a[5] = { 2,1,2,3,5 };

    for (int i=0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    removed(a, 5);

    cout << endl << "after" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

/*Better Solution*/
#include<iostream>
using namespace std;

int remove_duplicate_elements(int arr[], int n)
{

	if (n == 0 || n == 1)
		return n;

	int temp[n];

	int j = 0;
	int i;
	for (i = 0; i < n - 1; i++)
		if (arr[i] != arr[i + 1])
			temp[j++] = arr[i];
	temp[j++] = arr[n - 1];

	for (i = 0; i < j; i++)
		arr[i] = temp[i];

	return j;
}


int main()
{
	int n;
	cin >> n;
	int arr[n];
	int i;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	n = remove_duplicate_elements(arr, n);


	for (i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}