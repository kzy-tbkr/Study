// 円周率を求めるプログラムその1
// gcc pi.c -lm
// ./a.out

/* 実行例
n=6     an=3.000000000  bn=3.464101615
n=12    an=3.105828541  bn=3.215390309
n=24    an=3.132628613  bn=3.159659942
n=48    an=3.139350203  bn=3.146086215
n=96    an=3.141031951  bn=3.142714600
n=192   an=3.141452472  bn=3.141873050
n=384   an=3.141557608  bn=3.141662747
n=768   an=3.141583892  bn=3.141610177
n=1536  an=3.141590463  bn=3.141597034
n=3072  an=3.141592106  bn=3.141593749
n=6144  an=3.141592517  bn=3.141592927
n=12288 an=3.141592619  bn=3.141592722
n=24576 an=3.141592645  bn=3.141592671
n=49152 an=3.141592651  bn=3.141592658
n=98304 an=3.141592653  bn=3.141592655
*/


#include <stdio.h>
#include <math.h>

int main() {
  int n = 6;
  double an = 3.0;
  double bn = 2.0*sqrt(an);

  printf("n=%d\tan=%10.9f\tbn=%10.9f\n", n, an, bn);

  for (n = 12; n < 100000; n*=2) {
    bn = 2.0 / (1.0/an + 1.0/bn);
    an = sqrt(an*bn);
    printf("n=%d\tan=%10.9f\tbn=%10.9f\n", n, an, bn);
  }
}
