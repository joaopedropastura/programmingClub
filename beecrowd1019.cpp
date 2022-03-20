#include <stdio.h>

int main(void)
{
	int		imputseconds;
	int	seconds;
	int	minutes;
	int	hours;

	hours = 0;
	minutes = 0;
	seconds = 0;
	scanf("%i", &imputseconds);
	while (imputseconds != 0)
	{
	if (imputseconds >= 3600)
	{
		imputseconds -= 3600;
		hours++;
	}
	if (imputseconds < 3600 && imputseconds >= 60)
	{
		imputseconds -=60;
		minutes++;
	}
	if (imputseconds < 60)
	{
	imputseconds--;
	seconds++;
	}
	}
printf("%i:%i:%i\n", hours, minutes, seconds);
	return (0);
}
