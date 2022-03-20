#include <stdio.h>

//como seria feito se nao fosse permitido o algoritmo guloso?

int main(void)
{
	int	cem = 0;
	int	cinquenta = 0;
	int	vinte = 0;
	int	dez = 0;
	int	cinco = 0;
	int	dois = 0;
	int	um = 0;
	int	imputvalue;
	int	print;

	scanf("%i", &imputvalue);
	print = imputvalue;
	while(imputvalue >= 100)
	{
		cem++;
		imputvalue -= 100;
	}
	while(imputvalue >= 50)
	{
		cinquenta++;
		imputvalue -= 50;
	}
	while(imputvalue >= 20)
	{
		vinte++;
		imputvalue -= 20;
	}
	while(imputvalue >= 10)
	{
		dez++;
		imputvalue -= 10;
	}
	while(imputvalue >= 5)
	{
		cinco++;
		imputvalue -= 5;
	}
	while(imputvalue >= 2)
	{
		dois++;
		imputvalue -= 2;
	}
	while(imputvalue >= 1)
	{
		um++;
		imputvalue--;
	}
	printf("%i\n", print);
	printf("%i nota(s) de R$ 100,00\n", cem);
	printf("%i nota(s) de R$ 50,00\n", cinquenta);
	printf("%i nota(s) de R$ 20,00\n", vinte);
	printf("%i nota(s) de R$ 10,00\n", dez);
	printf("%i nota(s) de R$ 5,00\n", cinco);
	printf("%i nota(s) de R$ 2,00\n", dois);
	printf("%i nota(s) de R$ 1,00\n", um);
	return(0);
}
