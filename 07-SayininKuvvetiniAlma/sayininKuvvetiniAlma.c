#include <stdio.h>
/*Girilen sayının istenilen kuvvetini while döngüsü ile alan C programı*/

int main()
{
	int sayi,kuvvet,sonuc;
	printf("Sayiyi giriniz:");
	scanf("%d",&sayi);
	
	printf("Kuvveti giriniz:");
	scanf("%d",&kuvvet);

	int sayac=0;
	sonuc =1;
	while(sayac<kuvvet)
	{
		sonuc *= sayi;
		sayac++;
	}
	printf("%d ^ %d = %d\n",sayi,kuvvet,sonuc);
	return 0;
}
