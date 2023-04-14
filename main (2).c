#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n = 0, num = 0;

    for(; n < 5; n++){

        num = num + 3;
        printf("\n");
        printf("Multiplo de tres: %i", num);
        printf("\n");

    }
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1, num2 = 1, num3 = 1;

    printf("=-=-= For =-=-=\n");
    for(num = 1; num <= 100; num++){
        printf("%d ",num);
    }
    printf("\n");
    printf("=-=-= While =-=-=\n");
    while(num2 <= 100){
        printf("%d ",num2);
        num2 = num2+1;
    }
    printf("\n");
    printf("=-=-= Do while =-=-=\n");
    do{
        printf("%d ",num3);
        num3 = num3+1;
    } while(num3 <= 100);
        
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n = -10, num = 11;

    for(; n <= 0; n++){

        num = num - 1;
        printf("\n");
        printf("%i", num);
        

    }
    printf("\n");
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    printf("=-=-= While =-=-=\n");
    while(num <= 100000){
        printf("%d\n",num);
        num = num+1000;
    }


    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n = 0, num = 0, numsoma, i = 0;

    for(; n < 10; n++){

        i = i + 1;
        printf("%i - Digite o valor a ser somado : ", i);
        scanf("%i", &numsoma);

        num = num + numsoma;

    }
    printf("\n");

    printf("O valor final da soma eh: %i", num);
    printf("\n");
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n = 0, num = 0, numsoma, i = 0;
    float media;

    for(; n < 10; n++){

        i = i + 1;
        printf("%i - Digite o valor a ser somado : ", i);
        scanf("%i", &numsoma);

        num = num + numsoma;

        media = num/10;

    }
    printf("\n");

    printf("A media eh: %.2f", media);
    printf("\n");
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n = 0, num = 0, numleia, i = 0, divisao = 10;

    for(; n < 10; n++){

        i = i + 1;
        printf("%i - Digite o inteiro positivo : ", i);
        scanf("%i", &numleia);

        if(numleia < 0){
            printf("numero desconsiderado\n");
            divisao--;
            numleia = 0;
        }

        num = num + numleia;

    }

    float numfinal;

    numfinal = num/divisao;

    printf("\n");
    printf("O valor final da media eh: %.2f", numfinal);
    printf("\n");
    return 0;
}


#include<stdio.h>
int main()
{
 int numero, maior, menor;
 int i;

 printf("Digite um valor: ");
 scanf("%i", &numero);

 maior=numero;
 menor=numero;

 for(i=1; i<10; i++)
 {
 printf("Digite um valor: ");
 scanf("%i", &numero);

 if(numero>maior)
 maior=numero;
 else
 if(numero<menor)
 menor=numero;
 }


 printf("Menor numero eh: %d",menor);
 printf("\nMaior numero eh: %d",maior);

 return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n, reset = 0, impar = -1;

    printf("Digite o valor N entre 1 e 5: ");
    scanf("%i", &n);

    if(n < 0 || n > 5){
            printf("Valor invalido");
            printf("\n");
            exit (0);
        }

    while(reset < n){

        reset++;
        impar = impar + 2;
        printf("\n");
        printf("Valor impar: %i", impar);

    }

    printf("\n");
    return 0;
}


#include <stdio.h>

int main() {

int i, soma=0;

for(i=1; i<=100; i++) {

if (i % 2 == 0)
soma += i;
}

printf("Soma dos 50 primeiros numeros: %d\n", soma);

return 0;

}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n, reset = -1, natural = -1;

    printf("Digite o valor N entre 0 e 10: ");
    scanf("%i", &n);

     if(n < 0 || n > 10){
            printf("Valor invalido");
            printf("\n");
            exit (0);
        }

    while(reset < n){

        reset++;
        natural += 1;
        printf("\n");
        printf("Valor natural: %i", natural);

    }
    

    printf("\n");
    return 0;
}


#include "stdio.h"

int main(){
  int numero, soma = 1;
  printf("Informe um numero inteiro: ");
  scanf("%d",&numero);
  

  for (int i=2 ; i <= (numero/2.0+1) ; i++ ) {
        
    if ( numero % i == 0 ) {
      printf("%d - ",i);
      soma += i;
    }
  }
  printf("A soma dos divisores de %d e %d",numero,soma);
  return 0;
}


#include <stdio.h>

int main(){

	int soma = 0;
	int contador;

	for(contador = 1; contador < 1000; contador ++){
		if(contador % 3 == 0 && contador % 5 == 0){
			soma += contador;
		}
	}

	printf("A soma dos Numeros Naturais abaixo de 1000\n que sao multiplos de 3 ou 5 e: %d ", soma);

	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int d1, d2, n, i;

  printf("Quantas vezes voce quer lancar os dados? ");
  scanf("%d", &n);

  srand(time(NULL)); 

  for (i = 0; i < n; i++) {
    d1 = rand() % 6 + 1; 
    d2 = rand() % 6 + 1; 

    printf("Lancamento %d: d1 = %d, d2 = %d, ", i+1, d1, d2);

    if (d1 > d2) {
      printf("d1 > d2\n");
    } 
    else if (d1 < d2) {
      printf("d1 < d2\n");
    } 
    else {
      printf("d1 = d2\n");
    }
  }

  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int i, num;

    for(i = 0; i == 0;){
        printf("\n");
        printf("Digite o numero: ");
        scanf("%d",&num);
        printf("\n");

        if(num <= 0){
            printf("Encerrando");
            i += 1;
            break;
        }
        else{

        printf("O quadrado do numero eh: %i", num*num);
        printf("\n");
        printf("O cubo do numero eh: %i", num*num*num);
        printf("\n");
        printf("A raiz quadrada do numero eh: %.3f", sqrt(num));
        printf("\n");
        
        }

    }
    
    return 0;
}


