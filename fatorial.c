#include <stdio.h>

int main (){
    int n,i,fatorial;
    i=1;
    fatorial=1;

    scanf("%d", &n);

    while(i<=n){
    fatorial = fatorial * i;
    i++;  
   }
   printf("%d\n", fatorial);

    return 0;
}