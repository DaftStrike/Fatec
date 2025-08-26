#include <stdio.h>

int main(){
	int tabNum[2][4], Lin, Col;

	for(Lin=0; Lin <= 2; Lin++)
		for(Col=0; Col <= 4; Col++)
		{
			printf("Escreva o valor da linha %d e coluna %d: ", Lin, Col);
			scanf("%d", &tabNum[Lin][Col]);
		}
     
	for(Lin=0; Lin <= 2; Lin++)
	{
		for(Col=0; Col <= 4; Col++)
			printf("\ntabNum[%d][%d] = %d", Lin, Col, tabNum[Lin][Col]);
		printf("\n");
	}
	return 0;
}