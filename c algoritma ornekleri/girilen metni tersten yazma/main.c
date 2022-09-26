#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//girilen metni tersten yazan program
	
	char metin[100];
	
	printf("metin giriniz:"); gets(metin);
	
	int i;
	
	int n = strlen(metin);
	
	for(i=0;i<n;i++)
	{
		printf("%c",metin[n-i-1]);
	}
	
	return 0;
}
