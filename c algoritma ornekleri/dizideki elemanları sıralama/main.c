#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//dizideki elemanlarý sýralama
	
	int dizi[] = {3,5,4,6,7,8,9,25,54,14};
	
	int i,j;
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<i;j++)
		{
			if (dizi[i]>dizi[j])
			{
				int gecici = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = gecici;
			}
		}
	}
	
	for(i=0;i<10;i++)
	printf(" %d ",dizi[i]);
	
	return 0;
}

