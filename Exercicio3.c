#include <stdio.h>
#include <math.h>
#define PI 3.14159

float Volumer(float H, float R){
    float Vol;
    Vol = PI * pow(R, 2) * H;
    return Vol;
}

int main(){
    float Altura, RaioBase;
    scanf("%f %f", &Altura, &RaioBase);
    printf("%.2f", Volumer(Altura, RaioBase));
    return 0;
}
