#include <stdio.h>
#include <math.h>
/*E sayısının  istenilen adım sayısı kadar kuvvetini hesaplayan c programı*/

int faktoriyelAl(int n);
int main()
{
	int kuvvet,adim;
	printf("Kuvveti giriniz:");
	scanf("%d",&kuvvet);
	printf("Adim giriniz:");
	scanf("%d",&adim);
	double toplam=1;
	double kismiSonuc=0;
	for(int i=1;i<=adim;i++)
	{
		kismiSonuc = pow(kuvvet,i)/faktoriyelAl(i);
		toplam += kismiSonuc;
	}
	printf("e^%d = %f\n",kuvvet,toplam);
	return 0;
}
int faktoriyelAl(int sayi)
{
	int carpim=1;
	for(int i=1;i<=sayi;i++)
	{
		carpim *= i;
	}
	return carpim;
}
