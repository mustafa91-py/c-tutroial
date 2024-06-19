# include <stdio.h>
# include <math.h>

float Avrg(){
	// 5 sayinin ortalamasaini hesaplamak
	int a, b, c, d, e;
	
	float avrg;
	
	printf("5 adet sayi girin\n");
	
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	avrg = (a+b+c+d+e) / 5.0;
	
	printf("aritmetik ort : %.2f\n",avrg);
	return avrg; 
}

void root_2(){
	int a, b, c;
	
	float x1, x2;
	printf("ax^2 + bx +c seklinde ki denklem icin\n");
	printf("denkelmin a degeri\n");
	scanf("%d",&a);
	
	printf("denkelmin b deðeri\n");
	scanf("%d",&b);
		
	printf("denkelmin c deðeri\n");
	scanf("%d",&c);
	
	float delta = (b*b) - (4*a*c);
	x1 = (-b + sqrt(delta)) / 2* a;
	x2 = (-b - sqrt(delta)) / 2* a;
	
	printf("denklmein kokleri %.3f, %.3f",x1,x2);
}


int main(){
	//Avrg();
	root_2();;
	return 0;
}

