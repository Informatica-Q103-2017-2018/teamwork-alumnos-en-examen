#include <stdio.h>
int main()
{
	int ano, resto;
	printf("introduzca el año que quiera\n");
	scanf("%i", &ano);
	resto= ano%4;
	printf("si el numero que le sale es 0, es que es un ano bisiesto, y su numero es %i", resto);
	return 0;
}
