#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//negatif sayý girilene kadar toplamý,ortalamasýný ve adetini bulma 
	
	
	int adet=0,toplam=0,ortalama;
	
	int sayi =0;
	
	while(sayi >=0)
	{
		printf("sayi giriniz: ");
		scanf("%d",&sayi);
		
		if(sayi<0)
		break;
				
		toplam += sayi;
		adet++;
	}
	
	ortalama = toplam/adet;
	
	printf("Girilen sayi adeti: %d\n",adet);
	printf("Girilen sayilarin toplami: %d\n",toplam);
	printf("Girilen sayilarin ortalamasi: %d",ortalama);
	
	
	
	return 0;
}
