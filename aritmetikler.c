#include <stdio.h>

int sayi(){
	int x;
	x = 5;
	return x;
	
}
int oncelik_sirasi(){
	int x;int y;int z;
	x = 2;y = 3; z = 4;
	
	printf("%d\n",x-y+z);
	printf("%d\n",x*y-z);
	printf("%d\n",z-x*y);
	printf("%d\n",x*y%z); 
	printf("%d\n",x*(y-z));
	return 0;
}

int main(){
//	float deger;
//	int deger2;
//	deger = -sayi();
//	int deger2 = -sayi();
//	printf("%f\n%d",deger,deger2);
	oncelik_sirasi();	
	return 0;
}
