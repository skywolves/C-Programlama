#include <stdio.h>
/*Yarıçapı verilen çemberin çapı, çevresi ve alanını hesaplayan c programı*/

int main()
{
	int yaricap,cap;
	float piSayisi=3.14159,cevre,alan;

	printf("Cemberin yarıçapini giriniz:");
	scanf("%d",&yaricap);

	cap = yaricap * 2;
	cevre = 2 * piSayisi * yaricap;
	alan = piSayisi * yaricap * yaricap;

	printf("Cemberin capi : %d\n",cap);
	printf("Cemberin cevresi : %f\n",cevre);
	printf("Cemberin alani : %f\n",alan);

	return 0;
}
