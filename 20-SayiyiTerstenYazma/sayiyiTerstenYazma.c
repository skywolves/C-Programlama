#include <stdio.h>
/*
	Girilen sayiyi tersten yazan c programı
*/

int parcala(int);

int main()
{
	int sayi;
	printf("Sayiyi giriniz :");
	scanf("%d",&sayi);
	parcala(sayi);
	printf("\n");
	return 0;
}

int parcala(int n)
{
	int n2;
	if(n<10)
	{
		printf("%d",n);
	}
	else
	{
		n2 = n % 10;
		n /=10;
		printf("%d",n2);
		parcala(n);
		
	}
}
