#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float valor1, valor2, soma, sub, mult, div;
	char ope;
	
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &valor2);
	
	printf("Digite a opera��o desejada: ");
	scanf(" %c", &ope);
	
	switch(ope){
		case'+':
		soma=valor1+valor2;
    printf("A soma �: %.2f", soma);
    break;
    case'-':
    	sub=valor1-valor2;
    	printf("A subtra�ao �: %.2f", sub);
        break;
        
        case'*':
        	mult=valor1*valor2;
        	printf("A multiplica��o �: %.2f", mult);
        	break;
        case'/':
        	div=valor1/valor2;
        	printf("A divis�o �: %.2f", div);
        	break;
}
		
}
