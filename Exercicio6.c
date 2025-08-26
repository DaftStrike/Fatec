#include <stdio.h>

void ContaDigitos(int Num){
    int QtdeDig;
    if (Num != 0)
        QtdeDig = 0;
    else
        QtdeDig = 1;
    while(Num != 0){
        Num = Num / 10;
        QtdeDig++;
    }
    printf("%d", QtdeDig);
}

int main(){
    int Numero;
    scanf("%d", &Numero);
    ContaDigitos(Numero);
    return 0;
}
