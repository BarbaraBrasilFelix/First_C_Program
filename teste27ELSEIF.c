#include <stdio.h>

int main (){

    float poluicao;
    char grupo;

    printf("Informe o nível de poluição: ");
    scanf("%f", &poluicao);
    fflush(stdin);
    printf("Informe o grupo da empresa: ");
    scanf("%c", &grupo);

    if (poluicao >= 0.3 && poluicao < 0.4){
        if (grupo == '1'){
            printf("Grupo %c suspender suas atividades", grupo);
        }else{
            printf("A Empresa possui níveis aceitáveis de poluição");
        }
    } else if (poluicao >= 0.4 && poluicao < 0.5){
        if (grupo == '1' || grupo == '2'){
        printf("Grupo %c suspender suas atividades", grupo);
        }else{
            printf("A Empresa possui níveis aceitáveis de poluição");
        }
    } else if (poluicao >= 0.5){
        printf("Grupo %c suspender suas atividades", grupo);
    }else {
        printf("A Empresa possui níveis aceitáveis de poluição");
    }
}