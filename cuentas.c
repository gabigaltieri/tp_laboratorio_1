#include <stdio.h>



int Resta (int numero1,int numero2)
{
    int respuesta;
    respuesta = numero1- numero2;
    return respuesta;


} int Multiplicacion (numero1,numero2)
{
    int respuesta;
    respuesta = numero1 * numero2;
    return respuesta;

}

    float division(numero1, numero2)
    {   int respuesta;
        if (numero2> numero1)
           {
                printf("Error, el divisor debe ser mas chico que el dividendo, ingrese un nuevo numero: ");
            scanf("%f", &numero2);
            fflush (stdin);

           } else
                {
                    respuesta= (float) numero1/numero2;
                }
                return respuesta;

    }
int Factorial(int fact)
        {
            int respuesta;
            if(fact==1)
        {
        return 1;
            }else
                {
                    respuesta=fact*Factorial(fact-1);
                }
         return respuesta;
         }

