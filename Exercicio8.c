#include <stdio.h>

float MediaNotas(float notas[], int n){
    float Media = 0;
    for(int i = 0; i < n; i++){
        Media = Media + notas[i];
    }
    Media = Media / n;
    return Media;
}

int main(){
    int NumNotas;
    scanf("%d", &NumNotas);

    float VetorNotas[NumNotas];
    for(int i = 0; i < NumNotas; i++){
        scanf("%f", &VetorNotas[i]);
    }
    printf("%.2f", MediaNotas(VetorNotas, NumNotas));
    return 0;
}
