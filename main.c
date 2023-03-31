#include <stdio.h>

int main() {
    int num;
    int cont=0;
    int suma=0;
    int promedio;
    printf("ingrese una nota\n:");
    scanf("%d",num);
    while(num!=0)
    {
        cont++;
        suma=suma+num;
        promedio=suma%cont;}

    printf("ingrese una nota\n:");
    printf("el promedio es %d\n:",promedio );

    return 0;
}
