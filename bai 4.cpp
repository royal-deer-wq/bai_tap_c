#include<stdio.h>
#include<conio.h>
#define n 200
int main() {
	int day [n], i, j, tam;
	printf("Nhap vao cac phan tu: "); 
	for (i=0; i<n; i++)
		scanf("%d", &day[i]);
	for (i=0; i<n-1; i++) 
		for (j=i+1; j<n; j++) 
			if (day [j] < day [i])
				{
					tam = day [i];
					day [i] = day [j];
					day [j] = tam;
				}
	printf("\nSau khi sap xep: ");
	for (i=0; i<n; i++) 
		printf("%d ", day[i]);
	getch();
}