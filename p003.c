#include <stdio.h>

/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/
int main(){
  int i, j, fac, max;

  int primefac[100];
  int pf;
  int run;

  max = 13195;
  pf = 0;
  run = 1;

  for(i=3; i<max; ++i){
    if(i%2 == 0)
      continue;
    if(max%i == 0){
      for(j=0; j<=pf; ++j){
        printf("wtf\n");
        if(i%primefac[j] == 0){
          printf("in modor\n");
        }
        else{
          
        }
      }
      printf("adding i (%d) into primefac[%d]\n", i, pf);
      primefac[pf] = i;
      ++pf;

      printf("%d\n", i);
    }
  }

  for(i=0; i<=pf; ++i){
    printf("%d, ", primefac[i]);
  }

  return 0;
}