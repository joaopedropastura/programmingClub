#include <stdio.h>

int main(void)
{
	char	employeeName;
	double	salary;
	double	sales;
	double	result;

	scanf("%s%lf%lf", &employeeName, &salary, &sales);
	if(sales > 0)
		result = (((sales * 15)/100) + salary);
	else
		result = salary;
	printf("TOTAL = R$ %.2lf\n", result);
	return(0);
}
