#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int pi =3;

void AlanHesapla(int r)
{
	float sonuc = 4 *pi*r*r;
	printf("Kurenin alani: %2.f\n",sonuc);
}

void HacimHesapla(int r)
{
	float sonuc = (4/3)*pi*r*r*r;
	printf("Kurenin hacmi: %2.f",sonuc);
}


int main(int argc, char *argv[]) {
	//k�renin alan� ve hacmini bulan uygulama
	//k�renin alan� = 4 *pi*r*r
	//k�renin hacmi = (4/3)*pi*r*r*r
		
	int yaricap;
	
	printf("Kurenin yaricapini giriniz: ");
	scanf("%d",&yaricap);
	
	AlanHesapla(yaricap);
	HacimHesapla(yaricap);
			
			
	return 0;
}
