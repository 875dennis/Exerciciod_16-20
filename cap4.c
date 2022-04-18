//Grupo C05 - Alunos: Dennis Almeida, Lucas do Nascimento, Tatiana Gonçalves

#define ex3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#ifdef ex1
/*1 - Escreva um programa que receba um vetor de tamanho 10 e o decomponha em dois
    outros vetores. Um contera' as componentes de ordem ímpar e o outro contera'
    as componentes de ordem par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7}, o programa
    deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}.
*/


main()
{
    setlocale(LC_ALL,"");

    int vet[10];
    int vetImpar[5], vetPar[5];
    int a=0,x=0,z=0;
    char sair;

do
{
    for(a=0;a<10;a++)
      {
            printf("Vetor[%d]",a+1);
        scanf("%d",&vet[a]);
      }

       for(a=0;a<10;a++)
{
        if(vet[a]%2 == 1)
        {
           vetImpar[x] = vet[a] ;
            x++;
        }
        else if(vet[a]%2 == 0)
        {
            vetPar[z] = vet[a];
            z++;
        }
}

 printf("\nVetor impar:\n");
        for(a=0; a<x; a++)
        {
            printf("%d\n",vetImpar[a]);
        }

printf("\nVetor par:\n");
        for(a=0; a<z; a++)
        {
            printf("%d\n",vetPar[a]);
        }


        printf("\n\nFim");

    printf("\n\nDeseja continuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair=='s') || (sair=='S'));
}


#endif // ex1

#ifdef ex2
/*
2 - Receba via teclado valores do tipo int para uma matriz 5 x 5. Receba via
    teclado um valor x. O programa dever fazer a busca desse valor x na matriz
    e, ao final escrever a localizacao (linha e coluna) ou uma mensagem de
    ”nao encontrado”.
*/
main()
{
    setlocale(LC_ALL,"");

    int a,b,x;
    int matriz [5][5];
    int flag = 0;
    char sair;

do
{
    printf("Digite os valores para matriz\n");

    for(a = 0; a < 5; a++) //linha da matriz
        for(b = 0; b < 5; b++) //coluna da matriz
    {
         printf("Valores [%d][%d] = ",a,b);
        scanf("%d", &matriz[a][b]);
    }

    printf("Digite um número: ");
    scanf("%d",&x);

for(a = 0; a < 5; a++) //linha da matriz
        for(b = 0; b < 5; b++) //coluna da matriz
        {
     if(x == matriz[a][b])
     {
         printf("\nValor encontrado na matriz\n");
         flag = 1;
         printf("Linha [%d] coluna[%d]\n\n",a,b);
     }
        }
        if (flag == 0)
    {
        printf("\nValor não encontrado na matriz\n\n");
    }

    printf("\n\nDeseja continuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair=='s') || (sair=='S'));

    printf("\n\nFIM\n\n");

}



#endif // ex2

#ifdef ex3
/*
3 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
*/

main(){
int vetInt[3];
float vetFloat[3];
long vetLong[3];
double vetDouble[3];
unsigned int vetUns[3];

int numInt;
int numFloat;
int numLong;
int numDouble;
int numUns;

char sair;

do{
printf("\nDigite 3 numeros do tipo inteiros \n");
    for(numInt=0; numInt<=2; numInt++)
        {
            printf("Numero %d\n",numInt+1);
            scanf("%d",&vetInt[numInt]);
        }

printf("\nDigite 3 numeros do tipo float \n");
    for(numFloat=0; numFloat<=2; numFloat++)
        {
            printf("Numero %d\n",numFloat+1);
            scanf("%f",&vetFloat[numFloat]);
        }

printf("\nDigite 3 numeros do tipo long \n");
    for(numLong=0; numLong<=2; numLong++)
        {
            printf("Numero %d\n",numLong+1);
            scanf("%ld",&vetLong[numLong]);
        }

printf("\nDigite 3 numeros do tipo double \n");
    for(numDouble=0; numDouble<=2; numDouble++)
        {
            printf("Numero %d\n",numDouble+1);
            scanf("%lf",&vetDouble[numDouble]);
        }

printf("\nDigite 3 numeros do tipo unsigned\n");
    for(numUns=0; numUns<=2; numUns++)
        {
            printf("Numero %d\n",numUns+1);
            scanf("%u",&vetUns[numUns]);
        }


printf("        10        20        30        40        50\n");
printf("12345678901234567890123456789012345678901234567890\n");
//        int                 long                unsigned
//                  float               double
for(numInt=0; numInt<1; numInt++)
    for(numLong=0; numLong<1; numLong++)
        for(numUns=0; numUns<1; numUns++)
            for(numFloat=0; numFloat<1; numFloat++)
                for(numDouble=0; numDouble<1; numDouble++)
        {
            printf("  %-6d              %-11ld         %-10u \n",vetInt[numInt],vetLong[numLong],vetUns[numUns]);
            printf("            %-15.0f     %-15.0lf \n",vetFloat[numFloat],vetDouble[numDouble]);
        }

for(numInt=1; numInt<2; numInt++)
    for(numLong=1; numLong<2; numLong++)
        for(numUns=1; numUns<2; numUns++)
            for(numFloat=1; numFloat<2; numFloat++)
                for(numDouble=1; numDouble<2; numDouble++)
        {
            printf("  %-6d              %-11ld         %-10u \n",vetInt[numInt],vetLong[numLong],vetUns[numUns]);
            printf("            %-15.0f     %-15.0lf \n",vetFloat[numFloat],vetDouble[numDouble]);
        }

for(numInt=2; numInt<3; numInt++)
    for(numLong=2; numLong<3; numLong++)
        for(numUns=2; numUns<3; numUns++)
            for(numFloat=2; numFloat<3; numFloat++)
                for(numDouble=2; numDouble<3; numDouble++)
        {
            printf("  %-6d              %-11ld         %-10u \n",vetInt[numInt],vetLong[numLong],vetUns[numUns]);
            printf("            %-15.0f     %-15.0lf \n",vetFloat[numFloat],vetDouble[numDouble]);
        }
    printf("\n\nDeseja continuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair=='s') || (sair=='S'));

printf("\n\nFIM DO PROGRAMA\n\n");

}


#endif // ex3

#ifdef ex4
/*4 - Receba via teclado dez valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores ordenados.
*/

main()
{
    int i,j,ordem;
    int vetValores [10];
    char sair;

do{
    printf("Digite 10 valores\n");

//Recebe os valore que entraram para o vetor
    for(i=0; i<10; i++)
    {
    printf("Valores %d\n",i+1);
    scanf("%d",&vetValores[i]);
    }

//Ordena os números
    for(i = 0; i<10; i++)
        for(j=i+1; j<10; j++)
    {
        if(vetValores[i]>vetValores[j])
        {
            ordem=vetValores[i];
            vetValores[i]=vetValores[j];
            vetValores[j]=ordem;
        }
    }

        printf("Valores em ordem crescente %d\n");
        for(i=0; i<10; i++)
            printf("%d\n",vetValores[i]);

    printf("\n\nDeseja continuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair=='s') || (sair=='S'));

            printf("\n\nFIM DO PROGRAMA\n\n");

}

#endif // ex4

#ifdef ex5
/*
5 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    subtracao "-", subtraia os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.
*/

main()
{
    setlocale(LC_ALL,"");

   int vetUm [2][3];
   int vetDois [2][3];
   int vetTres[2][3];
   int i,j;
   char sair;

do{
//Recebe os numeros p/ o primeiro vetor
    printf("Digite os números do primeiro vetor:\n");
    for(i=0; i<2; i++)
        for(j=0; j<3; j++)
    {
        printf("Vetor[%d][%d]",i+1,j+1);
        scanf("%d",&vetUm[i][j]);
    }
//Recebe os numeros p/ o segundo vetor
     printf("\nDigite os números do segundo vetor:\n");
    for(i=0; i<2; i++)
        for(j=0; j<3; j++)
    {
        printf("Vetor[%d][%d]",i+1,j+1);
        scanf("%d",&vetDois[i][j]);
    }

    printf("Resultado da subtrações dos vetores\n");

    for(i=0; i<2; i++)
        for(j=0; j<3; j++)
        {
           vetTres[i][j] = vetUm[i][j] - vetDois[i][j];
           printf("%d - %d = %d\n",vetUm[i][j],vetDois[i][j],vetTres[i][j]);
        }

    printf("\n\nDeseja continuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair=='s') || (sair=='S'));

    printf("\n\nFIM DO PROGRAMA\n\n");

}

#endif // ex5
