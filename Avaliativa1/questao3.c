#include <stdio.h>

int main() {

  int senha;
  scanf("%d", &senha);
  printf("senha cadastrada: %d\n", senha);

  while(1){
    int senha2;
    scanf("%d", &senha2);

    if(senha2 != senha){
      printf("senha invalida!\n");
    }
    else {
      printf("senha valida!\n");
      return 0;
    }
  }    
}