#include <stdio.h>

int main (){
    int i, n[4],soma=0;

    for(i=1; i<=5;i++){
        scanf("%d", &n[i]);
        soma = soma + n[i];
    }

   printf("%d\n", soma);

    return 0;
}