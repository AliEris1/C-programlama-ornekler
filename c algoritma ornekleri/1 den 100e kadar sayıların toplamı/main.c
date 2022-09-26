#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// 1 den 100 e kadar sayýlarýn toplamýný veren program
	int toplam = 0;
	int i;
	
	for(i =0;i<100;i++)
		toplam +=i;

	printf("Sonuç : %d" ,toplam);
	
}
