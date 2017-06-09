/* Alunos: Eduardo Gomes de Oliveira, Carlos Alberto Rocha Lima, José Roberto dos Santos Souza*/
#include <stdio.h>

int main(void)
{
   int i,a=25,b,yx;
   char texto[30];
   printf("DIGITE QUNTIDADE DE TAREFAS DE HOJE A SEREM FEITAS.\n");
   scanf("%d",&b);
   fflush(stdin);
   yx = 1;
   for(i=1; i<=b; i++){
        printf("Digite a tarefa a ser feita.\n");
        gets(texto);
        if(yx<=3){
            printf("Tarefa %s concluida voce tem %d descanco.\n",texto,a/5);
        }else if(yx=4){
            printf("Tarefas concluidas voce tem de %d a 30 de descanso. \n",a*3/5);
        }
        yx++;
        if(yx>4){
            yx = 1;
        }
    }
   return 0;
}
