#include <stdio.h>  
struct a
{
	char a;
	char b;
	int c;
};

struct b
{
	char b;
	int c;
	char a;
};

struct c
{
	int c; 
	char a;
	char b;
};

int main()
{
	struct a A; // variable declaration of the student type..  
	struct b B; // variable declaration of the student type..  
	struct c C; // variable declaration of the student type..  
	// Displaying the size of the structure student.  
	printf("The size of the student structure is %d", sizeof(A));
	printf("The size of the student structure is %d", sizeof(B));
	printf("The size of the student structure is %d", sizeof(C));
	return 0;
}