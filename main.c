#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int numero;
    int palpite;
    int vezes;
    vezes = 0;
  	int jogar = 1;
    
    srand(time(NULL));
    
    numero = rand() % 20 + 1;
    
    printf("===JOGO DE ADVINHAR===\n");
    printf("Serao sorteados numeros de 1 a 20!\n");
    printf("Advinhe o numero!\n");
    
    while(jogar==1)
	{
		printf("\nDigite seu palpite(1-20): ");
		scanf("%d", &palpite);
		vezes++;
		
		if(palpite<numero)
		{
			printf("Muito baixo!\n");
			printf("Tente Novamente!\n");
			
		}	
		else if(palpite>numero)
		{
			printf("Muito alto!\n");
			printf("Tente Novamente!\n");
		}	
		
		else 
		{
			printf("\nAcertou!, vc acertou em %d vezes: ", vezes);
			
			printf("\n\nvc deseja jogar novamente?\n\n");
			printf("1) sim\n");
			printf("2) nao\n");
			printf("Digite a opcao: ");
			scanf("%d", &jogar);
			

		}	
		
		
		
		
		
		
		
		
		
		
		
		
		
	} 
    
    
    
    
    
    
    
    
    
    
    return 0;
}