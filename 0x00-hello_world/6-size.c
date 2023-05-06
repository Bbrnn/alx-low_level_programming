#include <stdio.h>
/**
 * main - print sizes of  different types of data
 * Return: Alway 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf(“Size of a char : % lu\n byte(s)\n ”, sizeof(a));
	printf(“Size of a int : % lu\n byte(s)\n ”, sizeof(b));
	printf(“Size of a long int : % lu \n byte(s)\n ”, sizeof(c));
	printf(“Size of a long long int : % lu\n byte(s)\n ”, sizeof(d));
	printf(“Size of a float : % lu\n byte(s)\n ”, sizeof(e));
	Return(0);
}
