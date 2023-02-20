#include <stdio.h>

// Float allows us to store numbers in decimals (5.2, 25.55, -97.5654, 0)
// Double also allows us to store number (with more decimal number range)
int main(void)
{
	float x = 5.2;
	double y = -9.8;

	printf("x : ");
	scanf("%f", &x);
	printf("x: %f\n", x);

	printf("y: ");
	scanf("%lf", &y);
	printf("y: %f\n", y);

	return 0;
}
