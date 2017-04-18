#include <stdio.h>
/*Girilen sayı kadar * dan oluşan içi dolu dörtgen çizen C programı*/

int main()
{
	int sayi;
	printf("Sayiyi giriniz :");
	scanf("%d",&sayi);
	printf("\n");
	for(int i=0;i<sayi;i++)
	{
		for(int j=0;j<sayi;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
