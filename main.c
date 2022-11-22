#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <time.h>

void ex01()
{
    int opcao;
    do
    {
        printf("\nSelecione uma opção \n0 - Sair\n1 - Inserir valores\nDECISAO: ");
        scanf("%i", &opcao);
        srand(time(NULL));

        if (opcao == 0)
        {
        }
        else if (opcao == 1)
        {
            int arrayUnico[13], x, y, multplicar;
            printf("\nGerando valores aleatorios...\n");
            for (int i = 0; i < 13; i++)
            {
                arrayUnico[i] = rand() % 101;
            }
            printf("Array = {");
            for (int i = 0; i < 13; i++)
            {
                printf(" %i ", arrayUnico[i]);
            }
            printf("}\n");

            do
            {
                printf("Digite o valor para X: ");
                scanf("%i", &x);

                printf("Digite o valor para Y: ");
                scanf("%i", &y);

                if (x >= 13 || y >= 13)
                {
                    printf("\nValor Invalido!!\n");
                }
            } while (x >= 13 || y >= 13);
            for (int i = 0; i < 13; i++)
            {
                if (i == x)
                {
                    printf("\n\nValor na Posicao X = %i", arrayUnico[i]);
                };
                if (i == y)
                {
                    printf("\nValor na Posicao Y = %i\n", arrayUnico[i]);
                };
            }

            multplicar = arrayUnico[x] * arrayUnico[y];
            printf("\nResultado:\nX=%i vezes Y=%i igual a %i\n", arrayUnico[x], arrayUnico[y], multplicar);
        }
        else
        {
            printf("\nValor invalido\n");
        }
    } while (opcao != 0);
    printf("\nAte mais!\n\n");
};

void ex02()
{
    int opcao;
    float vetA[5], vetB[5], valorDigitado;
    printf("Bem-vindo!!!\nPreencha os valores abaixo!\n");
    do
    {
    Inicio:
        for (int i = 0; i < 5; i++)
        {
            printf("VetorA[%i] = ", i);
            scanf("%f", &valorDigitado);
            vetA[i] = valorDigitado;
        }
        printf("\n");
        for (int i = 0; i < 5; i++)
        {
            printf("VetorB[%i] = ", i);
            scanf("%f", &valorDigitado);
            vetB[i] = valorDigitado;
        }
    Escolha:
        printf("\n0 - sair\n1 - Soma dos vetores\n2 - Localizar maior e menor dos vetores\n3 - Novos valores para os vetores\nEscolha: ");
        scanf("%i", &opcao);

        if (opcao == 0)
        {
        }
        else if (opcao == 1)
        {
            float vetSoma[5];
            printf("\nVetorA = {");
            for (int i = 0; i < 5; i++)
            {
                printf(" %.2f ", vetA[i]);
            }
            printf("}\nVetorB = {");
            for (int i = 0; i < 5; i++)
            {
                printf(" %.2f ", vetB[i]);
            }
            printf("}\nVetorSoma = {");
            for (int i = 0; i < 5; i++)
            {
                vetSoma[i] = vetA[i] + vetB[i];
                printf(" %.2f ", vetSoma[i]);
            }
            printf("}\n\nSoma Concluida...\nRetornando...\n\n");

            goto Escolha;
        }
        else if (opcao == 2)
        {
            float menorVal = vetA[0], maiorVal = vetB[0];
            int posMenor = 0, posMaior = 0;
            for (int i = 0; i < 5; i++)
            {
                if (vetA[i] < menorVal)
                {
                    menorVal = vetA[i];
                    posMenor = i;
                }
                if (vetB[i] > maiorVal)
                {
                    maiorVal = vetB[i];
                    posMaior = i;
                }
            };
            printf("\nMenor valor %.2f na posicao %i\n", menorVal, posMenor);
            printf("\nMaior valor %.2f na posicao %i\n", maiorVal, posMaior);

            goto Escolha;
        }
        else if (opcao == 3)
        {
            printf("\nGerando novos numeros...\n");
            goto Inicio;
        }
        else
        {
            printf("\nNumero Invalido!!!\n\n");
        }

    } while (opcao != 0);
}

int main()
{
    ex01();
    // ex02();
};