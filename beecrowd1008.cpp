#include <stdio.h>

int main(void)
{
	int		employeeNum;
	int		hours;
	double	valuePerHour;
	double	saraly;

	scanf("%i%i%lf", &employeeNum, &hours, &valuePerHour);
	saraly = (hours * valuePerHour);
	printf("NUMBER = %i\n", employeeNum);
	printf("SALARY = U$ %.2lf\n", saraly);
	return(0);
}
