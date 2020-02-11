#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, delta, x1, x2, num;

	printf("O programa a seguir calcula as ra�zes de equa��es quadr�ticas (ax�+bx+c).\n");

	do
	{
		printf("Entre com os coeficientes (a, b, c) separados por espa�os em branco.\n");
		scanf("%f %f %f", &a, &b, &c);

		delta = pow(b, 2) - 4 * a * c;

		if (a == 0 || delta < 0)
		{
			printf("A os coeficientes inseridos n�o constituem uma equa��o quadr�tica\n");
		}
			
		else if (delta == 0)
		{
			x1 = -b / (2 * a);
		printf("A raiz da equa��o �: %f\n", x1);
		}
		
		else
		{
			x1 = (-b + (sqrt(delta))) / (2 * a);
			x2 = (-b - (sqrt(delta))) / (2 * a);
		printf("As ra�zes s�o %f e %f\n", x1, x2);
		}	
		
		printf("Digite 1 para continuar, qualquer outro n�mero para parar.\n");
		scanf("%f", &num);
	}
	while (num == 1);

	return 0;
}
