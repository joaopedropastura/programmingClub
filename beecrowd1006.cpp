#include <stdio.h>

int main(void)
{
	double	nota1;
	double	nota2;
	double	nota3;
	double	mediaFinal;
	
	scanf("%lf%lf%lf", &nota1, &nota2, &nota3);
	mediaFinal = (((nota1 * 2)+(nota2 * 3)+(nota3 * 5))/10);
	printf("MEDIA = %.1lf\n", mediaFinal);
	return (0);
}
