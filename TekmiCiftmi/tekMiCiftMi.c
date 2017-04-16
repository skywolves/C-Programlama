#include <stdio.h>
/*Girilen sayinin tek mi çift mi olduğunu bulma */

int main()
{
	int sayi;
	printf("Sayiyi giriniz :");
	scanf("%d",&sayi);
	
	if(sayi%2==1)
	{
		printf("Girdiginiz %d sayisi tektir.\n",sayi);
	}
	else
		printf("Girdiginiz %d sayisi cifttir.\n",sayi);
	return 0;
}
