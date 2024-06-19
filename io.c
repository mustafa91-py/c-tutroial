
//printf ve scanf (ders 7)
# include <stdio.h>

# define PI 3.14

int main(){
	
	int radius;
	float volume;
	printf("kurenin yaricapi : \n");
	scanf("%d",&radius);
	//printf("%d\n",radius);
	
	volume = (4/3.0) * PI * (radius*radius*radius);
	printf("%.3f\n kurenin hacmi = ",volume); 	
	
	return 0;
}
