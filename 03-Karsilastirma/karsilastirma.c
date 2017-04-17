#include <stdio.h>

/* Girilen iki sayıyı karşılaştıran C  programı */

int main()
{
	int sayi1,sayi2;
	printf("Karşılaştırılacak iki sayiyi giriniz:");
	scanf("%d %d",&sayi1,&sayi2);
	
	if(sayi1==sayi2)
	{
		printf("Iki Sayi eşittir.\n");
	}
	else if(sayi1<sayi2)
	{
		printf("Sayi 1 küçüktür.\n");
	}
	else
	{
		printf("Sayi 1 büyüktür.\n");
	}
	return 0;
}
