#include <stdio.h>

void SomaInteiros(int Num){
    int Soma = 0;
    while(Num >= 0){
        Soma = Soma + Num;
        scanf("%d", &Num);
    }
    printf("%d", Soma);
}

int main(){
    int Numero;
    scanf("%d", &Numero);
    SomaInteiros(Numero);
    return 0;
}
