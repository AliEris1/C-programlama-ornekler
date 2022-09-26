#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// geçme notu hesaplayan program
	
	int sinav1,sinav2,final;
	int ortalama;
	
	printf("Birinci sinav notunuzu giriniz: ");
	scanf("%d",&sinav1);
	
	printf("Ikinci sinav notunuzu giriniz: ");
	scanf("%d",&sinav2);
	
	printf("Final notunuzu giriniz: ");
	scanf("%d",&final);
	
	ortalama = (final *0.4) + (sinav1*0.3) +(sinav2*0.3);
	
	if (ortalama>70)
	{
		printf("Notunuz: %d ",ortalama);
		printf("Tebrikler gectiniz...");
	}
	
	else if (ortalama>50)
	{
		printf("Notunuz: %d ",ortalama);
		printf("Sartli gectiniz...");
	}
	else
	{
		printf("Notunuz: %d ",ortalama);
		printf("Kaldiniz...");
	}
	
	return 0;
}
