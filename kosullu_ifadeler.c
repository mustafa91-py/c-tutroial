# include <stdio.h>
// kosullu ifadeler

void note(){
	//ders 9
	int note;
	printf("not giriniz :");
	scanf("%d ", &note);
	if (note > 60){
		printf("dersden gectiniz");
		
	}else{
		printf("seneye tekrar gir sinava");
	}
}
void logic_exp(){
	//ders 10
	//mankiksal ifadeler
	// && and
	// || or
	// not not
	int a, b=20, c=30;
	
	a = b < c ? b: c ;// bu yapi julia da da vardý !!! ternary operator 
	// https://github.com/mustafa91-py/juliaTutorials/blob/main/ternary.jl
	/*
	julia```
	
						x , y = 1 , 2
					
						x , y = y , x 
						
						x = y
						
						t1() = println("$x > $y")
						
						t2() = println("$x < $y")
						
						t3() = println("$x == $y")
						
						# ternary operator
						
						x > y ? t1() : (x < y ? t2() : t3())
						
						# kosul ? dogru ise  : yanlis ise
	
	
	```
	
	*/
	
	printf("%d\n", a);
	
	int v1,v2,v3;
	v1 = 1;
	v2 = 0;
	v3 = 0;
	
	int def1 = v1 && v2; //1 and 0 == 0
	int def2 = v2 && v3; //0 and 0 == 0
	int def3 = v2 || v3; //0 or 0 == 0
	int def4 = v1 || v3; //1 or 0 == 1
	int def5 = (v2 || v3) && (v2 && v3); // (0 or 0) and (0 and 0) == 0
	int def6 = !(v2 || v3) && !(v2 && v3); // 1 and 1 == 1
	int def7 =!(v2 || v3) || (v2 && v3); // 1 or 0 == 1
	
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d",def1,def2,def3,def4,def5,def6,def7);
	
	
}

void logic_exp2(){
	// kendi alisitrmam
	int open = 1,close = 0;
	int value = 1;
	
	if (value == 0){
		printf("kapali\n");
	}else // arduino dan bu sekilde else yapisi kullanabilecegimi ogrenmistim...
	printf("acik\n");
	
	printf("ternary operator ile sorgu(julia daki ismi ile) \n");
	int query = value == 0 ? printf("close\n") : printf("acik\n") ;
			// value 0 a esit ? (ise) printf("close\n") : deðil ise printf("acik\n")
}
void main(){
	//note();
	//logic_exp();
	logic_exp2();
}
