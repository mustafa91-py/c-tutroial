#include <stdio.h>

void toplamfunc(void){
	// ders18
	int toplam = 0;
	
	int i;
	
	int sayi;
	
	for (i = 0; ; i++){
		printf("sayi giriniz : ");
		
		scanf("%d",&sayi);
		if (sayi == -1){
			break;;
		}
		toplam += sayi;
	}
	printf("%d ",toplam);
}
void ciftsayi(){
	//ders19
	int toplam = 0, i;
	for (i = 0; i <= 10; i++){
		if(i % 2 == 1)
		continue;
		toplam += i;
	
	}
	printf("for toplam %d \n",toplam);
	
}
void ciftsayiwhile(){
	//ders19
	int toplam = 0;
	
	int i = 0;
	
	int sayi;
	while (i <= 10){
		i++;
		if(i % 2 == 1)
		continue;
		toplam += i;
	}
		printf("while toplam %d\n",toplam);
	
}
void array(){
	//ders20
	int sayilar[] = {1,2,3,4,5};
	
	int i = 0;
	
	for(i; i < 5; i++){
		printf("%d\n",sayilar[i]);
	}
	
}
int main(void){
	//toplamfunc();
	ciftsayi();
	ciftsayiwhile();
	array();
	return 0;
}
