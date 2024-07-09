# include <stdio.h>
//ders 25 fonksiyonlar
void hatayibas(int hata){
	printf("hata kodu : %d",hata);
}

int main(){
	int sayi;
	
	printf("negatif olmayan sayi girin : ");
	
	scanf("%d",&sayi);
	
	if (sayi < 0){
		hatayibas(404);
	}else if  (sayi == 0){
		printf("sayi notr");
	}
	else {
		printf("sayi pozitif ");
	}
	
	
	
	
	
	
	
	return 0;
}
