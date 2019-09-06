
#include <stdio.h>
#include <stdlib.h>
#include 'funciones.h'
int main()
{
    int valor1;
    int valor2;
    int opcion1;
    int opcion2;
    int respuestaN ='no';

    printf("Bienvenido a la calculadora,\n");

    printf("ingrese el primer numero\n");
    scanf("%d",&valor1);
    printf("ingrese el segundo numero\n");
    scanf("%d",&valor2);
    fflush(stdin);

    printf("elija que operacion desea realizar, colocando el numero correspondiente");


    printf("\n\n 5- Suma");
    printf("\n 4- Resta");
    printf("\n 3- Multiplicacion");
    printf("\n 2- Division");
    printf("\n 1-Factorial.\n");

    printf("Elija la funcion");
    scanf("%d", &opcion1);

     while(opcion1<=0 || opcion1 > 6)
    {
        printf("Eror, vuelva a elegir la opcion correspondiente");
        fflush(stdin);
        scanf("%d", opcion1);
    }


    switch(opcion1)
    {

        case 1 : printf("El resultado de la suma es: %d\n", Suma (valor1, valor2));
        break;

        case 2 : printf("El resultado de la Resta es: %d\n", Resta (valor1, valor2));
        break;

        case 3 : printf("El resultado de la division es: %.2f\n", Division (valor1, valor2));
        break;

        case 4 : printf("El resultado de la Multiplicacion es: %d\n", Multiplicacion(valor1, valor2));
        break;

        case 5 : printf("El primer resultado el factoreo es: %d y el segundo es: %d\n", Factorial (valor1), Factorial(valor2));
        break;


    }

    printf("En el caso que quiera continuar con la operacion presione la tecla 's' en el caso contrario presione 'n': \n");
    fflush(stdin);
    scanf("%c",&respuestaN);

    if (respuestaN=='n')
      {
          printf("Hasta luego!");
        fflush(stdin);
      }



       else {

    printf("ingrese el primer numero\n");
    scanf("%d",&valor1);
    printf("ingrese el segundo numero\n");
    scanf("%d",&valor2);
    fflush(stdin);

    printf("elija que operacion desea realizar, colocando el numero correspondiente");


    printf("\n\n 5- Suma");
    printf("\n 4- Resta");
    printf("\n 3- Multiplicacion");
    printf("\n 2- Division");
    printf("\n 1-Factorial.\n");

    printf("Elija la funcion");
    scanf("%d", &opcion2);

    while(opcion2<= 0 || opcion2 > 6)
    {
        printf("Eror, vuelva a elegir la opcion correspondiente");
        fflush(stdin);
        scanf("%d", opcion2);
    }


    switch(opcion2)
    {

        case 1 : printf("El resultado de la suma es: %d\n", Suma (valor1, valor2));
        break;

        case 2 : printf("El resultado de la Resta es: %d\n", Resta (valor1, valor2));
        break;

        case 3 : printf("El resultado de la division es: %.2f\n", Division (valor1, valor2));
        break;

        case 4 : printf("El resultado de la Multiplicacion es: %d\n", Multiplicacion(valor1, valor2));
        break;

        case 5 : printf("El primer resultado el factoreo es: %d y el segundo es: %d\n", Factorial (valor1), Factorial(valor2));
        break;

    }


       }
    return 0;

}
