# include <stdio.h>

void deneme1(){
		int i;
	i = 0;
	i++;i++;i++;
	printf("%d\n",i); // sonuc 3 i 3k3z arttý
	printf("%d\n",i++); // burda i arttiriloyor fakat bir sonraki satirda artimi yapiyor
	printf("%d\n",i); // artirilan iyi degeri
	printf("----------------------------------------------------------------\n");
	printf("%d\n", ++i); // burda artim degerini hemen gosteriyor
	printf("----------------------------------------------------------------\n");
	int x = 6;
	x %= 3;
	printf("%d",x);
}
void deneme2(){
	int x;
	int y;
	int z;
	x = 5;
	y = 7;
	z = 2;
	
	x = y;
	
	y = x + z + 1;
	printf("%d \n",y);
}

int main(){
	//deneme1();
	deneme2();
	
	
	return 0;
}
