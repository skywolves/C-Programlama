#include <stdio.h>
/*Kullanıcının girdiği sayının polindrome(tersi aynı) olup olmadığını bulan c programı*/

int main()
{

	int sayi,cSayi;
	printf("Bir sayi giriniz :");
	scanf("%d",&sayi);

	cSayi=sayi;
	int temp;
	int polindrome=0;
	while(cSayi > 10)
	{
		temp = cSayi % 10;
		cSayi /= 10;
		polindrome += temp;
		polindrome *= 10;
	}
	polindrome+=cSayi;
	printf("polindrome : %d\n",polindrome);
	if(polindrome==sayi)
	{
		printf("Girilen sayi POLINDROME'dir\n");
	}
	else
	{
		printf("Girilen sayi POLINDROME değildir\n");	
	}
	return 0;
}

