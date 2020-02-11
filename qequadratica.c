#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, delta, x1, x2, num;

	printf("O programa a seguir calcula as raízes de equações quadráticas (ax²+bx+c).\n");

	do
	{
		printf("Entre com os coeficientes (a, b, c) separados por espaços em branco.\n");
		scanf("%f %f %f", &a, &b, &c);

		delta = pow(b, 2) - 4 * a * c;

		if (a == 0 || delta < 0)
		{
			printf("A os coeficientes inseridos não constituem uma equação quadrática\n");
		}
			
		else if (delta == 0)
		{
			x1 = -b / (2 * a);
		printf("A raiz da equação é: %f\n", x1);
		}
		
		else
		{
			x1 = (-b + (sqrt(delta))) / (2 * a);
			x2 = (-b - (sqrt(delta))) / (2 * a);
		printf("As raízes são %f e %f\n", x1, x2);
		}	
		
		printf("Digite 1 para continuar, qualquer outro número para parar.\n");
		scanf("%f", &num);
	}
	while (num == 1);

	return 0;
}
