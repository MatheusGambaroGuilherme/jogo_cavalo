#include <stdio.h>
#include <stdlib.h>

int menu();
void banco();
void apostas();


int main(){
    while(menu() != 1);
    

    system("pause");
    return 0;
}

int menu(){
 int option;

 printf("##   ##   #####   ######    #####   #######           ######     ##       ####   #######\n");
 printf("##   ##  ##   ##   ##  ##  ##   ##   ##   #            ##  ##   ####     ##  ##   ##   #\n");
 printf("##   ##  ##   ##   ##  ##  #         ## #              ##  ##  ##  ##   ##        ## #  \n");
 printf("#######  ##   ##   #####    #####    ####              #####   ##  ##   ##        ####  \n");
 printf("##   ##  ##   ##   ## ##        ##   ## #              ## ##   ######   ##        ## #  \n");
 printf("##   ##  ##   ##   ##  ##  ##   ##   ##   #            ##  ##  ##  ##    ##  ##   ##   #\n");
 printf("##   ##   #####   #### ##   #####   #######           #### ##  ##  ##     ####   #######\n");

 printf("Digite:\n(1) para apostas\n(2) para acessar o banco\n(0) Sair\n");
 printf("Resposta: ");
 scanf("%d", &option);

 switch(option){
    case 1:
    apostas();
    break;

    case 2 :
    banco();
    break;

    case 0:
    return 1;
    break;

    default:
    printf("Nenhuma opção selecionada!\n");
    break;
 };
}

void banco(){

}

void apostas(){

}