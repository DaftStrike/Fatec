#include <stdio.h>

void InverteNumero(int n){
    int mun = 0;
    while(n != 0){
        if(mun != 0)
            mun = mun * 10;
        mun = mun + (n % 10);
        n = n / 10;
    }
    printf("%d", mun);
}

int main(){
    int Numero;
    scanf("%d", &Numero);
    InverteNumero(Numero);
    return 0;
}
