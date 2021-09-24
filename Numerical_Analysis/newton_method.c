// ニュートン法
// gcc newton_method.c -lm
// ./a.out

#include <stdio.h>
#include <math.h>

#define EPS 0.0001 // 収束判定条件

double f(double x) {
  return x*x-6*x+5;
}

double df(double x) {
  return 2*x-6;
}

int main() {
  double a = 10.0;
  double b = a - f(a) / df(a);

  while(fabsf(a-b) > EPS) {
    a = b;
    b = a - f(a) / df(a);
  }

  printf("x=%f\n", b);
}
