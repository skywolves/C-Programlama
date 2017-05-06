#include <stdio.h>
/*
	Bir tamsayı sadece kendisine ve 1'e bölünüyorsa bu tamsayıya asal sayı denir.Girielen sayıya kadarki asal sayıları ekrana yazan c programı
*/

int asalMi(int);

int main()
{
	int sayi;
	printf("Sayiyi giriniz :");
	scanf("%d",&sayi);

	for(int i=1;i<=sayi;i++)
	{
		if(asalMi(i))
		{
			printf("%d ",i);
		}
		
	}
	printf("\n");
	return 0;
}

int asalMi(int n)
{
	int durum=1;
	for(int i=2;i<n/2;i++)//daha hızlı hesaplamak için n/2 yeterli(kök n daha hızlı)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
