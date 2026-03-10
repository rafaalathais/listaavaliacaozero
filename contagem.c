#include <stdio.h>
#define max 50

int main (){
    char s[max];
    int i=0;
    
    fgets(s, max, stdin);

   while(s[i]!= '\n'){
    i++;
   }

   printf("%d", i);
    return 0;
}