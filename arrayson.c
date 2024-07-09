# include <stdio.h>

int main(){
	
	// ders24
	
	/*
	3 5 1 3 2
    4 4 4 5 5
	9 8 9 7 7 	
	
	ayni sutundaki sayilari topla
	*/
	int matris[3][5] = {
	{3,5,1,3,2},
	{4,4,4,5,5},
	{9,8,9,7,7}
	};
	
	int i,j;
	
	int toplam[5];
	
	// i row olsun
	// j de column olsun
	
	for (j = 0; j < 5; j++){
		
		int ara_toplam = 0;
		
		for (i = 0; i < 3; i++){
	
			ara_toplam += matris[i][j];
	
			printf("i = %d, j = %d , %d\n",i,j, matris[i][j]);
				 
			
		}
		
		toplam[j] = ara_toplam;
		
		printf("%d\n",ara_toplam);
	}
	
	int genel_toplam = 0;
	
	for (i = 0; i<5; i++){
	
		genel_toplam += toplam[i];
	
		printf("%d column toplam = %d\n",i,toplam[i]);
	
	}
	
	printf("genel toplam = %d",genel_toplam);
	
	
	
	return 0;
}
