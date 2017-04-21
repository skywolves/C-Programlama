#include <stdio.h>
/*Kullanıcıdan alaınan pozitif sayının faktoriyelini alan c programı*/

int main()
{
	int sayi;
	printf("Lutfen sayiyi giriniz :");
	scanf("%d",&sayi);

	if(sayi<0)
	{
		printf("Lütfen pozitif bir sayi giriniz!\n");
	}
	else
	{
		int carpim=1;	
		for(int i=1;i<=sayi;i++)
		{
			carpim *= i;
		}
		printf("%d! = %d\n",sayi,carpim);
	}
	return 0;
}
