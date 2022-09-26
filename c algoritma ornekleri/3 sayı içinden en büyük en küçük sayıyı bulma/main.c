#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// en büyük en küçük sayý bulma
	
	int sayi1,sayi2,sayi3;
	int enbuyuk,enkucuk;
	
	printf("3 adet sayi giriniz:");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	
	enbuyuk =(sayi1>sayi2 && sayi1>sayi3) ? sayi1 : (sayi2>sayi1 && sayi2>sayi3) ? sayi2 : sayi3;
	enkucuk =(sayi1<sayi2 && sayi1<sayi3) ? sayi1 : (sayi2<sayi1 && sayi2<sayi3) ? sayi2 : sayi3;
	
	printf("En buyuk sayi: %d\n",enbuyuk);
	printf("En kucuk sayi: %d",enkucuk);
	
	return 0;
} 
