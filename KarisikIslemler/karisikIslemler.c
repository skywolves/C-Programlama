#include <stdio.h>

/*Alınan 3 sayıyı toplayan,çarpan ortalamasını,en küçüğünü ve en büyüğünü bulan c programı.*/

int main()
{
	int a,b,c;
	printf("3 sayiyi giriniz :");
 	scanf("%d %d %d",&a,&b,&c);
	
	int toplam,carpim,ortalama;
	toplam = a + b + c;
	carpim = a * b * c;
	ortalama = (toplam / 3);
	printf("Toplam : %d\n",toplam);
	printf("Carpim : %d\n",carpim);
	printf("Ortalama : %d\n",ortalama);
	if(a>=b && a>=c)
	{
		printf("En büyük sayi :%d\n",a);
	}
	else if(a<=b && a<=c)
	{
		printf("En kücük sayi :%d\n",a);
	}
	if(b>=a && b>=c)
	{
		printf("En büyük sayi :%d\n",b);
	}
	else if(b<=a && b<=c)
	{
		printf("En kücük sayi :%d\n",b);
	}
	if(c>=a && c>=b)
	{
		printf("En büyük sayi :%d\n",c);
	}
	else if(c<=a && c<=b)
	{
		printf("En kücük sayi :%d\n",c);
	}

	return 0;
}

