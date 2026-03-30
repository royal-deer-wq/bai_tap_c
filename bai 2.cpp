#include <conio.h> 
#include<stdio.h> 
#include <math.h> 
int main()
{
	int mang[105];
	int i, min, max;
	int m,n;
	printf("\n Nhap mang "); 
	for (i=0; i<=105; i++)
		scanf("%d", &mang [i]);
	/* Tìm giá trị lớn nhất và nhỏ nhất */
	min = max = mang[0];
	for (i=0; i<105; i++)
	{
		if (max	< mang [i])
			max = mang[i];
		if (min > mang [i])
			min = mang [i];
}
printf("\n Gia tri Max- td ", max); 
printf(" dat tai cac vi tri: \n"); 
for (i=0; i<105; i++)
	if (max == mang [i]) printf("%d ",i);
printf("\n Gia tri min= %d ", min); 
printf(" dat tai cac vi tri: \n"); 
for (i=0; i<105; i++)
	if (min == mang [i]) printf("%d ",i); 
getch();
}