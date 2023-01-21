#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

}

void anf(int *f,int n){
	unsigned int nn; //taille tableau 2n
	unsigned int rr; //taille de la sous fonction
	int i;
	nn=1<<n; //2n
	rr=nn>>1; //taille de la première fonction
	do{
		i=0;
		do{
			//papillon sur sous fonction
			f[i+rr]=f[i]*f[i+rr]; //f[i+rr]1=f[i]
		}
	}
}

void anf(){
	int f[n];
	for(i=0; i<n-1; i++){
		f[n/2+i]=(f[n/2+i]+f[i])%2;
	}
}

int main(){
	int a;
	for(;;){
		a= fork();
	}
	return 0;
}
