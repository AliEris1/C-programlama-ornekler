#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//dinamik dizi oluþturarak en büyük sayýyý bulma
	// dinamik dizi pointer ile oluþturulur
	int *dizi;
	
	int n;
	printf("Dizinin eleman sayisini giriniz: ");
	scanf("%d",&n);
	
	dizi = calloc (n,sizeof(int));
	
	int i;
	for(i=0;i<n;i++)
	{
		printf("sayi girin: ");
		scanf("%d",&dizi[i]);
		
	}
	
	int buyuk = dizi[0];
	for(i =0;i<n;i++)
	{
		if(buyuk<dizi[i])
		{
			buyuk = dizi[i];
		}
	}
	
	printf("Dizinin en buyuk elemani: %d",buyuk);
	
	return 0;
}
