#include <iostream>
#include "cmath"

using namespace std;

// Declaraciones de Funciones
float solveEquation(float a);
bool areOpposite(float fnXi, float fnXm);

int main(int argc, const char * argv[]) {
    float Xi = 0.00; // Intervalo inicial
    float Xd = 0.00; // Intervalo final
    float Tt = 0.00; // Tolerancia
    
    int i = 0; // Iterador
    
    printf("\nINGRESE VALOR PARA INTERVALO INICIAL, FINAL Y TOLERANCIA\n");
    // Preguntar por intervalo inicial
    printf("Intervalo inicial: ");
    scanf("%f", &Xi);
    
    // Preguntar por intervalo final
    printf("Intervalo final: ");
    scanf("%f", &Xd);
    
    // Preguntar por tolerancia
    printf("Tolerancia: ");
    scanf("%f", &Tt);
    
    printf("\n[[ RESULTADO ]]\n");
    printf("\n");
    
    // Para do-while al menos una vez es ejecutado su contenido
    do {
        float Xm = ( Xi + Xd ) / 2.0;
        
        // @NOTE: En esta seccion se aplica la regla #3 del
        //          documento facilitado
        if (areOpposite(solveEquation( Xi ), solveEquation( Xd)))
            Xd = Xm; // Regla #3.1
        else
            Xi = Xm; // Regla #3.2
        
        printf("%i\t%f\t%f\t%f\t%f\t%f\n",
               i,
               Xi,
               Xd,
               Xm,
               solveEquation(Xi),
               solveEquation(Xm));
        i++;
        
    } while (abs(Xi - Xd) > Tt); // @NOTE: Regla #4 del documento
    
    return 0;
}

/**
 *  Ecuacion matematica a resolver
 *
 *  @param a Intervalo a evaluar en la funcion matematica por interpolacion
 *
 *  @return Retorna el resultado de la operacion
 */
float solveEquation(float a) {
    // @NOTE: Para este ejemplo usaremos la ecuacion x^3 - x - 1
    float x = a;
    float f = pow(x, 3) - x - 1;
    
    return f;
}

/**
 *  Determina si el intervalo ha cambiado de signo
 *
 *  @param fnXi Resultado cuando la funciona sea Xi
 *  @param fnXm Resultado cuando la funciona sea Xd
 *
 *  @return Retorna si el productio solveEquation(Xi) * solveEquation(Xm) es positivo o negativo
 */
bool areOpposite(float fnXi, float fnXm) {
    if (fnXi < 0 && fnXm > 0)
        return true;
    else if (fnXi > 0 && fnXm < 0)
        return true;
    else
        return false;
}
