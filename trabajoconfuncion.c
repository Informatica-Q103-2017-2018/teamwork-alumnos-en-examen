#include <stdio.h>

int posicion(int aASIG);
typedef struct
{
	char nombre[100];
	char apellido[100];	
	int nmatricula;
	int posicion;
	
}agenda;

int main()
{
	FILE *registro;
	char n,o=0, clave;
	agenda alumnos[105];
	int aQ=0,aF=1,aI=2,aC=3,aE=4,contador=0,i=0;
	int contador_asientos = 0;
	registro=fopen("Registro.txt","w");
	if (registro == NULL)
	{
		printf("Error al abrir el fichero.");
		return -1;
	}
	else
	{
		do
		{
			printf("Bienvenido a la ETSIDI\n");
	    	printf("Asignatura del examen:\nQuimica-> Q\tFisica-> F\tInformatica-> I\tCalculo-> C\tEstadistica-> E\n");
	    	fflush(stdin);
			scanf("%c",&n);
			
			if (n == 'P'){
				printf("Clave correcta. Fin del registro. \n");
				break;
			}
			
		    printf("Escriba su nombre, primer apellido y numero de matricula\n");
			scanf("%s %s %i",alumnos[o].nombre,alumnos[o].apellido,&alumnos[o].nmatricula);
			alumnos[o].posicion = posicion(n);
		    contador++;
		    ++o;
			
     	} while (n !='P');
	}
	for (i=0; i < contador;i++)
	{
		fprintf(registro,"%s;%s;%i;%i\n",alumnos[i].nombre,alumnos[i].apellido,alumnos[i].nmatricula, alumnos[i].posicion);
	}
	fclose(registro);
}


int posicion(int aASIG)
{
	static int pos[5] = {1, 2, 3, 4, 5};
	int i = 0;
	
	switch(aASIG)
	{
	case 'Q':
	case 'q':
		i = pos[0];
		pos[0] += 5;
		return i;
		break;	
	case 'F':
	case 'f':
		i = pos[1];
		pos[1] += 5;
		return i;
		break;	
	case 'I':
	case 'i':
		i = pos[2];
		pos[2] += 5;
		return i;
		break;	
	case 'E':
	case 'e':
		i = pos[3];
		pos[3] += 5;
		return i;
		break;	
	case 'C':
	case 'c':
		i = pos[4];
		pos[4] += 5;
		return i;
		break;	
	}
	return -1;
}


