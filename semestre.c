/*Cada semestre, a la materia de Programación se inscriben una cantidad constante de 23 alumnos. El semestre está dividido en 3 progresos. Utilice los conceptos de Arreglos y Funciones para escribir un programa en lenguaje C que permita realizar los siguientes cálculos:
1- Obtener el promedio de calificaciones de cada alumno durante el semeste.
2- La nota promedio del grupo de estudiantes para cada progreso
3- El alumno que obtuvo el mayor promedio de calificación durante el semestre*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    srand(time(NULL));
    int notas[23][3], promedio_estudiante[23], promedio_semestre[3], alumno_mayor=0;

    for (int i = 0; i < 23; i++)
    {
        promedio_estudiante[i]=0;
    }

    for (int i = 0; i < 3; i++)
    {
        promedio_semestre[i]=0;
    }
    
//Ingresar datos de notas
for (int i = 0; i < 23; i++)
{
    printf("\nEstudiante %d\n", i+1);
    for (int j = 0; j < 3; j++)
    {
        notas[i][j]=rand()%11;
        printf("Semestre %d: %d\n",j+1, notas[i][j]);
        
    }
    
}


//promedio de estudaintes
for (int i = 0; i < 23; i++)
{
    for (int j = 0; j < 3; j++)
    {
        promedio_estudiante[i]+=notas[i][j];
    }
    promedio_estudiante[i]=promedio_estudiante[i]/3;

    //estudainte mayor
    if (promedio_estudiante[i]>alumno_mayor)
    {
        alumno_mayor=i;
    }
    
    
    printf("El promedio del estudiante %d es:%d\n", i+1, promedio_estudiante[i]); 
}
printf("El estudiante con mayor puntaje es el numero %d\n",alumno_mayor+1);


//promedio semestre
for (int j = 0; j < 3; j++)
{
   for (int i = 0; i < 23; i++)
   {
    promedio_semestre[j]+=notas[i][j];
   }
   promedio_semestre[j]=promedio_semestre[j]/26;
   printf("Promedio del semestre %d:%d\n", j+1, promedio_semestre[j]);
}


    return 0;
}