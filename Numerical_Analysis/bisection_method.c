// 2分法
// gcc bisection_method.c -lm
// ./a.out

#include <stdio.h>
#include <math.h>

#define EPS 0.0001 // 収束判定条件

double f(double x) {
  // 5x^3 -21x^2 -21x +5 = 0の解
  return 5*x*x*x-21*x*x-21*x+5;
}

int main() {
  // 0 <= x <= 1の範囲で探索
  double a = 0.0;
  double b = 1.0;
  double c;

  int cnt = 0; //繰り返し回数カウント

  do {
    cnt++;

    c = (a + b) / 2.0;

    if(f(a)*f(c) < 0.0) {
      b = c;
    } else {
      a = c;
    }

  } while(fabsf(a-b) > EPS);

  // 解出力
  printf("x=%f (count:%d)\n", c, cnt);
}
