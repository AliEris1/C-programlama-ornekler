#include <stdio.h>
#include <stdlib.h>

	int pi = 3;

void AlanHesapla(int r)
{
	int sonuc = pi*r*r ;
	printf("alan: %d\n",sonuc);
}
void CevreHesapla(int r)
{
	int sonuc = 2*pi *r ;
	printf("Cevre: %d",sonuc);
}


int main(int argc, char *argv[]) {
	//daire alan ve çevresini hesaplama
	
	int yaricap;

	
	printf("yaricapi giriniz: ");
	scanf("%d",&yaricap);
	
	AlanHesapla(yaricap);
	CevreHesapla(yaricap);
	
	return 0;
}
