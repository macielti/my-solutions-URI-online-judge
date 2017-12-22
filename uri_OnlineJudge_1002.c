#URI Online Judge | 1002 - Área do Círculo

#include <stdio.h>

void main(){
    double pi=3.14159, raio, area;
    scanf("%lf",  &raio);
    area= pi*(raio*raio);
    printf("A=%.4lf\n", area);   
}
