#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float valor1, valor2, soma, sub, mult, div;
	char ope;
	
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &valor2);
	
	printf("Digite a operação desejada: ");
	scanf(" %c", &ope);
	
	switch(ope){
		case'+':
		soma=valor1+valor2;
    printf("A soma é: %.2f", soma);
    break;
    case'-':
    	sub=valor1-valor2;
    	printf("A subtraçao é: %.2f", sub);
        break;
        
        case'*':
        	mult=valor1*valor2;
        	printf("A multiplicação é: %.2f", mult);
        	break;
        case'/':
        	div=valor1/valor2;
        	printf("A divisão é: %.2f", div);
        	break;
}
		
}
