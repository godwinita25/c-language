#include <stdio.h>

int main()
{
	int a,b,c;

	scanf("%d", &a);
// The scanf above was used to recieve input from user and stored in variable a

	scanf("%d", &b);
// Also the scanf above is used to recieve input from the user and stored in variable b

	c = a*b;
// We are looking for c, and the solution is we multiply a * b

	printf("a = %d, b = %d, a*b = %d\n", a, b, c);
// We are saying a and b (from left-right)  should be and integer(%d) b should also be an integer(%d) likewise c (which is a*b)

	return 0;
} 
