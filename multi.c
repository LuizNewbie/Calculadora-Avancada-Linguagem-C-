#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float b,c,d,p,x,pi;
    int a,y,q,nm,ar,vol,per;    
	pi = 3.14;
    a = 0;
    y = 0;
    q = 0;
    nm = 0;
    ar = 0;
    vol = 0;
    per = 0;
    printf("Bem-Vindo ao programa utilitario \n");
    printf("Digite 1 para calculadora \n");
    printf("Digite 2 para temperatura \n");
    printf("Digite 3 para medidas \n");
    scanf("%i", &a);
    
	if (a == 1) { 
    printf("Digite 1 para adicao \n");
    printf("Digite 2 para subtracao \n");
    printf("Digite 3 para multiplicacao \n");
    printf("Digite 4 para divisao \n");
    scanf("%i", &y);
    } else if (a == 2) {
    printf("Digite 1 para fazer Celsius para Fahrenheit\n");
    printf("Digite 2 para fazer Fahrenheit para Celsius\n");
    scanf("%i", &q);
    } else if (a == 3) {
    printf("Digite 1 para calcular area\n");
    printf("Digite 2 para calcular perimetro\n");
    printf("Digite 3 para calcular volume\n");
    scanf("%i", &nm);
    } else if (a > 3) {
    printf("Invalido!\n");
    
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
    } else if (y > 4) {
    printf("Invalido!\n");
	
	
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
    } else if (q > 2) {
    printf("Invalido!\n");
	
    } if (nm == 1) {
    printf("Digite 1 para calcular quadrado\n ");
    printf("Digite 2 para calcular retangulo\n ");
    printf("Digite 3 para calcular circulo\n ");
    printf("Digite 4 para calcular triangulo\n ");
    scanf("%i", &ar); 
    } else if (nm == 2) {
    printf("Digite 1 para calcular quadrado\n ");
    printf("Digite 2 para calcular retangulo\n ");
    printf("Digite 3 para calcular circulo\n ");
    printf("Digite 4 para calcular triangulo\n ");
    scanf("%i", &per); 	
    } else if (nm == 3) {
    printf("Digite 1 para calcular cubo\n ");
    printf("Digite 2 para calcular paralelepipedo\n ");
    printf("Digite 3 para calcular cilindro\n ");
    printf("Digite 4 para calcular piramide\n ");
    scanf("%i", &vol); 	
    } else if (nm > 3) {
    printf("Invalido!\n");



    } if (ar == 1) {
    printf("Digite a medida do lado: ");
    scanf("%f", &b);
    d = b * b;
    printf("A area e: %.2f\n", d );
    } else if (ar == 2) {
    printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &c);
    d = b * c;
    printf("A area e: %.2f\n", d );
    } else if (ar == 3) {
    printf("Digite o raio: ");
    scanf("%f", &b);
    d = (b * b) * pi;
    printf("A area e: %.2f\n", d );
	} else if (ar == 4) {
     printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &c);
    d = (b * c) / 2;
    printf("A area e: %.2f\n", d );
     } else if (ar > 4)  {
    printf("Invalido!\n");
	
	
	} if (per == 1) {
    printf("Digite a medida do lado: ");
    scanf("%f", &b);
    d = b + b + b + b;
    printf("O perimetro e: %.2f\n", d );
    } else if (per == 2) {
    printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &c);
    d = b + b + c + c;
    printf("O perimetro e: %.2f\n", d );
    } else if (per == 3) {
    printf("Digite o raio: ");
    scanf("%f", &b);
    d = (2 * pi) * b;
    printf("O perimetro e: %.2f\n", d );
	} else if (per == 4) {
    printf("Digite a medida do lado: ");
    scanf("%f", &b);
    d = b + b + b;
    printf("O perimetro e: %.2f\n", d );
     } else if (per > 4) {
    printf("Invalido!\n");
	
	
    } if (vol == 1) {
    printf("Digite a medida da aresta: ");
    scanf("%f", &b);
    d = b * b * b;
    printf("O volume e: %.2f\n", d );
    } else if (vol == 2) {
    printf("Digite a altura: ");
    scanf("%f", &b);
    printf("Digite o comprimento: ");
    scanf("%f", &c);
    printf("Digite a largura: ");
    scanf("%f", &x);
    d = b * c * x;
    printf("O volume e: %.2f\n", d );
    } else if (vol == 3) {
    printf("Digite o raio: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &c);
    d = (b * b) * (c * pi);
    printf("O volume e: %.2f\n", d );
	} else if (vol == 4) {
    printf("Digite a area da base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &c);
    d = (b * c) / 3;
    printf("O volume e: %.2f\n", d );
     } else if (vol > 4) {
    printf("Invalido!\n");
     
} 
    system("pause");
}

     
	 

 

	