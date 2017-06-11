/* Alunos: Eduardo Gomes de Oliveira, Carlos Alberto Rocha Lima, José Roberto dos Santos Souza*/

#include<stdio.h>

int main()
{
    int m,d;
    double t,kcal=5.5;

    printf("Vamos criar um novo Habito a partir de uma Deixa(Algum Objeto,Tempo Livre, Hobby...)\n");
    printf("Para esta deixa, vamos utilizar um tempo livre para praticar uma caminhada.\n");
    printf("----------------------------------------\n");

    printf("Digite quantos minutos voce tem disponivel para caminhar:\n");
    scanf("%d", &m);

    printf("Agora, digite a quantidade de dias da semana que voce pretende realizar tal habito:\n");
    scanf("%d", &d);

    while(m<=0 || d<=0 || d>7){
        printf("----------------------------------------\n");

        printf("Para poder criar um habito e necessario ter algum tempo livre.\n");
        printf("Digite quantos minutos voce tem disponivel para caminhar:\n");
        scanf("%d", &m);

        printf("Agora, digite a quantidade de dias da semana que você pretende realizar tal habito:\n");
        scanf("%d", &d);
    }

        t = (double)(m*kcal)*d;
        printf("----------------------------------------\n");
        printf("Parabens, com esse novo habito voce vai perder %.1lf Kcal por semana.\n", t);
        printf("Alem de ter uma recompensa no seu bem estar, isso pode te ajudar a criar habitos angulares,\n trazendo resultados positivos em outros aspectos da sua VIDA\n");

    return 0;
}
