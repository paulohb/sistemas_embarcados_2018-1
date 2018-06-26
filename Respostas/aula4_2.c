#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    FILE *fp; // declarando ponteiro para arquivo
    fp = fopen("ola_usuario_1.txt","w"); // abrindo o arquivo para escreita

    char nome[100]; // string para armazenar o nome
    char idade[10]; // string para armazenar idade

    printf("Digite seu nome: ");
    gets(nome); // receber o nome do usuário pelo teclado
    fputs(nome, fp); //  escrever a string 'nome' no arquivo
    putc('\n', fp); // pular uma linha no arquivo

    printf("Digite sua idade: ");
    gets(idade); // receber idade do usuário pelo teclado
    fputs(idade, fp); //  escrever a string 'idade' no arquivo
    putc('\n', fp);

    fclose(fp);


    return 0;

}

