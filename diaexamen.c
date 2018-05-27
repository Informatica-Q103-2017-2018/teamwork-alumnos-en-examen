#include <stdio.h>
#define N 105

int  posicion(int matriculas[],int matriculaintrducida);

typedef struct
{
	char nom[20];
	char apell[30];	
	int matricula;
	int butaca;
}estudiante;

int main()
{
	int m;
	FILE * registro;
	estudiante examen;
	printf("Introduce tu numero de matricula: \n");
	scanf("%i",&m);
	registro=fopen("Registro.txt","r");
	if (registro == NULL) 
	{
		printf("Error al abrir el archivo.\n");
		return -1;
	} 
	else 
	{
		while(fscanf(registro,
      				 "%[^;];%[^;];%d;%d\n",
       				examen.nom,
       				examen.apell,
       				&examen.matricula,
       				&examen.butaca) != EOF)
       			
			{
				if (m == examen.matricula) 
				printf("Buenos dias %s %s, su butaca es la numero %i. Mucha suerte.", examen.nom,examen.apell, examen.butaca);
			}

	fclose(registro);
	}
}

