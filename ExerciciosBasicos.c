#include <stdio.h>

//Rotina Dobro
//Sem passagem de par�metros
void Dobro(void){
	int Numero, Dobro;
	printf("Digite um numero inteiro: ");
	scanf("%i", &Numero);
	Dobro = Numero *  2;
	printf("Dobro do numero: %i", Dobro);
}

//Fun��o CalcDesconto
//Com par�metro VC
float CalcDesconto(float VC){
   float Desc;
	if(VC >= 800) 
		Desc = 0.15 * VC;
	else
		Desc = 0;   
	return(Desc);
}

//Rotina Venda
//Sem passagem de par�metros
void Venda(){
	int Codigo, QtdeVend;
	float PrecUnit, ValComp, ValPagar; 
	printf("\n\nDigite o codigo do produto: ");
	scanf("%i", &Codigo);
	printf("\nDigite a qtde. do produto em unidades: ");
	scanf("%i", &QtdeVend);
	printf("\nDigite o preco unitario :");
	scanf("%f", &PrecUnit);
	ValComp = PrecUnit * QtdeVend;
	ValPagar = ValComp - CalcDesconto(ValComp);
	printf("\n\nValor da compra: %.2f", ValComp);
	printf("\nValor do desconto: %.2f", CalcDesconto(ValComp));
	printf("\nValor a pagar: %.2f", ValPagar);
}

//Fun��o CalcMedia
float CalcMedia(float P1, float P2){
	float Media;
	Media = (P1 + P2)/2;
	return(Media);
}

//Rotina Media
void Media(){
	int Codigo;
	float Prv1, Prv2;
	printf("\n\nInforme o codigo do aluno: ");
	scanf("%i", &Codigo);
	while(Codigo > 0){
	printf("\nDigite a nota da P1 e da P2: ");
    scanf("%f %f", &Prv1, &Prv2);
	printf("\nMedia do aluno: ");
    printf("%.2f", CalcMedia(Prv1, Prv2));
    if(CalcMedia(Prv1, Prv2) >= 5)
		printf(" - Aprovado");
    else
		printf("Reprovado");          
    scanf("%i", &Codigo);
	}
}

//Rotina Tabuada
//Com passagem de par�metros
void Tabuada(int F, int Q){
	int Cont, Resultado;
      
	for(Cont = 1; Cont <= Q; Cont++){     
		Resultado = F * Cont;
		printf("\n%i x %i = %i", F, Cont, Resultado);         
	}
}


//Exerc�cios B�sicos - Rotina principal
void main(void)
{
   int Opcao, Numero, QtdeElem;    
   
   do{
        printf("\n\nDigite:");
        printf("\n\n1 - Dobro do Numero");
        printf("\n2 - Venda do Produto");
        printf("\n3 - Media do Aluno");
        printf("\n4 - Tabuada");
        printf("\n5 - Sair");
        printf("\n\nOpcao => ");
        scanf("%i", &Opcao);
		if(Opcao == 1)
			Dobro(); //Chamada da Rotina Dobro
		else
			if(Opcao == 2)
				Venda(); //Chamada da Rotina Venda
			else
				if(Opcao == 3)
					Media(); // Chamada da Rotina Venda
				else
					if(Opcao == 4){
						printf("\nDigite um numero: ");
						scanf("%i", &Numero);
						printf("\nDigite a qtde de elementos da tabuada: ");
						scanf("%i", &QtdeElem);
						Tabuada(Numero, QtdeElem); //Chamada da Rotina Tabuada
					}
	}while (Opcao < 5);
}