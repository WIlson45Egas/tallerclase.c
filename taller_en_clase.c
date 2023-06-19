#include <stdio.h>
//Ingresamos los valores que vamos a utlizar en el ejercicio
int main ()
{
  struct alumno
   {
     char nombre[20];
     char direccion[20];
     char carrera[20];
     int edad;
     float promedio;
    } a1 = {"Wilson","EL bosque","Software",18,8.3};
    
    for(int i=0;i<5; i++){
        printf("ingresa la cantidad de alumnos:"); //ingresamos la cantidad de alumnos con sus respectivos datos
       printf("Nombre:");   gets(a1.nombre);
       printf("direccion:");  gets(a1.direccion);
       printf("Carrera:");  gets(a1.carrera);
      printf("edad:");      scanf("%d",&a1.edad);
       printf("promedio:");    scanf("%f", &a1.promedio);
    printf("Ingrese los datos de los siguentes alumnos:");
       printf("Nombre:"); gets(a1.nombre);
       printf("Direccion:"); gets(a1.direccion);
        printf("Carrera:"); gets(a1.carrera);
       printf("edad:");   scanf("%f",&a1.edad);
       printf("promedio:"); scanf("%f", &a1.promedio);
    }
   return 0;
}
