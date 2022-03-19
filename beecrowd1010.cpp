#include <stdio.h>

int main(void)
{
	int		prodCode;
	int		unitsSales;
	double	prodPrince;
	double	temp;
	double	result;

	scanf("%i%i%lf", &prodCode, &unitsSales, &prodPrince);
	temp = unitsSales * prodPrince;
	scanf("%i%i%lf", &prodCode, &unitsSales, &prodPrince);
	result = ((unitsSales * prodPrince) + temp);

	printf("VALOR A PAGAR: R$ %.2lf\n", result);
	return(0);
}
