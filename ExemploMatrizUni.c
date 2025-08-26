#include <stdio.h>

int main(){
	int tabIdade[10], Col;

	for(Col=0; Col <= 9; Col++){
		printf("Digite a idade: ");
		scanf("%d", &tabIdade[Col]);
	}
     
	for(Col=0; Col <= 9; Col++)   
		printf("\ntabIdade[%d] = %d", Col, tabIdade[Col]);
	return 0;
}
