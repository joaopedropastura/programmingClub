#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int result;

	scanf("%i%i%i%i", &a, &b, &c, &d);
	result = ((a * b) - (c * d));
	printf("DIFERENCA = %i\n", result);
	return(0);
}
