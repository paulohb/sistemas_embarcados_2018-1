#include <stdio.h>
#include <stdlib.h>

int main(int argc,  char * argv[])
{
    FILE *fp; // declarando ponteiro para arquivo
    fp = fopen("ola_usuario_2.txt","w"); // abrindo o arquivo para escreita


    fputs(argv[1], fp); // escreve o nome do usuario no arquivo
    putc('\n', fp); // pular uma linha no arquivo

    fputs(argv[2], fp); // escreve idade  do usuario no arquivo
    putc('\n', fp); // pular uma linha no arquivo


    fclose(fp);


    return 0;

}

