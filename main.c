#include <stdio.h>

int main() {
    int idade;
    printf ("Digite sua idade: ");
    scanf("%d", &idade);     
                                                                                                                                                                                               
    if (idade >= 18) {
        printf("Entrada Inteira");
    } else if (idade  >=12  &&  idade <=17) {
        printf("Meia Entrada");
    } else {
        printf("Entrada Kids");
    }

    return 0;
}