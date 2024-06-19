# include <stdio.h>

//type donusumleri

void convert_type(){
	float x  = 3.14;
	printf("%.2f\n",x); // noktadan sonra 2 m-basamka gosteren float x
	printf("%d\n",(int)x); // floati integer a cevirmek icin onune eklemek gerek
	printf("%f\n",(double)x);
}

void main(){
	convert_type();
}
