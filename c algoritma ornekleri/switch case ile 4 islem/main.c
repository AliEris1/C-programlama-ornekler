#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//switch case ile 4 iþlem
	
	int s1,s2;
	int secim;
	
	printf("birinci sayiyi giriniz: ");
	scanf("%d",&s1);
	
	printf("islemi seciniz[+(1), -(2), *(3), /(4)]: ");
	scanf("%d",&secim);
	
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&s2);
	
	switch(secim)
	{
		case 1:
			printf("toplama sonucu: %d",(s1+s2));
			break;
		case 2:
			printf("cikarma sonucu: %d",(s1-s2));
			break;
		case 3:
			printf("carpma sonucu: %d",(s1*s2));
			break;
		case 4:
			printf("bolme sonucu: %d",(s1/s2));
			break;
		default:
			printf("Hatali islem!");
			
	}
	
	
	
	
	
	
	return 0;
}
