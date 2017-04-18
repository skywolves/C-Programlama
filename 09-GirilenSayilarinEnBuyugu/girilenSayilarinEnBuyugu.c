#include <stdio.h>
/*Girilen 10 sayıdan dizisiz en büyüğünü bulan C programı*/

int main()
{
	int i,sayi,enBuyukSayi=0;
	for(i=0;i<10;i++)
	{
		printf("%d. sayiyi giriniz :",(i+1));
		scanf("%d",&sayi);
		if(sayi>=enBuyukSayi)
		{
			enBuyukSayi=sayi;
		}
	}
	printf("En büyük sayi : %d\n",enBuyukSayi);
	return 0;
}
