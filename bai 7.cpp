#include<conio.h>
#include<stdio.h>
int main() {
	int m, n;
	int i,j;
	int a[100] [50];
	do {
		printf("\n Nhap so hang m = "); 
		scanf("%d", &n);
	}
	while ((m<1) || (m>100));
	do {
		printf("\n Nhap so cot n = "); 
		scanf("%d", &n);
	}
while ((n-1) || (n>50));
printf("\n Nhap mang a:\n");
for (i=0;i<m;i++)
	for (j=0;j<n;j++) {
		printf("\n Nhap a[d] [d] := ",1,5);
		scanf("%f", (a+1)+1);
	}
printf("\n Mang a sau khi nhập là: \n");
for (i=0;i<n;i++){
	for (j=0;j<n;j++)
	printf("%f",a[i][j]);
	printf("\n");
}
getch();
}