#include <stdio.h>

int main(){

  int mat, syn;
  scanf("%d", &mat);

  if(mat % 2 == 0){
    printf("%d eh par\n", mat);
  }
  else{
    printf("%d eh impar\n", mat);
  }

  printf("A soma dos algarismos de %d", mat);
  
  while(mat>0){
    syn+=mat%10;
    mat/=10;
  }

  switch(syn){
    case 0:
      printf(" eh igual a %d\n", syn);
      break;
    default:
      printf(" eh %d\n", syn);
      break;
  }
  
  return 0;
  
}