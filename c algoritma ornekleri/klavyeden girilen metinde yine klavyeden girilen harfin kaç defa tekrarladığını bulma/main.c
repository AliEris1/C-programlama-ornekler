#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// klavyeden girilen metin içinden yine klavyeden girilen bir karakterin kaç defa geçtiðini bulma
	
	char metin[100] ;
	char ch;
	int i;
	int adet = 0;
	printf("metin giriniz:"); gets(metin);
	printf("karakter giriniz: "); scanf("%c",&ch);
	
	for(i=0; metin[i] !=' ';i++)
	{
		if (metin[i] == ch)
		adet++ ;
	} 
	
	printf("%c harfinden %d adet var",ch,adet);


	return 0;
}
