#include <stdio.h>

void for_loop(){
	int i = 0;
	
	for(i;i < 10;i++){
		printf("%d\n",i);
	}
	
}
void for_loop2(){
	//ders 16
	int i= 0;
	
	int j = 1;
	
	for (i,j;i < 10 && j < 5; i++,j++){
	
		printf("i = %d j = %d\n",i,j);
		
	}
	
}
void fibonacci(void){
	int ilksayi = 1;
	int ikincisayi = 1;
	int i;


	for (i = 0 ; i < 12; i++){
		
		int temp = ikincisayi;
		
		ikincisayi += ilksayi;
		
		ilksayi = temp;
		
		printf("%d\n",ikincisayi);
	}

	
}
void main(void){
	//for_loop2();
	fibonacci();
}
