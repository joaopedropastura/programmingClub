#include <stdio.h>

//utilizei o metodo Babilonico

int main(void)
{
	double	x1;
	double	x2;
	double	y1;
	double	y2;
	double	root;
	double	temp;
	double	newTemp;
	double	result;
	double	check;

	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
	temp = (x2 - x1);
	result = temp * temp;
	temp = 0;
	temp = (y2 - y1);
	result += (temp * temp);
	temp = 0;
	temp = result/2;
	check = 1;
	while(check > 0.01)
	{
		newTemp = result/temp;
		root = (newTemp + temp)/2;
		check = temp - root;
		temp = root;
	}

	printf("%.4lf\n", root);
	return (0);
}
