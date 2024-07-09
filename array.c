# include <stdio.h>

int main(){
	//ders21
	float toplam = 0.0;
	float sayilar[5];
	int i;
	
	for(i=0; i < 5; i++){
		printf("bir sayi giriniz : ");
		scanf("%f",&sayilar[i]);
		
	}
	for (i = 0; i < 5; i++){
		toplam += sayilar[i];
	}
	printf("toplam = %.2f aritmetik ort = %.2f",toplam,toplam/5);

	
	return 0;
}
