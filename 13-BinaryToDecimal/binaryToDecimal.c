#include <stdio.h>
#include <math.h>
/*Girilen ikilim sistemdeki sayıyı onluk sisteme çeviren c programı*/

int main()
{
	int binary;
	printf("Binary sayiyi giriniz :");
	scanf("%d",&binary);
	int temp,i=0,sonuc=0;
	while(binary>0)	
	{
		temp = binary % 10;
		if(temp>1)
		{
			printf("Binary sayi giriniz!!!\n");
			return 0;
		}
		binary /= 10;
		temp *= pow(2,i);
		i++;
		sonuc += temp; 
	}

	printf("Decimal : %d\n",sonuc);
	return 0;
}
