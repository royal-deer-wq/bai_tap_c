#include<stdio.h> 
#include<conio.h> 
int main(void)
 { int a[100], i, sum = 0;
	printf("\n chuong trinh tinh trung binh cong\n");
	printf("cua 100 so nguyen");
for (i = 0; i < 100; i++)
{ printf("\nNhap vao so thu d: ", i + 1);
 scanf("%d", &a[i]); /* Nhập giá trị cho số thứ i t */
	}
/* Tính tổng giá trị các số */
for (i = 0; i < 100; i++)
	sum += a[i]; /* Cộng dồn từng số vào sum */ 
printf("Trung binh cong la:%6.2f\n",(float)sum/100);
getch();
}