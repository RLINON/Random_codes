#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	long unsigned int a;
	long unsigned int b;
	long unsigned int c;
	a = 0x12;
	b = 0x12ab;
	c = 0xff;
	printf("Valeur de b en base 10 est: %d \n",b);
	binaire(b);
	//printf("La valeur de a est %d \n",a);
	//printf("La valeur de a est %d \n",b);
	//printf("La valeur de a est %d \n",c);
	return 0;
}

int binaire(int a){
	int tab[32];
	int b;
	int r;
	for(int i = 0; i<=31; i++){
		b = a/2;
		r = a - 2*b;
		tab[i]=r;
		a=b;
		if(a<2){
			tab[i] = -1;
		}
		printf("%d", tab[i]);
	}
	printf("\n");
	for (int j = 31; j>=0; j--){
		if(tab[j] == 1){
			if(j == 0){
				printf("1 \n");
				return 0;
			}
			printf("X^%d + ",j);			
		}
	}
	printf("\n");
	return 0;
}
