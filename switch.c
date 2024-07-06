# include<stdio.h>
//ders 13 switch

void ex_switch(){
	
	int islem,bakiye = 1000,tutar;
	
	printf("islmeler\n1 : para cek\n2 : para yatir\n3 : bakiye sorgu\n4 : iptal");
	
	scanf("%d",&islem);
	
	switch (islem){
		
		case 1:
			printf("toplam bakiyeniz : %d",bakiye);
			printf("miktar girin");
			
			scanf("%d",& tutar);
			
			/*if (tutar > bakiye){
				printf("bakiye yetersiz");
				
				
			}*/
			tutar > bakiye ? printf("bakiye yetersiz\n"):printf("");
			bakiye -= tutar;
			printf("bakiyeniz %d",bakiye);
			 break ;
			
		case 2:
			printf("aaaa");
		case 3:
			printf("aaa");
		case 4:
			printf("aaa");
		//default:
			
			
	}
	
}
void sswitch(){
	int islem;
	 
	int bakiye = 1000; 

	int tutar;

	printf("islmeler\n1 : para cek\n2 : para yatir\n3 :havale yapma\n4 : bakiye sorgu\n5 : iptal");
	
	printf("islemi seciniz");
	
	scanf("%d",&islem);
	
	
	switch (islem){
		
		case 1:
			printf("bakiyeniz %d\n",bakiye);
			printf("cekilecek tutar : ");
			scanf("%d",&tutar);
			if (tutar > bakiye){
				printf("bakiye yetersiz");
			}
			bakiye -= tutar;
			printf("bakiyeniz %d",bakiye);
			break;
		case 2:
			printf("bakiyeniz %d\n",bakiye);
			printf("yatirilacak tutar : ");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("bakiyeniz %d",bakiye);
			break;
		case 3:
			printf("bakiyeniz %d\n",bakiye);
			printf("havale tutar : ");
			scanf("%d",&tutar);
						if (tutar > bakiye){
				printf("bakiye yetersiz");
			}
			bakiye -= tutar;
			printf("bakiyeniz %d",bakiye);
			break;
		case 4:
			printf("bakiyeniz %d",bakiye);
			break;
		case 5:
			printf("kart iade edildi\n");
			break;
		default :
			printf("bilinmeuyen islem");
			break;
		
	}
	
	
	
	
}

void main(){
	sswitch(); 
}
