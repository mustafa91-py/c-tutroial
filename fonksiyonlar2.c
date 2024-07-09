# include <stdio.h>
// ders 26
int toplam_islem = 0;

int faktoriyel (int sayi){

	int f = 1;
	
	int i;

	if (!error(sayi)){
		if (toplam_islem == 3){
			
			printf("3 kez hatali giris program sonlandirildi\n");
			return 0;
		}
		
		
		
		printf("kalan hak %d\n", 3 - toplam_islem);
		toplam_islem++;
		return islem();
	
	}
	
	for (i=1; i <= sayi ; i++){
	
		f *= i;
	
		printf("f = %d  i = %d!\n",f,i);
	
	}
	
	printf("%d", f);
	
	return f;
}

int error(int sayi){

	if (sayi <= 0){
		
		printf(">>> %s","sayi negatif veya sifir olamaz\n");

		return 0;

	}else if (sayi > 15){

		printf(">>> secilen sayi en fazla 15 olabilir\n");

		return 0;
	}
	else{

		printf(">>> sayi pozitif \n ");

		return 1;
	}
}
int deger_al(){

	int sayi;

	printf("pozitif sayi giriniz : ");

	scanf("%d",&sayi);
	
	return sayi;;
}

int islem(){
	
	//int sayi = deger_al();
	int sayi = deger_al();
	
	faktoriyel(sayi);
	
	return sayi;
}


int main(){
	
	toplam_islem++;	
	
	islem();

	return 0;
}
