#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Oyuncu iki zarı aynı anda atar. Ġki zarında altı yüzü vardır. Bu yüzlerde 1,2,3,4,5 ve 6 adet nokta bulunur. Zarlar durduktan sonra her iki zarında üste gelen yüzleri toplanır. Eğer toplam ilk atıĢta 7 ya da 11 ise oyuncu kazanır. Eğer toplam ilk atıĢta 2,3 ya da 12 gelirse (buna barbut denir) oyuncu kaybeder. Eğer ilk atıĢta toplam 4,5,6,8,9,10 ise bu toplam oyuncunun sayısı haline gelir.Kazanmak için oyuncu sayısını bulana kadar zarları atmaya devam eder.Zarları atmaya devam ederken kendi sayısı yerine 7 atarsa kaybeder.
*/
int zarAt(void);
int main()
{
	int toplam,oyuncuPuani=0,durum=0;

	srand(time(NULL));
		
	toplam = zarAt();
	switch(toplam)
	{
		case 7 :
		case 11 :
			durum = 1;
			break;
		case 2:
		case 3:
		case 12:
			durum = 2;
			break;
		default:
			oyuncuPuani=toplam;
			printf("Oyuncunun kazanması için gereken zar : %d\n",oyuncuPuani);
			break;

	}
	while(durum==0)
	{
		toplam = zarAt();
		if(toplam==oyuncuPuani)
		{
			durum = 1;
		}
		else if(toplam==7)
		{
			durum = 2;
		}
	}

	if(durum==1)
	{
		printf("Tebrikler kazandınız\n"); 
	}
	else
	{
		printf("Maalesef kaybettiniz\n"); 
	}
	
	return 0;
}

int zarAt(void)
{
	int zar1,zar2,toplam;
	zar1 = 1 + rand() % 6;
	zar2 = 1 + rand() % 6;
	
	toplam = zar1 + zar2;
	printf("Zar1:%d Zar2:%d Toplam:%d\n",zar1,zar2,toplam);
	return toplam;
}
