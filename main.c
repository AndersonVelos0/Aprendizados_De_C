//Biblioteca para ler e imprimir dados
#include <stdio.h>
//Biblioteca para calcular e outras operações
#include <stdlib.h>
//Biblioteca para adicionar acento
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    printf("oi, voces, estou imprimindo na tela\n");
    //escrevendo uma variavel
    int a = 20;
    int b = 50;
    printf("A variavel a vale: %d ", a);
    // fazendo operaçoes matematicas
    printf("%d\n", a+b);

    //escaneando o valor da variavel a e pedindo um novo valor para o usuario
    scanf("%d", &a);
    printf("O valor da variavel a mudou para %d\n", a);

  //Tipo de dados quebrados 
  float c = 5.4;
  printf("A variavel a vale: %f\n ", c);
  scanf("%f", &c);
  printf("O valor da variavel c mudou para %f \n", c);
  
  //CARACTERES
  char letra = 't';
  printf("A variavel letra vale: %c\n ", letra);
  //antes de ler a variavel letra, necessário dar um flush para limpar o buffer
  fflush(stdin);
  scanf("%c", &letra);
  printf("O valor da variavel letra mudou para:  %c", letra);

}
