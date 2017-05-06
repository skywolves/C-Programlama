#include <stdio.h>
/*
	Eğer bir sayının kendisi hariç, bütün çarpanlarının toplamı yine o sayıya eĢitse bu sayıya MÜKEMMEL SAYI denir.Girielen sayının mükemmel sayı olup olmadığını bulan c programı
*/

void mukemmelSayi(int);

int main()
{
	int sayi;
	printf("Sayiyi giriniz :");
	scanf("%d",&sayi);
	
	mukemmelSayi(sayi);
	
	return 0;
}

void mukemmelSayi(int n)
{
	int toplam=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			toplam += i;
		}
	}
	
	if(toplam==n)
	{
		printf("%d sayisi mükemmel bir sayidir.\n",n);
	}
	else
	{
		printf("%d sayisi mükemmel bir sayi değildir.\n",n);
	}
}
