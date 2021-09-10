// ネイピア数を求めるプログラム
// gcc napier.c -lm
// ./a.out > napier.dat
// set logscale x
// plot "napier.dat" with linespoints

#include <stdio.h>
#include <math.h>

int main() {
  int n;
  double napier;

  for (n = 1; n < 10000; n++) {
    napier = pow(1.0 + 1.0/n, n);
    printf("%d\t%10.9f\n", n, pow(napier-M_E, 2));
  }
}
