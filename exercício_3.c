#include <stdio.h>
#include <stdlib.h>

int main(){

int item;

	printf("cardápio: \n");
	printf("1 - X-Burger (R$10) \n 2 - X-Salada (R$12) \n 3 - Refrigerante (R$5) \n 4 - Suco (R$6) \n");
	
	printf("Digite o item do cardápio desejado: ");
	scanf("%d", &item);
	
	switch(item){
		case(1):
			printf("Escolheu x-burguer no valor de 10 reais");
			break;
			
			case(2):
				printf("Escolheu x salada no valor de 12 reais");
					break;
				case (3):
					printf("Escolheu refrigerante no valor de 5 reais");
						break;
					case(4):
						printf("Escoolheu suco  no valor de 6 reais");
							break;
	}
	

		
}
