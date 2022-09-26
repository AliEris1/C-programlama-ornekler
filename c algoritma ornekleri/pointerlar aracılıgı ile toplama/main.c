#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//pointerler aracýlýðý ile toplama iþlemi
	
	int sayi1,sayi2,sonuc;
	
	printf("sayi girin: ");
	scanf("%d",&sayi1);
	
	printf("sayi girin: ");
	scanf("%d",&sayi2);
	
	int *p1,*p2;
	
	p1 = &sayi1;
	p2 = &sayi2;
	
	sonuc = *p1 + *p2;
	
	printf("Toplam: %d",sonuc);
	
	
	return 0;
}
