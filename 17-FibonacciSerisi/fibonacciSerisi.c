#include <stdio.h>
/*	
	Girilen adım sayısı kadar recursive şekilde fibonacci serisini yazan c programı
*/

long fibonacci(long);

int main()
{
	long sayi;
	printf("Adim sayisini giriniz :");
	scanf("%ld",&sayi);
	
	for(int i=0;i<sayi;i++)
	{
		printf("%ld ",fibonacci(i));
	}
	printf("\n");
	return 0;
}

long fibonacci(long n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	else
	{
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}
