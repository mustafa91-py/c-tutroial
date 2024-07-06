# include <stdio.h>
int faktoriyel(){
	/*not yuksek sayilari hesaplayamaz int degeri*/
	int n;
	int f = 1;
	printf("faktoreyel icin sayi girin : ");
	scanf("%d",&n);
	
	while (n != 0){
		
		printf("%d\n",f);
		f = f * n;
		n--;
	}
	printf("deger = %d",f);
	return f;
}

int main(){
	faktoriyel();
}
