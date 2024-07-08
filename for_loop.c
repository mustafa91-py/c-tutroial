#include <stdio.h>

void for_loop(){
	int i = 0;
	
	for(i;i < 10;i++){
		printf("%d\n",i);
	}
	
}
void for_loop2(){
	int i= 0;
	
	int j = 1;
	
	for (i,j;i < 10 && j < 5; i++,j++){
	
		printf("i = %d j = %d\n",i,j);
		
	}
	
}
void main(void){
	for_loop2();
	
}
