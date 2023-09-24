#include <stdio.h>

int main() {

  int syn;
  scanf("%d", &syn);
  
   if (syn >= 1930 && (syn - 1930) % 4 == 0) {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", syn);
    } else if (syn >= 1896 && (syn - 1896) % 4 == 0) {
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", syn);
    } else {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", syn);
    }
  
  return 0;
}