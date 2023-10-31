#include <stdio.h>

int main (void)
{

	unsigned Max;
	unsigned A, B;
	char operacao;

	scanf("%u", & Max);
	scanf("%u %c %u", & A, &operacao, &B);

	if (operacao == '+')
		if (A + B > Max)
			printf("OVERFLOW\n");
		else
			printf("OK\n");
	else
		if (A * B > Max)
			printf("OVERFLOW\n");
		else
			printf("OK\n");


}
