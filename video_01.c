#include <stdio.h>

int main (){

    char assunto[100], fontes[100];
    int op1, op2, i, f1;

    printf("BEM-VINDO A TECNICA FEYMAN\n");
    printf("----------------------------------------\n");
    printf("PASSO 1\n");
    printf("Escolha um assunto a ser estudado: ");
    scanf("%s", assunto);
    printf("Escolha quantas serao suas fontes de estudo: \n");
    scanf("%d", &f1);
    printf("Liste suas fontes: \n");
    for(i=1;i<=f1;i++){
        scanf("%s", fontes);
    }
    printf("----------------------------------------\n");
    printf("PASSO 2\n");
    printf("Estude sobre o assunto.\n");
    do{
        printf("Entendeu o assunto %s? 1-Sim 0-Nao: ", assunto);
        scanf("%d", &op1);
        if(op1 == 0){
            printf("Estude novamente!\n");
        }
    }while(op1!=1);
    printf("----------------------------------------\n");
    printf("PASSO 3\n");
    printf("Escreva sobre o assunto %s.\n", assunto);
    printf("*Escreva como se estivesse explicando o assunto a alguem e de modo que a pessoa entenda.\n*Escrever em folha e nao em caderno, traz resultados mais positivos.\n");
    do{
        printf("Escreveu sobre o assunto %s? 1-Sim 0-Nao: ", assunto);
        scanf("%d", &op1);
        if(op1 == 0){
            printf("Escreva sobre o assunto!\n");
        }
    }while(op1!=1);
    printf("----------------------------------------\n");
    printf("PASSO 4\n");
    do{
    printf("Domina o assunto %s? 1-Sim 0-Nao: ", assunto);
    scanf("%d", &op2);
        if(op2 == 0){
            printf("VOLTE AO PASSO 2\n");
        }
    }while(op2 != 1);
    printf("----------------------------------------\n");
    printf("PASSO 5\n");
    printf("Depois de dominar o assunto, reescreva simplificando-o de um modo em que outras pessoas entendam.\n");
    printf("Dica: Deixe o conteudo mais visual, inserindo analogias graficas. Isso torna o conteudo mais facil de ser compreendido.\n");
    return 0;
}
