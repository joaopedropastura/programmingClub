#include <stdio.h>

int main(void)
{
	int		distance;
	double	fuel;
	double	consumption;

	scanf("%i%lf", &distance, &fuel);
	consumption = distance / fuel;
	printf("%.3lf km/l\n", consumption);
	return (0);
}
