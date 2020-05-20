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
