#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char chuan[] = "hellow world ni shi sha bi mang";
	int sum = strlen(chuan);
	int i = 0;
	for (i = 0; i <= sum - 1; i++)
	{
		if (32 == chuan[i])
			chuan[i] +=5 ;
			
	}
	for (i = 0; i <= sum - 1; i++)
	{
		printf("%c", chuan[i]);
	}

	system("pause");
	return 0;
}