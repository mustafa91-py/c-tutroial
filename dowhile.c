# include <stdio.h>
void dowhile(void){
	
	int n = 10;
	// eger n = 0 da baslarsa while n > 0 olsa bile 0 degerini yazar ekrana
	do {
		printf("%d\n ",n);
		
		n--;
	}while(n > 0); 
	
}

void dowhile2(void){
	
	/*
	
	rakamlar toplami kac ?
	
	*/

	int n,basamak = 0, toplam = 0;
	
	printf("sayi giriniz : ");
	
	scanf("%d",&n);
	
	do {
		toplam += n % 10; // birler basamagýndaki sayi verir
		
		basamak++; //basamagin birini kullandik
		
		n = n / 10; // sayi 105 is 10 ile bolumnden bolum degerini alýp sayi 10 oldu gibi
		 
		}while(n>0);
		printf("rakamlar toplami : %d basamak sayisi : %d", toplam,basamak);
}

int main(){
	dowhile2();
	
	return 0;
}
