#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\n");
	printf("\xdc OLA MUNDO, BOM DIA FATEC \xdc");
	printf("\n\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\n");
	printf("\n         \xdc\xdc\xdc   \xdc\xdc\xdc     ");
	printf("\n\n\n\n\n         \xdb\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdb");
	printf("\n____________________________");*/
	system("color F0");
	printf("digite um numero: ");
	int num = getchar();
	printf("seu numero digitado foi: \n");
	putchar(num);
	return 0;
}
