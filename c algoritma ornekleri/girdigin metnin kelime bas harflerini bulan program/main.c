#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//girdiðiniz metnin kelime baþ harflerini bulan program
	char metin[100];
	printf("Metin giriniz: ");
	gets(metin);
	int n = strlen(metin);	
	
	int i;
	
	printf(" %c ",metin[0]);
	
	for(i=0;i<n;i++)
	{
		if(metin[i] == ' ')
		printf(" %c ",metin[i+1]);
	}
	return 0;
}
