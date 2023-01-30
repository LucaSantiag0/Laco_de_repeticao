#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("Pré Aula Semana 13\n");
	
	float a, b, c;
	
	do {
    	printf("Digite a Base: ");
    	scanf("%f", &a);
    	
    	printf("Digite a Altura: ");
    	scanf("%f", &b);
    	
		if (a<=0||b<=0) {printf("\nErro\n\n");}
	} while (a<=0||b<=0);

	c = (a*b)/2;
	printf("\nÁrea vai ser igual a: %.2f", c);
}
