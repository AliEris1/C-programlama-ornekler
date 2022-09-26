#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//girilen n tane sayýnýn teklerin ve çiftlerin toplama
	
	int n, tekToplam =0 ,ciftToplam =0;
	int i;
	
	printf("n degerini giriniz: "); scanf("%d",&n);
	
	for(i =0;i<n;i++)
	{
		int sayi;
		printf("sayi: "); scanf("%d",&sayi);
		if(sayi%2 ==0)
		ciftToplam +=sayi;
		else
		tekToplam += sayi;
	}
	
	printf("Cift sayilarin toplami: %d\n",ciftToplam);
	printf("Tek sayilarin toplami: %d",tekToplam);
	
	
	return 0;
}