#include <stdio.h>

int main() {
  int opcao;
  float num1, num2, resultado;

  do {
    printf("Escolha uma opcao:\n");
    printf("(1) Adicao\n");
    printf("(2) Subtracao\n");
    printf("(3) Multiplicacao\n");
    printf("(4) Divisao\n");
    printf("(5) Sair\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("=-=-= Adicao =-=-=\n");
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    } 
        else if (opcao == 2) {
        printf("=-=-= Subtracao =-=-=\n");
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    } 

    else if (opcao == 3) {

        printf("=-=-= Multiplicacao =-=-=\n");
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
    } 

    else if (opcao == 4) {
        printf("=-=-= Divisao =-=-=\n");
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        if (num2 == 0) {
            printf("Nao eh possivel dividir por zero\n");} 
        else {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);}
    } 

    else if (opcao == 5) {
        printf("Encerrando o programa...\n");} 
    else {
        printf("Opção invalida\n");}
    } while (opcao != 5);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int Altchico = 150, Altze = 110, ano = 0;

        while(Altze <= Altchico){
            Altchico += 2;
            Altze += 3;
            ano += 1;
        }

        printf("A altura final de chico sera: %icm", Altchico);
        printf("\nA altura final de ze sera: %icm", Altze);
        printf("\nQuantidade de anos para ze passar chico sera: %i", ano);

    return 0;
}


#include <stdio.h>

int main() {
  int ano, ano_atual;
  float salario = 2000, aumento = 1.5;

  printf("Digite o ano atual: ");
  scanf("%d", &ano_atual);

  for (ano = 1996; ano <= ano_atual; ano++) {
    salario *= 1 + (aumento / 100);
    aumento *= 2;
  }

  printf("Salario atual: %.5f\n", salario);

}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int saque, cem = 0, cinquenta = 0, vinte= 0, dez= 0, cinco= 0, dois= 0, um= 0;

    printf("Digite o valor a ser sacado: ");
    scanf("%i", &saque);

    while(saque >= 100){
        saque -= 100;
        cem += 1;
    }
    while(saque >= 50){
        saque -= 50;
        cinquenta += 1;
    }
    while(saque >= 20){
        saque -= 20;
        vinte += 1;
    }
    while(saque >= 10){
        saque -= 10;
        dez += 1;
    }
    while(saque >= 5){
        saque -= 5;
        cinco += 1;
    }
    while(saque >= 2){
        saque -= 2;
        dois += 1;
    }
    while(saque >= 1){
        saque -= 1;
        um += 1;
    }

    printf("\nserao preciso %i nota(s) de 100", cem);
    printf("\nserao preciso %i nota(s) de 50", cinquenta);
    printf("\nserao preciso %i nota(s) de 20", vinte);
    printf("\nserao preciso %i nota(s) de 10", dez);
    printf("\nserao preciso %i nota(s) de 5", cinco);
    printf("\nserao preciso %i nota(s) de 2", dois);
    printf("\nserao preciso %i nota(s) de 1", um);
    
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, quantDiv = 0;
    float somaPrim = 2;

    for (i = 3; i <= 2000000; i += 2) {
        quantDiv = 2;
        for (j = 3; j <= (int)sqrt(i); j += 2) {
            if (i % j == 0) {
                quantDiv += 2;
                break;
            }
        }
        if (quantDiv == 2) {
            somaPrim += i;
        }
    }
    printf("A soma dos numeros primos abaixo de 2 milhoes eh: %.0f\n\n", somaPrim);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int a, b, i, j, ehPrimo, contador = 0;
	
	printf("Informe o Valor de a: ");
	scanf("%i", &a);

	printf("Informe o Valor de b: ");
	scanf("%i", &b);

	if(a > b){
		printf("Intervalo invalido");
		exit(0);
	}

	for(i = a; i <= b; i++){
		ehPrimo = 1;
		for(j = 2; j <= i/2; j++){
			if(i % j == 0){
				ehPrimo = 0;
				break;
			}
		}
		if(ehPrimo && i > 1){
			contador += 1;
		}
	}

	printf("\nExistem %d Numeros Primos no Intervalo %i e %i", contador, a, b);

	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int multi, i,j, Maior_P = 0, digitos = 0, temp, inverso, cifra, fator1, fator2;


    for (j = 100; j <= 999; j++) {
        for (i = 100; i <= 999; i++) {
            multi = i * j;

            if(multi > Maior_P){
                temp = multi;
                while (temp != 0) {
                    digitos++;
                    temp /= 10;
                }
            }

            temp = multi;
                inverso = 0;
                while(temp != 0) {
                    cifra = temp % 10;
                    inverso += cifra * pow(10, digitos - 1);
                    temp /= 10;
                    digitos--;
                }

            if (multi == inverso) {
                    Maior_P = inverso;
                    fator1 = j;
                    fator2 = i;
            }

        }
}
    printf("O maior palindromo eh formado pela multiplicacao de %d x %d = %d\n\n", fator1, fator2, Maior_P);

    return 0;


}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int n, i, j, k = 0;
	
	printf("Informe o numero de linhas: ");
	scanf("%i", &n);

    for(i = 1; n >= i; i++){
        for(j = 1; j <= i; j++){
            k++;
            printf("%i ", k);
        }
            printf("\n");
    }
