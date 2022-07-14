#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

  srand(time(NULL));

  char a[1000];
  int j = 0 , k = 0;
  
  printf("Who are you?\n>");
  scanf("%s",a);
  printf("Hello, %s!\n",a);
  printf("Tossing a coin ...\n");
  
  for(int i = 0 ; i < 3 ; i++){
    int num = rand()%2;

    if(num == 0){
      printf("Round %d: Heads\n" , i );
      j++;
    }
    else{
      printf("Round %d: Tails\n", i );
      k++;
    }
  }

  printf("Heads : %d, Tail : %d\n" , j , k );

  return 0;
}
