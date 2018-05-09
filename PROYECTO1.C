#include <stdio.h>
typedef struct
{
	char nombre[];
	char apellidos[];	
	int nmatricula;
}agenda
{
	char n;
	do
	{
		printf("Bienvenido a la ETSIDI");
		printf("Quimica -> Q\n Fisica -> F\n  Informatica -> I\n Calculo -> C\n Estadistica -> E\n");
		scanf("%c",n);
	}
	while(n!=P)
	{
		switch(n)
	{
		case 'Q':
			{
				printf("Escriba su nombre, apellidos y numero de matricula\n");
				scanf("%s %s %i",&agenda.nombre,&agenda.apellidos,&agenda.nmatricula);
				Q++;
			}
		break;
		case 'F':
			{
				printf("Escriba su nombre, apellidos y numero de matricula\n");
				scanf("%s %s %i",&agenda.nombre,&agenda.apellidos,&agenda.nmatricula);
				F++;
			}
		break;
		case 'I':
			{
				printf("Escriba su nombre, apellidos y numero de matricula\n");
				scanf("%s %s %i",&agenda.nombre,&agenda.apellidos,&agenda.nmatricula);
				I++;
			}
		break;
		case 'C':
			{
				printf("Escriba su nombre, apellidos y numero de matricula\n");
				scanf("%s %s %i",&agenda.nombre,&agenda.apellidos,&agenda.nmatricula);
				C++;
			}
		break;
		case 'E':
			{
				printf("Escriba su nombre, apellidos y numero de matricula\n");
				scanf("%s %s %i",&agenda.nombre,&agenda.apellidos,&agenda.nmatricula);
				E++;
			}
		break;
		
	}
	}
}
