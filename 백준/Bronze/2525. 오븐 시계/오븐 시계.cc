#include<stdio.h>

int main()
{
	int H,M,C;
	int HH;
	int sum;
	
	scanf("%d %d", &H, &M);
	scanf("%d", &C);
	
	sum = M + C;
	HH = sum/60;
	
	H += HH;
	if (HH == 0)
	{
		M = sum;
	}
	else if (HH >= 1)
	{
		M = sum - 60*HH;
	}
	if (H >= 24)
	{
		H -= 24;
	}
	printf("%d %d", H,M);
	return 0;	
}