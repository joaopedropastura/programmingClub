#include <stdio.h>

int main(void)
{
	int	imputdays;
	int years;
	int months;
	int days;

	years = 0;
	months = 0;
	days = 0;
	scanf("%i", &imputdays);
	while(imputdays >= 365)
	{
		years++;
		imputdays -= 365;
	}
	while (imputdays >= 30)
	{
		months++;
		imputdays -=30;
	}
	while (imputdays != 0)
	{
		days++;
		imputdays--;
	}
	printf("%i ano(s)\n", years);
	printf("%i mes(es)\n", months);
	printf("%i dia(s)\n", days);
	return (0);
}
