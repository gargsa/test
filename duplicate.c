#include<stdio.h>
#include<string.h>

int main() 
{
	int a[] = {2,3,2,4,3,3,7,5,5,7};
	int len = sizeof(a)/sizeof(int);
	int freq[len];
	for (int i=0; i<len;i++)
		freq[i] = 1;

	for (int i=0; i<len; i++)
	{
		if (a[i] != -1)
		{
			for (int j=i+1; j<len;j++)
			{
				if(a[i] == a[j])
				{
					freq[i]++;
					a[j] = -1;
				}
			}
		}
		
		if(a[i]!=-1)
		{
			printf("%d - %d\n", a[i], freq[i]);	
		}
	}
}
