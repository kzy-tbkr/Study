// ニュートン法
// gcc newton_method.c -lm
// ./a.out

#include <stdio.h>
#include <math.h>

#define EPS 0.0001 // 収束判定条件

// 元の関数
double f(double x) {
  return x*x-6*x+5;
}

// 元の関数を微分したもの
double df(double x) {
  return 2*x-6;
}

int main() {
  int cnt = 1; // 繰り返しカウント用
  double a = 10.0; // 初期値
  double b = a - f(a) / df(a);

  while(fabsf(a-b) > EPS) {
    a = b;
    b = a - f(a) / df(a);
    cnt++;
  }

  printf("x=%f (count:%d)\n", b, cnt);
}
