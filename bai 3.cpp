#include<stdio.h>
#include<conio.h>
#include <math.h>
int main() {
	int i;
	int n;
	float x[200], tbc, tong=0; 
	do {
		printf("\n Nhap n = "); 
		scanf("%d", &n);
		} while ((n<1) || (n>200)); 
	printf("\nNhap day: "); 
	for (i=0;i<200; i++)
		scanf("%f",&x[i]);
	for (i=0; i<200; i++) 
		tong+= x[i];
	tbc=tong/100;
	for (i=0; i<200;i++)
		if (fabs (double (tbc-x[i]))>=1)
			printf("46.2",x[i]);
	getch();
}
