#include <stdio.h>
#include <math.h>

int prime_factor(int number);
int is_prime(int number);

/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/
int main(){
  int i, bIsPrime;
  int primes[100];

  i = 0;
  for(i = 0; i < 25; ++i){
    printf("%d", i);
    if(is_prime(i) == 1){
      printf(" is prime\n");
    } 
    printf("\n");
  }

  return 0;
}

/*
int prime_factor(int n){
  int i;

  i = 0;
  for(i = 2; i <=n; ++i){

  }
}
*/

int is_prime(int n){
  int i;

  if((n % 2) == 0 && n > 3){
    return 0;
  }

  i = 0;
  for(i = 2; i <= n-1; ++i){
    if(n % i == 0){
      return 0;
    }
  }
  if(i == n){
    return 1;
  }

  return 0;
}