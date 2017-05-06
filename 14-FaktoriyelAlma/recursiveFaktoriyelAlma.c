#include <stdio.h>
/*
	Kullanıcıdan alınan pozitif sayının faktoriyelini recursive şekilde bulan c programı
*/
long faktoriyelAl(long);
int main()
{
	int sayi;
	long sonuc;
	printf("Sayıyı giriniz :");
	scanf("%d",&sayi);

	sonuc = faktoriyelAl(sayi);	
	printf("%d!:%ld\n",sayi,sonuc);
	return 0;
}

long faktoriyelAl(long n)
{
	if(n<=1)
	{
		return 1;	
	}
	else
	{
		return (n * faktoriyelAl(n-1));
	}
}
