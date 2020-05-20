#include<iostream>
#include<math.h>
using namespace std;
void bac1(float a,float b){
	if (a==0)
		if (b==0) printf ("\n Pt vo so nghiem. ");
		else printf ("\n Pt vo nghiem. ");
	else
		printf ("\n Nghiem PT : %0.2f",-b/a);
}

void bac2(float &a,float &b,float &c)
{
	float dt;
	if(a==0)
		bac1(b,c);
	else{	
		dt=pow(b,2)-4*a*c;
		if (dt<0)
			printf("\n PT vo nghiem"); 
		if (dt==0)
			printf("\n PT co nghiem kep x = %0.2f",-b/2/a);	
	    if (dt>0)
			printf("\n PT co 2 nghiem: x1 = %.2f; x2 = %.2f",(-b+sqrt(dt))/2/a,(-b-sqrt(dt))/2/a);	
	}
}

int main()
{
	float n,a,b,c;
	printf("Moi ban chon 1 hoac 2 de chon loai pt: ");//chon pt bac 1 hoac pt bac 2
	scanf("%f",&n);
	if(n==1)
		{
			printf("Nhap a: ");scanf("%f",&a);
			printf("Nhap b: ");scanf("%f",&b);
			bac1(a,b);
		}
	else
		if(n==2)
			{	
				printf("Nhap a: ");scanf("%f",&a);
				printf("Nhap b: ");scanf("%f",&b);
				printf("Nhap c: ");scanf("%f",&c);
				bac2(a,b,c);
			}
		else	
			printf("Error");//khong phai 1 va 2
	return 0;
}
