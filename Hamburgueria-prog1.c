#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    float totalVendas = 0;
    float valorHamburguer;
    int qtd = 0, cond;
    char sexo[4];
    char codigo[4];
    char codigoResposta;
    int escolhaMenu;
    char codigoBusca;
	int locPedido = 0;
	float totalPedido[4] = {0};
	int achou = 0;
	int qtdMaior=0;
	int qtdMenor=0;
	float valorPedido=0; 
    float pedidoMaior=0;
    float somaTotal=0;
    float media=0;
    int qtdHomens=0;
    float totalMulheres=0;
    float pedidoMenor=0;
    int totalItens=0;
    int qtdNulos=0;
    int qtdItensPedido[4];
    int vendaPedido[7] = {0};
    char maisVendido=0;
    int maisVenda=0;

            printf("\033[31m"); //abre cor - vermelho
            printf("Escolha o código do seu hambúrguer:\n");
            printf("\033[0m"); //fecha cor
            printf ("\033[36m"); //abre cor ciano
            printf("\na) Hamburguer Angus Deluxe + Batata - R$ 32,00");
            printf("\nb) BBQ Bacon Burger + Batata - R$ 28,00");
            printf("\nc) Classic Cheeseburger + Batata - R$ 22,00");
            printf("\nd) Double Beef Burger + Batata - R$ 35,00");
            printf("\ne) Egg Burger + Batata - R$ 24,00");
            printf("\nf) French Onion Burger + Batata - R$ 30,00");
            printf("\ng) Garden Veggie Burger + Batata - R$ 26,00\n");
             printf("\033[0m"); //fecha cor
    
        for (int i = 0; i < 4; i++){
            do{ 
                do {
                     cond = -1;
                    printf("\n%dº Pedido:", i + 1);
                    printf("\nCódigo do pedido: ");
                    scanf(" %c", &codigo[i]);
                    codigo[i] = toupper(codigo[i]);//para ler como letras maiúsculo
                
                        
                        switch(codigo[i]){
                            case 'a':
                            case 'A':
                            valorHamburguer = 32.00;
                            vendaPedido[0]++;    
                                break;
                            case 'b':
                            case 'B':
                            valorHamburguer = 28.00;
                            vendaPedido[1]++;
                                break;
                            case 'c':
                            case 'C':
                            valorHamburguer = 22.00;
                            vendaPedido[2]++;
                                break;
                            case 'd':
                            case 'D':
                            valorHamburguer = 35.00;
                            vendaPedido[3]++;
                                break;
                            case 'e':
                            case 'E':
                            valorHamburguer = 24.00;
                            vendaPedido[4]++;
                                break;
                            case 'f':
                            case 'F':
                           valorHamburguer = 30.00;
                           vendaPedido[5]++;
                                break;
                            case 'g':
                            case 'G':
                          valorHamburguer = 26.00;
                          vendaPedido[6]++;
                                break;
                            default:
                                printf("\nCódigo inválido, tente novamente.");
                                 cond = 0;
                        }
                }while(cond == 0);
             
               
                qtd++;
                totalItens++;
              do {
                printf("\nDeseja fazer mais algum pedido? (s ou n): ");
                scanf(" %c", &codigoResposta);
                codigoResposta = tolower(codigoResposta); // Transforma a resposta em letra minúscula
                
                if(codigoResposta != 's' && codigoResposta != 'n') {
                    printf("\nResposta inválida.\n");
                }
            } while(codigoResposta != 's' && codigoResposta != 'n');
            
            totalVendas = valorHamburguer + totalVendas;
            totalPedido[i] += valorHamburguer;
        } while(codigoResposta == 's');
        
        do { 
        qtdItensPedido[i]=qtd;
           qtd=0;
            printf("\nSexo do cliente (m/f ou o): ");
            scanf(" %c", &sexo[i]);
            sexo[i] = tolower(sexo[i]); // Transforma a resposta em letra minúscula
            
            if(sexo[i] != 'm' && sexo[i] != 'f' && sexo[i] != 'o'){
                printf("\nSexo inválido\n");
            }
            else{
                printf("\nCadastro feito com sucesso!\n");
                printf("\t\n\n%.1f\n\n", totalPedido[i]);
            }
        } while(sexo[i] != 'm' && sexo[i] != 'f' && sexo[i] != 'o');
    }
     do {  //Do para ser possível retornar menu principal 
         printf("\033[31m"); //abre cor
         
         printf("\nEscolha o que deseja fazer:\n");
        
         printf("\033[0m"); //fecha cor
         
         printf ("\033[36m"); //abre cor
         
         printf("\n1) Ver informação de pedidos baseado no código: ");
         printf("\n2) Ver informações de todos os pedidos cadastrados: ");
         printf("\n3) Encerrar o programa: \n\n");
         scanf("%d", &escolhaMenu);
        
        printf("\033[0m");//fecha cor
         
 
	switch (escolhaMenu) {
	case 1: 
		printf("\nInforme o codigo do pedido que desejado (A-G): ");
		scanf(" %c", &codigoBusca);
		codigoBusca = toupper(codigoBusca); //para ler como letras maiúsculo
		for (int i = 0; i < 4; i++) {
		  	if (codigo[i] == codigoBusca) {
				printf("\nPedido %d:", i + 1);
				printf("\nValor do pedido: R$ %.2f", totalPedido[i]); //Valor do pedido, não total de tudo
				printf("\nQuantidade de itens: %d", qtdItensPedido[i]);
				printf("\nSexo do cliente: %c\n", sexo[i]);
				achou = 1 ;
			}
		} 
		
		if(achou==0){
		    printf ("Código invalido");
		}
		break;
	
		case 2: 
	
          
        printf("Qual o valor do pedido?");
        scanf("%f", &valorPedido);
        
        
        
         for(int i = 0; i < 4; i++) {
             if(totalPedido[i] < valorPedido ){
                 qtdMenor++;
            }
         }
        
        for(int i = 0; i < 4; i++) {
            if(totalPedido[i] > 35){
                qtdMaior++;
              
            }
        }   
        for(int i = 0; i < 4; i++){
            if(sexo[i]=='m'|| sexo[i]=='M'){
                qtdHomens++;
             }
        }
        for(int i = 0; i < 4; i++){
            if(sexo[i]=='f'|| sexo[i]=='F'){
                totalMulheres+=totalPedido[i];
             }
        }
         for(int i = 0; i < 4; i++){
         if(sexo[i]=='o' || sexo[i]=='O'){
               qtdNulos++;
           }
        }
        for(int i = 0; i < 4; i++){
           somaTotal+=totalPedido[i];
             }
      
        for(int i = 0; i < 4; i++){
            if(totalPedido[i] > pedidoMaior){
                 pedidoMaior = totalPedido[i];
                 
                 }
             }
             maisVenda=0;
             maisVendido=0;
             for(int i = 0; i < 7; i++){
                 if(vendaPedido[i]>maisVenda){
                     maisVenda = vendaPedido[i];
                      maisVendido= 'A' + i;
                     
                 }
             }
       
         media=somaTotal/4;
         
	
         printf("\n\nPedidos abaixo do valor informado: \n%d", qtdMenor);  
         printf("\n\nPedidos acima de 35,00:\n%d" , qtdMaior);
         printf("\n\nQuantidades de compradores Homens:\n%d" , qtdHomens);
         printf("\n\nTotal comprado pelas Mulheres:\n%.2f" , totalMulheres);
         printf("\n\nValor medio entre os pedidos:\n%.2f" , media);
         printf("\n\nValor do pedido mais caro:\n%.2f" , pedidoMaior);
         printf("\n\nQuantidade total de itens pedido:\n%d" , totalItens);
         printf("\n\nQuantidade de itens comprados por pessoas que preferiram não falar o sexo.:\n%d" , qtdNulos);
         printf("\n\nItens mais vendido:\n%c" , maisVendido);	    
            break;
        
        
         case 3:
        printf("\nPrograma finalizado");
        exit(0); //encerra o programa de vez, ignorando qualquer outra instrução.
      
	        
	    } 
	    
	printf("\nDeseja retornar ao menu principal? (s (sim) ou n (não) ): ");
    scanf(" %c", &codigoResposta);
        

                
      }while(codigoResposta == 's' || codigoResposta == 'S'); //fechando o DO
    
  

        
      
        
    return 0;
}
