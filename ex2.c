/*
Exercıcio 2. [Arquivos] Faca um programa que receba do usuario um arquivo texto. Crie outro arquivo
texto de saıda contendo o texto do arquivo de entrada original, porem substituindo todas as vogais pelo
caractere ‘*’. Alem disso, mostre na tela quantas linhas esse arquivo possui. Dentro do programa faca
o controle de erros, isto e, insira comandos que mostre se os arquivos foram abertos com sucesso, e caso
contrario, imprima uma mensagem de erro encerrando o programa.
*/


#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *A;
    FILE *B;
    A = fopen (argv[1], "r");
    B = fopen (argv[2], "w");

    if((A == NULL) || (B == NULL)){
        printf("ERRO ao abrir arquivo\n");
        //system("pause");
        //exit(1);
    }else{
        printf("Arquivos abertos com sucesso\n");

        int count = 0;
        char c;
        for (c = getc(A); c != EOF; c = getc(A))
            if (c == '\n') // incrementa contador se tiver nova linha
                count = count + 1;

        printf("o aqruivo possui: %d linhas\n",count+1);//+1 pois a lingugem c comeca a contar no zero...


        //char vogais[] = {'a','e','i','o','u'};
        //char c;
        char c1;
        while( (c1 = fgetc(A)) != EOF){
            //copia o arquivo A para o arquivo B
            fputc(c1,B);
        }
        char t = fgetc(B);
        while (t != EOF){//troca as vogais por *
            if (t == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u')
            {
                t = fputc('*', B);
            }

            t = fgetc(B);
        }
    }
    fclose(A);
    fclose(B);

    return 0;
}
