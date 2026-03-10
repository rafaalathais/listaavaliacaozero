#include <stdio.h>

int main (){
    float temp,graus;
    char escala;

    printf("Digite primeiro a temperatura e depois digite sua escala 'c' para Celsius ou 'f' para Fahrenheit");
    scanf("%f", &temp);
    scanf("%s", &escala);
        
    if (escala == 'c'){
      graus = (1.8*temp) + 32;
      printf("%.2f F", graus);
    } else if (escala == 'f'){
        graus = (temp-32)/1.8;
        printf("%.2f °C", graus);
    }

    return 0;
}