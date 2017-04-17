#include <stdio.h>
/*İki sayıyı toplayan c programı*/

int main()
{
	int sayi1,sayi2,toplam;
	printf("1.Sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("2.Sayiyi giriniz:");
	scanf("%d",&sayi2);

	toplam=sayi1+sayi2;
	printf("İki sayinin toplami: %d \n",toplam);

	return 0;
}
