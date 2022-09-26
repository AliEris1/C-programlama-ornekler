#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//hipotenüs hesaplama
	
	int kenar1,kenar2;
	float hipotenus;
	
	printf("Birinci kenarin uzunlugunu giriniz: ");
	scanf("%d",&kenar1);
	
	printf("Ikinci kenarin uzunlugunu giriniz: ");
	scanf("%d",&kenar2);
	
	hipotenus = sqrt((kenar1*kenar1) + (kenar2*kenar2));
	
	printf("Hipotenus: %2.f",hipotenus);
}
