//1.DESENVOLVER UM SISTEMA ACADÉMICO QUE FAÇA A GESTÃO DE NOTAS DE UMA
 //INSTITUIÇÃO DE ENSINO TAIS COMO CONSULTA DO CURSO, DISCIPLINAS, NOTAS,
  //DE ESTUDANTES E DIGA SE O ESTUDANTE ESTA APROVADO OU REPROVADO. ETC.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//Estrutura Aluno onde vai conter todas as informações do aluno(nome,matricula,curso,disciplinas,notas)
//
struct Aluno {
    char nomes[10][50];
    int matricula;
    char curso[50];
    char disciplinas[5][50];
    float notas[5];
   
    
};

//Aqui criamos mais uma estrutura Aluno, e renomeamos para alunos. tudo que o Aluno tem a também faz parte do aluno
struct Aluno alunos[100];
    int numAlunos = 0;
	int i;
	float media;
	float soma = 0;
	int opcao;
	char opcao1;


//o nosso menu

int main() {


	int n_alunos;
	int voltar;
	int op2;
	int remover;
	
	
	
	
	
	
	
	
//INICIANDO A QUANTIDADE DE ALUNOS QUE DESEJA QUE O PROGRAMA PROCESSA	
	
	

printf("Quantas Alunos Pretendes cadastrar?\n");
scanf("%d",&n_alunos);
system("cls");

//difinição de menu
menu:
	
printf("\n\nGRUPO NUMERO 9 ");	
printf("\n\n\n\t\t\t\t\tISPOZANGO-SISTEMA DE GESTAO ESCOLAR\n");

printf("\n\nMenu");
 
    printf("\n1 - CADASTRAR ALUNOS");
    printf("\n2 - CONSULTAR ALUNO");
    printf("\n3 - LISTA DE DOS ALUNOS CADASTRADOS");
    printf("\n4 - REMOVER ALUNO DO SISTEMA");
    printf("\n5 - Lista de Alunos Aprovados");
    printf("\n6 - SAIR\n");
    printf("opcao:  ");
    scanf("%d", &opcao);
	system("cls");
	

//criarmos uma estrutura de condição para pegar cada valor do nosso menu
//usamos a funcção switch que server para criar uma estrutura de seleção ,quando usuario selecionar opção 1 ele será redirecionado no opção 1
switch(opcao){

		case 1:
//chamada das opceos do menu
	
    // caso 1 ele faz cadastro do aluno, onde vai pegar todos as informações da strut aluno Cadastrar aluno
	printf("\n-------------------CADASTRAR ALUNO------------------------");
    printf("\nNome: ");
    //condição de inicio e paregem de ciclo, onde começa no 0 até o numero de alunos que eu precessar, a função for 
	//aqui serve para criar um inicio e paragem 
    for (i = 0; i < n_alunos; i++) {
        scanf("%s", alunos[numAlunos].nomes[i]);
    }
    
	printf("Matricula: ");
    scanf("%d", &alunos[numAlunos].matricula);
    
    printf("Curso: ");
    scanf("%s", alunos[numAlunos].curso);
    printf("Disciplinas: \n");
	//recebendo 5 disciplinas
    for (i = 0; i < 5; i++) {
        scanf("%s", alunos[numAlunos].disciplinas[i]);
    }
    printf("Notas: \n");
    //condição de inicio e paregem de ciclo, onde começa no 0 
	//recebendo 5 notas das 5 disciplinas
    for (i = 0; i < 5; i++) {
        scanf("%f", &alunos[numAlunos].notas[i]);
        soma += alunos[numAlunos].notas[i];
    }
    numAlunos++;
     //achando a media//
	media = soma / 5;
 	
    printf("voltar-0\n");
    scanf("%d",&voltar);
    system("cls");
    goto menu;
   	
	case 2:
	//caso 2 o sistema atraves da matricula ele encontra o respectivo aluno
    printf("\n|----------------CONSULTAR ALUNO--------------------|\n");
    printf("\n|---------------------SISTEMA DE GESTAO DE ESCOLA-------|\n");
    printf("Matricula: ");
    int matricula;
    
    scanf("%d", &matricula);
    for (i = 0; i < numAlunos; i++) {
    	//condição if caso matricula cadastrada e a matricula que o usuario digitar forem igual ele vai imprimir na tela esse tal aluno encontrado
        if (alunos[i].matricula == matricula) {
            printf("Nome: %s\n", alunos[i].nomes);
            printf("Curso: %s\n", alunos[i].curso);
            printf("Disciplinas: %s\n", alunos[i].disciplinas);
            printf("Media das notas: %.2f\n\n", media);
            //condição se a media for maior ou igual a 10 ,apto, a função if aqui faz a codição
            if(media >= 10){
            	printf("\nApto\n ");
			}else
				printf("\nN/Apto\n");
	 
            
	}else
		printf("Essa matricula nao existe");
		printf("voltar-0\n");
    scanf("%d",&voltar);
    system("cls");
    goto menu;


	case 3:
		
        printf("--------------------LISTA DE DOS ALUNOS CADASTRADOS-------------------------------");
        
        
          for (i = 0; i < numAlunos; i++) {
            printf("Nome: %s\n", alunos[i].nomes);
            printf("Curso: %s\n", alunos[i].curso);
            printf("Disciplinas: %s\n", alunos[i].disciplinas);
            printf("Média das notas: %.2f\n\n", media);
            if(media >= 9){
            	printf("\nApto\n ");
			}else
				printf("\nN/Apto\n");
			}
			  printf("voltar-0\n");
    scanf("%d",&voltar);
    system("cls");
    goto menu;
        
    break;  
     
	  case 4 :
	  	
    printf("----------------REMOVER ALUNO DO SISTEMA-------------");
    printf("\n\nDigite um numero para continuar...\n\n");
    scanf("%d",&op2);
    system("cls");           
    printf("Digite o numero da matricula\n");
    scanf("%d", &alunos[numAlunos].matricula);
    printf("TEM CERTEZA que desseja remover sua conta?");
    printf("\n \n 1-SIM 2-NAO \n\n");
    //ccasp a op 1 remover o aluno
    scanf ("%d",&remover);            
     if (remover==1){
        printf("Conta Removida com sucesso!!!\n");
        system("cls");
        //funcção para regressar ao menu
        goto menu;
    
        }else {
         system("cls");
         goto menu;
    }
    break;              
       case 5:
       	printf("|-----------------------OS APROVADOS---------------------------|");
       	if(media >= 9){
            	printf("Apto ");
			}else
				printf("N");
			
			
			printf("Nome: %s\n", alunos[i].nomes);
            printf("Curso: %s\n", alunos[i].curso);
            printf("Disciplinas: %s\n", alunos[i].disciplinas);
    		printf("Aprovou");
    		
			  printf("voltar-0\n");
    scanf("%d",&voltar);
    system("cls");
    goto menu;
       		
	case 6:
		printf("Saindo....");
		system("cls");
		//sair do sistema
		exit(0);



}
       
}
}

