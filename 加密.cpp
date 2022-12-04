#include <stdio.h>
int main()
{
	char arr[50] = {0};
	int n=0;
	gets_s(arr);
	for (int i = 0; i<50; i++)
	{
		
		if (arr[i] == '\0')
			break;
		n++;
		arr[i] = arr[i] + 3;
		if (arr[i] > 122 || arr[i] > 90 && arr[i] < 97)
			arr[i] = arr[i] - 26;
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		
		if (i < n - 1-i)
		{
			arr[i] = arr[i] ^ arr[n - 1 - i];
			arr[n-1-i] = arr[i] ^ arr[n - 1 - i];
			arr[i]= arr[i] ^ arr[n - 1 - i];

			}
			if (arr[i] <= 'z' && arr[i] >= 'a')
				arr[i] = arr[i] - 32;
			else if (arr[i] <= 'Z' && arr[i] >= 'A')
				arr[i] = arr[i] + 32;
			printf("%c", arr[i]);
	}

}