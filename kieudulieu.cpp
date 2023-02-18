/*#include<stdio.h>
int main ()
{
    unsigned short tuoi;
    int so_tien_co;
    int so_tien_co =300;    
    char C='a';
    long dan_so=1000000000000000000;
    double dien_tich;
    float dien_tich_hinh_tam_giac ;
    float a,b ;
    float a,b,c;

}*/
/*#include<stdio.h>
    int main (){
        printf("anh dep trai \n");
        int x=5;
        int n;
        printf("xuat ra so x %d",x);
       

    }*/
/*#include <stdio.h>
int main (int i,int &n)
{
    for (i=1;i<n;i++)
    printf("nhap so n vao");
    scanf("%d",n);
    return 0;
    
}
}*/
/*#include<stdio.h>
int main()
{
    float a,b ;
    printf("nhap vao a: ");
    scanf("%f",&a);
    printf("nhap vao b: ");
    scanf("%f",&b);
    float tong=a+b;
    printf("\n%.3f+%.3f=%.2f",a,b,tong);//cong
    float tru=a-b;
    printf("\n%.3f-%.3f=%.2f",a,b,tru);//tru
    float nhan=a*b;
    printf("\n%.3f*%.3f=%.2f",a,b,nhan);//nhan
    float chia=a/b;
    printf("\n%.3f / %.3f=%.3f",a,b,chia);//chia
    int chialaydu=((int)a) % ((int)b) ;
    printf("\n %f chia lay du %f = %d",a,b,chialaydu);//chialaydu
}*/
/*#include"stdio.h"
int main(){
    int a=5;
    int b=5;

    printf("%d",a++);
    printf("\n");
    printf("%d",a);
    printf("\n");
    printf("%d",++a);
    printf("\n%d",b--);
    printf("\n");
    printf("%d",b);
    printf("\n");
    printf("%d",--b);
    
}*/
/*#include<stdio.h>
int main()
{
    int a;
    printf("nhap vao a ");
    scanf("%d",&a);
    printf("%d la %s",a,(a%2==0)?"chan":"le");//? la 1 : la 0
}*/
/*#include<stdio.h>   

int main ()
{
    int a,b,min,max;
    printf("nhap vao a:");
    scanf("%d",&a);
    printf("nhap vao b:");
    scanf("%d",&b);
    //xu ly tim min max
    min=(a>b?b:a);
    max=(a>b?a:b);
    //xuat du lieu 
    printf("so lon mhat=%d",max);
    printf("\n so nho nhat =%d",min);
}*/
/*#include<stdio.h>//code tinh phuong trinh bat nhat 
int main ()
{
    float a,b,x;
    printf("nhap vao so cua pt ax+b=0");
    printf("\n nhap vao a:");
    scanf("%f",&a);
    printf("\n nhap vao b:");
    scanf("%f",&b);
    x=-b/a;
    printf("gia tri cua x %.2f",x);
}*/
/*#include<stdio.h>//ep kieu du lieu 
int main ()
{
    int a,b ;
    printf("nhap vao  a:");
    scanf("%d",&a);
    printf("nahp vao b :");
    scanf("%d",&b);
    float ketqua=((float)a/b);
    printf("%d/%d=%f",a,b,ketqua);
}*/
/*#include<stdio.h>//thu vien toan hoc math.h
#include<math.h>
int main()
{
    int a=15;
    int b=2;
    float kq=(float)a/b;
    printf("\nfloor(a/b)=%.2f",floor(kq));
    printf("\nceil(a/b)=%.2f",ceil(kq));
    printf("\nabs(a/b)=%.2f",abs(kq));
    printf("\nsqrt(9)%.2f",sqrt(9));
    printf("\npow(5,2)%.2f",pow(5,2));

}*/
/*#include<stdio.h>
int main (){
    int n;
    printf("nhap vao n :");
    scanf("%d",&n);
    if (n<20){
        printf("so nhap vao nho hon 20");
    }
}*/
/*#include<stdio.h>
int main (){
    int n;
    printf("nhap vao n :");
    scanf("%d",&n);
    if(n%2==0){
        printf("so nhap vao la so chan ");
    }
    else{
        printf("so nhap vao la so le");
    }

}*/
/*#include<stdio.h>
int main (){
    int n;
    printf("nhap vao n :");
    scanf("%d",&n);
    if(n%2==0){
        printf("so nhap vao la so chan ");
    }
    else if(n%2==1){
        printf("so nhap vao la so le ");
    }
    
}*/
/*#include<stdio.h>//code tinh phuong trinh bat nhat 
int main ()
{
    float a,b,x;
    printf("nhap vao so cua pt ax+b=0");
    printf("\n nhap vao a:");
    scanf("%f",&a);
    printf("\n nhap vao b:");
    scanf("%f",&b);
    if (a!=0)
    {
        x=-b/a;
        printf("phuong trinh co nghiem x=%f",x);
    }
    else
    {
        if(b==0)
        {
            printf("phuong trinh co vo so nghiem ");
        }
         else {
    
        printf("phuong trinh vo nghiem");
         }
    
    }
    
}*/
//toan tu &&,!,||
/*#include<stdio.h>
int main (){
    int a=5>2;
    int b=10>=99;
    int c=1<5;
    printf("%d&&%d=%d",a,b,a&&b);
    printf("\n%d&&%d=%d",a,c,a&&c);
    printf("\n%d||%d=%d",a,b,a||b);
    printf("\n%d||%d=%d",a,c,a||c);
    printf("\n%d||%d=%d",b,c,b||c);
    printf("\n!%d=%d",a,!a);
    printf("\n!%d=%d",b,!b);

}
*/
// giải phương trình bật 2 ax^2+bx+c=0
/*#include<stdio.h>
#include <math.h>
int main ()
{
    float  a,b,c,x1,x2,delta;
    printf("nhap vao he so a,b,c");
    scanf("%f%f%f",&a,&b,&c);

    if (a==0){
        printf("\nhe so nhap phai khac 0");
    }else{
        a!=0;
        delta=pow(b,2)-4*a*c;
        if (delta>0){
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            printf("\nphuong trinh co 2 nghiem phan biet: x1=%.2f va x2=%.2f", x1, x2);
        }else if(delta==0){
            x1=-b/(2*a);
            printf("\nphuong trinh co nghiem kep x1=x2=%.2f",x1);

        }else{
            printf("\nphuong tirnh vo nghiem");
        }
    }

}*/
/*#include<stdio.h>//nhap so 1-7 hien thi tuong ung thu 
int main ()
{
    int  n ;
    printf("nhap vao so n (tu 1-7):");
    scanf("%d",&n);
    switch (n){
        case 1:
              printf("\n chu nhat ");
              break;
        case 2:
              printf("\n thu hai ");
              break;
        case 3:
              printf("\n thu ba");
              break;
        case 4 :
              printf("\n thu tu");
              break;
        case 5:
              printf("\n thu nam ");
              break;
        case 6:
              printf("\n thu sau");
              break;
        case 7:
              printf("\n thu bay");
              break;
        default:
              printf ("so n nhap vao sai roi kia thang kia");
    }

  
}
*/
/*#include<stdio.h>
int main(){
    int thang ,nam;
    printf("nhap vao thang :");
    scanf("%d",&thang);
    printf("nhap vao nam :");
    scanf("%d",&nam);
    switch (thang){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
             printf("co 31 ngay");
             break;
        case 4:
        case 6:
        case 9:
        case 11:
             printf("co 30 ngay");
             break;
        
        case 2:
             if((nam%400==0)||(nam%4==0 && nam%100!=0))
            {
                printf("co 29 ngay");
            }
             else
            {
                printf("co 28 ngay");
            }
             break;
        default:
             printf("nhap sai roi anh ba ");
    }
}*/
#include<stdio.h>
#include<conio.h>
#include<math.h>	
#include<stdlib.h>
#include<time.h>
#include <cstring>
void FirstNumber(int a[], int n)//tim số đầu tiên
{
	for (int i = 0; i < n; i++) {
		printf("so dau tien la: %d", a[i]);
		return;
	}
	

}
void Create_random_array(int a[], int &n) { // mảng ngẫu nhiên
	srand(time(NULL));
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
}
void Output(int a[], int n) { // xuất mảng
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	} 
}
int Min(int a[], int n) { // min
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (min>a[i])
			min = a[i];
	}
	return min;
}
void Boi_So(int a[], int n, int & boi) {// bội của 1 số
	for (int i = 0; i < n; i++) {
		if (a[i] % boi == 0)
			printf("Boi cua so la: %d", a[i]);
	
	}
	printf("trong mang khong co so nao la boi cua so");
}
void Test_Toan_Chan(int a[], int n)//ktra toàn chẵn 
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			printf(" manng nay khong toan chan.");
			return;
		}
	}
	printf(" nang nay toan chan ");
}
void saptang(int a[], int n) { //sắp tăng
	int tmp;
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void Menu() {
	printf("\n1.Mang random");
	printf("\n2.find the first number");
	printf("\n3.Xuat mang");
	printf("\n4.Tim min");
	printf("\n5.Boi cua 1 so");
	printf("\n6.Test toan chan");
	printf("\n7.Sap xep tang");
}
void process()
{

	int a[100]; int  n; int chon;
	do {
		Menu();
		printf("\nNhap lua chon de tinh");
		scanf("%d", &chon);

		switch (chon)
		{

		case 1:
			
			Create_random_array(a, n);
			Output(a, n);
			break;
		case 2:
			FirstNumber(a, n);
			break;
		case 3:
			Output(a, n);
			break;
		case 4: 
			printf("Min trong mang la: %d", Min(a, n));
			break;
		case 5: 
			int boi;
			printf("nhap boi:");
			scanf("%d", &boi);
			Boi_So(a, n, boi);
			break;
		case 6:
				Test_Toan_Chan(a, n);
				break;
		case 7:
			saptang(a, n);
			Output(a, n);
		}
		
	} while (chon != 0);
}
int  main() 
{
	process();
}