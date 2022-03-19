#include <stdio.h>

int main(void)
{
	double	a;
	double	b;
	double	result;
	
	scanf("%lf%lf", &a, &b);
	a *= 35;
	b *= 75;
	result = (a + b)/110;
	printf("MEDIA = %.5lf\n", result);
	return(0);
}
