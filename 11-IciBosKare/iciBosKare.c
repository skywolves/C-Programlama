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
		if(i==0 || i==sayi-1)
		{
			for(int j=0;j<sayi;j++)
			{
				printf("* ");
			}
		}
		else
		{
			printf("* ");
			for(int j=0;j<sayi-2;j++)
			{
				printf("  ");
			}
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
