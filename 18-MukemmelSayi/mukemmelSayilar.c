#include <stdio.h>
/*
	Eğer bir sayının kendisi hariç, bütün çarpanlarının toplamı yine o sayıya eĢitse bu sayıya MÜKEMMEL SAYI denir.Girielen sayıya kadar mukemmel sayiları ekran yazan c programı
*/

int mukemmelMi(int);

int main()
{
	int sayi;
	printf("Sayiyi giriniz :");
	scanf("%d",&sayi);
	
	for(int i=1;i<=sayi;i++)
	{
		if(mukemmelMi(i))
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}

int mukemmelMi(int n)
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
		return 1;
	}
	else
	{
		return 0;
	}
}
