#include <stdio.h>
/*
	Bir tamsayı sadece kendisine ve 1'e bölünüyorsa bu tamsayıya asal sayı denir.Girielen sayının asal sayı olup olmadığını bulan c programı
*/

void asalSayi(int);

int main()
{
	int sayi;
	printf("Sayiyi giriniz :");
	scanf("%d",&sayi);
	
	asalSayi(sayi);
	
	return 0;
}

void asalSayi(int n)
{
	int durum=1;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			durum=0;
		}
	}
	
	if(durum==1)
	{
		printf("%d sayisi asal bir sayidir.\n",n);
	}
	else
	{
		printf("%d sayisi asal bir sayi değildir.\n",n);
	}
}
