#include <stdio.h>

// ders 11

void note(){
	int v1,v2,f;
	float avrg;
	
	printf("vize1 notu : ");
	scanf("%d",&v1);
	
	printf("vize2 notu : ");
	scanf("%d",&v2);
	
	printf("final notu : ");
	scanf("%d",&f);
	
	avrg = (v1 + v2 + f)/3.0;
	
	
	float status;
	
	//ternary yapsi ile
	
	status = avrg > 75 ? printf("yuksek not aldiniz puan : %.2f\n",avrg) : (avrg >= 60 ? printf("gecer not aldiniz puan : %.2f\n",avrg): printf("kasiyerlik e giris puani aldiniz")) ;
	
	
	printf("\n\n\n   ikinci block yapisi  \n\n\n");
	
	// normal yapi ile
	
	if (avrg > 75) printf("if block : yuksek not aldiniz puan : %.2f\n",avrg);
	
	else if (avrg >= 60) printf("else if block : gecer not aldiniz puan : %.2f\n",avrg);
	
	else printf("else block : kasiyerlik e giris puani aldiniz\n\t\tsizi harcayip harcayip bitiremeyecekler !");
}
void note2(){

	float butunleme(){
		// parametre vermeyi daha ogrenmedim icin deger almiyorum
		int butunleme_notu;
		printf("butunleme notunuzu giriniz : ");
		scanf("%d",&butunleme_notu);
		return butunleme_notu * 60 / 100;
		}

	int v1,f;
	//float avrg;
	
	printf("vize1 notu : ");
	scanf("%d",&v1);
	
	//printf("vize2 notu : ");
	//scanf("%d",&v2);
	
	printf("final notu : ");
	scanf("%d",&f);
	
	float visa_weight = v1 * 40 / 100; // vizenin yuzde 40 i
	float final_weight = f * 60 / 100; // finalin yuzde 60 i
	float total_point = visa_weight + final_weight; // alinan toplam puan
	
	printf("aldinan puan : %.2f\n",total_point);
	
	
	//ternary opretor ile
	
	float result = total_point >=60 ? printf("gecti\n") : (visa_weight + butunleme() >= 60 ? printf("butunleme ile gectiniz\n") :printf("\nkaldiniz"));

}

int main(){
	//note();
	//float alinan_note = note2();
	note2();
	return 0;
}
