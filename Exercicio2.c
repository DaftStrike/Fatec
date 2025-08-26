#include <stdio.h>
#define DOL 5.44

float Dolarizador(float Real){
    float PrecDol;
    PrecDol = Real / DOL;
    return PrecDol;
}

int main(){
    float PrecReal;
    scanf("%f", &PrecReal);
    printf("%.2f", Dolarizador(PrecReal));
    return 0;
}
