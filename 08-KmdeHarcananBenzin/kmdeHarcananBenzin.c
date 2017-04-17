#include <stdio.h>
/*Kullanıcıdan kaç litre benzin ve kaç km yol aldığını alıp her litre için kaç km yol aldığını hesaplayan ve girilen tüm bilgilerden sonra toplam gidilen km için harcanan benzin miktarını bulan c programı*/

int main()
{
	float harcananBenzin=0,alinanYol,oran;
	int sayac = 0;
	float toplamOran = 0;
	while(harcananBenzin>=0)
	{
		printf("Kaç litre benzin harcandı(Çıkış için -1):");
		scanf("%f",&harcananBenzin);
		if(harcananBenzin==-1)
		{ 
			break;
		}
		else
		{
			printf("Kaç km yol Alındı :");
			scanf("%f",&alinanYol);
			oran = alinanYol/harcananBenzin;
			printf("1 litre benzin ile alınan yol : %f\n\n",oran);
			toplamOran += oran;
			sayac++;
		}
	}
	printf("\nToplam ortalama km/litre : %f\n",(toplamOran / sayac));
	
	return 0;
}
