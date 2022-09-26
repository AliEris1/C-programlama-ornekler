#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//bir karakter ve sayi girildiðinde sayý kadar karakteri yazan program
	
	char karakter;
	int sayi;
	int i;
	
	printf("Karakteri giriniz: ");
	scanf("%c",&karakter);
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
		
	for(i=0; i<sayi;i++)
	printf("%c",karakter);
	
	
	
	
	return 0;
}
