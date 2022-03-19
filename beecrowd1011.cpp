#include <stdio.h>

int main(void)
{
	double	temp;
	double	radius;
	double	volume;
	double	pi;

	pi = 3.14159;
	scanf("%lf", &radius);
	radius = ((radius * radius) * radius);
	volume = ((pi * radius) * 4.0)/3;
	printf("VOLUME = %.3lf\n", volume);
	return(0);
}
