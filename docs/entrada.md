# Documentación archivo de entrada

El archivo de entrada el cual debe ser introducido mediante Entrada Estandar (std)
al programa de solución de problemas de Programación Lineal mediante el Método Simplex,
tiene una estructura general definida de la siguiente forma.

```
TIPO I N
F(1) F(2) F(3) ... F(I)
K(1,1) K(1,2) K(1,3) ... K(1,I) COND B(1)
K(2,1) K(2,2) K(2,3) ... K(2,I) COND B(2)
K(3,1) K(3,2) K(3,3) ... K(3,I) COND B(3)
...
K(N,1) K(N,2) K(N,3) ... K(N,I) COND B(1)
```

en donde:

- `TIPO` indica si es un problema de Maximización `MAX` o Minimización `MIN`.
- `I` es el número de X<sub>i</sub>.
- `N` es indica la cantidad de restricciones existentes.
- `F(1) F(2) F(3) ... F(I)` son los coeficientes de la función objetivo
- - y cada `F(i)` a su vez es un número real
- Cada `K(n,1) K(n,2) K(n,3) .. K(n,I) COND B(n)` es una restriccion
- - donde cada `K(n,i)` y `B(n)` son los coeficientes de la restricción, y estos son numeros reales
- - y `COND` puede ser `=`, `>`, `>=`, `<` o `<=`