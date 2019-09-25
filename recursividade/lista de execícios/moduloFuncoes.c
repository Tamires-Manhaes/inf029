#include <stdio.h>
#include "moduloFuncoes.h"

int menu(){
    int opcao; 
    printf("\n");
    printf("0 - Sair\n");
    printf("1 - questao 1\n");
    printf("\n");

    printf("Digite opcao desejada: ");
    scanf("%d", &opcao);
    return opcao;
}

int questao1(int n){
    if((n == 1) || (n == 0))
        return 1;
    else 
        return (n * questao1(n - 1));
}

int questao2 (int n){
    if(n == 1 || n == 2)
        return 1;
    else 
        return questao2(n-1) + questao2(n-2);
}

int questao3 (int n){
    if(n == 0)
      return n;
    else {
		printf("%d", n % 10);
		n = n / 10;
		return invert(n);
    }
}

int questao4 (int *v, int tamanho){
 if (tamanho == 1)
      return v[0];
   else 
	  return v[tamanho - 1] + questao4(v, tamanho - 1); 
}


