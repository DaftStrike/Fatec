#include <stdio.h>

float Mult(float X, float Y){
    float Resultado;
    Resultado = X * Y;
    return(Resultado);
}

int main(){
    float X, Y;
    scanf("%f %f", &X, &Y);
    printf("%.2f", Mult(X, Y));
    return 0;
}
