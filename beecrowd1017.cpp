#include <stdio.h>

int main(void)
{
	int		hours;
	int		kmPerHour;
	double	liters;

	liters = 0;
	scanf("%i%i", &hours, &kmPerHour);
	liters = (hours * kmPerHour)/12.0;
	printf("%.3lf\n", liters);
	return (0);
}
