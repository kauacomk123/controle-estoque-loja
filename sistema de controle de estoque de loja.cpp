#include <stdio.h>
#include <string.h>

 int main(){
 	int camisa=10, calca=10, sapato=10;
 	int opcao,produto,quantidade;
 	
 	while(1){
	 
 	printf("produtos vendidos na loja\n");
 	printf("escolha uma opcao\n");
 	printf("1 adcionar produtos\n");
 	printf("2 remover produtos\n");
 	printf("3 ver estoque\n");
 	printf("digite 4 para sair\n ");
 	printf("opcao: ");
 	scanf("%d",&opcao);
 	 if (opcao == 4) {
            printf("Saindo do programa...\n");
            break;
        }
            
 	switch(opcao){
 	case 1:
     printf("Escolha o produto para adicionar:\n");
     printf("1 - Camisa\n2 - Calça\n3 - Sapato\n");
     printf("Produto: ");
     scanf("%d", &produto);
     printf("Quantidade a adicionar: ");
      scanf("%d", &quantidade);
                
      if (produto == 1) {
    camisa += quantidade;
      } else if (produto == 2) {
     calca += quantidade;
     } else if (produto == 3) {
         sapato += quantidade;
      } else {
        printf("Produto inválido!\n");
     }
     break;
            
  case 2:
 printf("Escolha o produto para remover:\n");
   printf("1 - Camisa\n2 - Calça\n3 - Sapato\n");
    printf("Produto: ");
   scanf("%d", &produto);
     printf("Quantidade a remover: ");
   scanf("%d", &quantidade);
                
    if (produto == 1 && camisa >= quantidade) {
     camisa -= quantidade;
     } else if (produto == 2 && calca >= quantidade) {
     calca -= quantidade;
     } else if (produto == 3 && sapato >= quantidade) {
       sapato -= quantidade;
   } else {
    printf("Quantidade inválida ou produto insuficiente no estoque!\n");
     }
      break;

    case 3: 
      printf("\nEstoque atual:\n");
       printf("Camisa: %d\n", camisa);
      printf("Calça: %d\n", calca);
      printf("Sapato: %d\n", sapato);
      break;

     default:
    printf("Opção inválida! Tente novamente.\n");
      break;
        }
    }
return 0;
}
