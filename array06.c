#include<stdio.h>
#include<limits.h>

int main()
{
	int number[5], i, min = INT_MAX, max = INT_MIN;
	
	for(i=0; i<5; i++)
	{
		printf("다섯번 입력하세요[%d 번]: ", i+1);
		scanf("%d", &number[i]);
	}
	
	for(i=0; i<5; i++)
		printf("number[%d] = %d\n", i, number[i]);
	
	for(i=0; i<5; i++)
	{
		if (min > number[i])
			min = number[i];
		
		if (max < number[i])
			max = number[i];
	}
	
	printf("배월 원소의 최소값 = %d, 최대값 = %d", min, max);
	
	return 0;
}
