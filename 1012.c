#include <stdio.h>
#include<math.h>

int  main (){
  double a, b, c, areatriangulo, circulo, trapezio, quadrado, retangulo, pi;
  pi = 3.14159;
  scanf("%lf %lf %lf", &a, &b, &c);

  areatriangulo = (a*c)/2;
  circulo = pi(pow(c,2));
  trapezio = ((a + b)*c)/2;
  quadrado = b*b;
  retangulo = a*b;

  printf("TRIANGULO: %.3f\n", areatriangulo);
  printf("CIRCULO: %.3f\n", circulo);
  printf("TRAPEZIO: %.3f\n", trapezio);
  printf("QUADRADO: %.3f\n", quadrado);
  printf("RETANGULO: %.3f\n", retangulo);

}
