#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//dizideki en büyük ve en küçük sayýlarý bulma
	
	int dizi[] = {3,5,15,22,99,8,20,4,1,17};
	int i;
	int kucuk = dizi[0],buyuk= dizi[0];
	
	for(i=0;i<10;i++)
	{
		if(buyuk<dizi[i])
		buyuk = dizi[i];
	
		if(kucuk>dizi[i])
			kucuk = dizi[i];
	}
	
	printf("buyuk sayi: %d\n",buyuk);
	printf("kucuk sayi: %d",kucuk);
	
	
	return 0;
}
