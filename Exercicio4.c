#include <stdio.h>
void Tabuada(int n){
    int Res;
    for(int i=1; i <= 10; i++){
        Res = n * i;
        printf("\n%d", Res);
    }
}

int main(){
    int Num;
    scanf("%d", &Num);
    Tabuada(Num);
    return 0;
}
