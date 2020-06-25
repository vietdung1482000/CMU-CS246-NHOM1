#include<iostream>
#include<math.h>
using namespace std;
void bac1(float a,float b){
	if (a==0)
		if (b==0) printf ("\n Pt vo so nghiem. ");
		else printf ("\n Pt vo nghiem. ");
	else
		printf ("\n Nghiem PT : %0.2f",-b/a);//da bo sung
}

int main()
{
	float dt,a,b,c;
	printf("\nNhap a,b,c: ");scanf("%f%f%f, &a,&b,&c);
	if(a==0)
		bac1(b,c);
	else{	
		dt=pow(b,2)-4*a*c;//da fix
		if (dt<0)
			printf("\n PT vo nghiem"); 
		if (dt==0)
			printf("\n PT co nghiem kep x = %0.2f",-b/2/a);	
	    	if (dt>0)
			printf("\n PT co 2 nghiem: x1 = %.2f; x2 = %.2f",(-b+sqrt(dt))/2/a,(-b-sqrt(dt))/2/a);	
	}
	getch();
}
