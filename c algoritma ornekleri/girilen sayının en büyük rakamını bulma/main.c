#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//klavyeden girilen sayýnýn hanesindeki en büyük rakamý bulma
	
	int sayi;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	int buyuk =0;
	
	while(sayi>0)
	{
		int gecici = sayi%10;
		if(buyuk<gecici)
		{
			buyuk = gecici;
		}
		
		sayi = sayi/10;
	}
	
	printf("En buyuk rakam: %d",buyuk);
	
	
	
	return 0;
}
