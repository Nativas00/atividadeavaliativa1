#include <stdio.h>
#include <string.h>

void salario_a(){
    float num, res;
    scanf("%f", &num);

    res = num * 1.05;

    printf("R$ %.2f\n", res);
}

void salario_b(){
    float num, res;
    scanf("%f", &num);

    res = num * 1.07;

    printf("R$ %.2f\n", res);
}

void salario_c(){
    float num, res;
    scanf("%f", &num);

    res = num * 1.08;

    printf("R$ %.2f\n", res);
}

int main(){
  char letra[1];
  
  scanf("%s", letra);
    
    if (strcmp(letra, "a") == 0) {
        salario_a();
    } else if (strcmp(letra, "b") == 0) {
        salario_b();
    } else if (strcmp(letra, "c") == 0) {
        salario_c();
    }
   
  return 0;
  
}