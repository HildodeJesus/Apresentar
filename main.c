#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
  int ttlPolt, qtdPass;
  float valPass, valAcres, y, x, Xv, Yv, b, a, c, delta;

  printf("\n\nQual valor por pessoa?\n> ");
  scanf("%f", &valPass);

  printf("\n\nQual valor acrescentado por poltrona vazia?\n> ");
  scanf("%f", &valAcres);

  printf("\n\nQuantas poltronas no avião ao todo?\n> ");
  scanf("%d", &ttlPolt);

  printf("\n\nQuantas pessoas irão de fato?\n> ");
  scanf("%d", &qtdPass);

  x = ttlPolt - qtdPass;
  b = (ttlPolt * valAcres) + (-1 * valPass);
  a = (-1 * valAcres);
  c = valPass * ttlPolt;
  delta = pow(b, 2) + (-4 * a * c);

  Xv = -b / (2 * a);
  Yv = -delta / (4 * a);

  printf("\n\nf(x) = %.2fx² + (%.2fx) + (%.2f)\nVertice: [%.2f, %.2f]\n", a, b, c, Xv, Yv);
}