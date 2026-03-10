#include <stdio.h>

int main (){
    int n,i=1,cont=0;
    
     scanf("%d", &n); //nº maiores ou iguais a 1

        while(i<=n){
           if(n%i == 0){
            cont++;
           }
           i++;
        }
        
        if(n==1){
          printf("%d nao e primo", n);
        }
        else if(cont<=2){
            printf("%d e primo", n);
        }else{
           printf("%d nao e primo", n); 
        }

    return 0;
}