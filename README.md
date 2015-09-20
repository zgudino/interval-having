#Método de bisección

[**Método de bisección**](https://es.wikipedia.org/wiki/Método_de_bisección) es un algoritmo de búsqueda de raíces que trabaja dividiendo el intervalo a la mitad y
seleccionando el subintervalo que tiene la raíz.

####Funciones

La función `solveEquation` resuelve la ecuación y devuelve su resultado.
```
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
```

La función `areOpposite` evalúa si los signos son opuestos.
```
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
```

##Licencia

The MIT License

Copyright (c) 2015 Zahir Gudiño

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.