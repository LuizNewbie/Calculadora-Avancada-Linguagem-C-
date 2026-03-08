#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float a,b,c,d,y,p,x,q,nm;
	printf("Bem-Vindo ao programa utilitario \n");
    printf("Digite 1 para calculadora \n");
    printf("Digite 2 para temperatura \n");
    printf("Digite 3 para medidas \n");
    scanf("%f", &a);
    if (a == 1) { 
    printf("Digite 1 para adicao \n");
    printf("Digite 2 para subtracao \n");
    printf("Digite 3 para multiplicacao \n");
    printf("Digite 4 para divisao \n");
    scanf("%f", &y);
	} if (y == 1) {
	printf("Digite o primeiro numero: ");
    scanf("%f", &b);
    printf("Digite o segundo numero :");
    scanf("%f", &c);
    d = b + c;
    printf("o resultado e: %.2f\n", d );
    } else if (y == 2) {
    printf("Digite o primeiro numero: ");
    scanf("%f", &b);
    printf("Digite o segundo numero: ");
    scanf("%f", &c);
    d = b - c;
    printf("o resultado e: %.2f\n", d );
    } else if (y == 3) {
    printf("Digite o primeiro numero: ");
    scanf("%f", &b);
    printf("Digite o segundo numero: ");
    scanf("%f", &c);
    d = b * c;
    printf("o resultado e: %.2f\n", d );
    } else if (y == 4) {
    printf("Digite o primeiro numero: ");
    scanf("%f", &b);
    printf("Digite o segundo numero: ");
    scanf("%f", &c);
    d = b / c;
    printf("o resultado e: %.2f\n", d );
    } else if (a == 2) {
    printf("Digite 1 para fazer Celsius para Fahrenheit\n");
    printf("Digite 2 para fazer Fahrenheit para Celsius\n");
    scanf("%f", &q);
    } if (q == 1) {
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &b); 	
	d = (b * 1.8) + 32;
    printf("o resultado e: %.2f\n", d );
    } else if (q == 2) {
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &b);
    d = (b - 32) / 1.8;
    printf("o resultado e: %.2f\n", d );
	} if (q == 3) {
    printf("Digite 1 para calcular area\n");
    printf("Digite 2 para calcular perimetro\n");
    printf("Digite 3 para calcular volume\n");
    scanf("%f", &nm);
    } if (nm == 1) {
    printf("Digite 1 para calcular quadrado\n ");
    printf("Digite 2 para calcular retangulo\n ");
    printf("Digite 3 para calcular circulo\n ");
    printf("Digite 4 para calcular cilindro\n ");
    printf("Digite 5 para calcular triangulo\n ");
    scanf("%f", &x); 	
    } else if (nm == 2) {
    printf("Digite 1 para calcular quadrado\n ");
    printf("Digite 2 para calcular retangulo\n ");
    printf("Digite 3 para calcular circulo\n ");
    printf("Digite 4 para calcular cilindro\n ");
    printf("Digite 5 para calcular triangulo\n ");
    scanf("%f", &x); 	
	} else if (nm == 3) {
    printf("Digite 1 para calcular quadrado\n ");
    printf("Digite 2 para calcular retangulo\n ");
    printf("Digite 3 para calcular circulo\n ");
    printf("Digite 4 para calcular cilindro\n ");
    printf("Digite 5 para calcular triangulo\n ");
    scanf("%f", &x); 	
    } 
	system("pause");
	
}
     
	 

 

	
