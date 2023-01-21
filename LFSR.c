#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 9
int Etat[L];
int Polynome[L]={1,0,0,1,0,0,1,1,0};

void Initialise(int *e){
	int i;
	for (i=0; i<L-1; i++)	Etat[i]=e[i];
}

void AfficheEtat(){
	int i;
	for (i=L-1; i>=0; i--) printf("%2d", Etat[i]);
	printf("\n");
}

void Avance(){
	int i;
	int s = Etat[L-1]*Polynome[L-1];
	for (i=0; i<L-1; i++){
		s = s + Etat[i]*Polynome[i];
		Etat[i]=Etat[i+1];
		AfficheEtat();
	}
	Etat[L-1] = s%2;
}

int SontEgaux(int *a, int *b){
	for(int i=0; i<L-1; i++){
		if(a[i]=!b[i]){
			return 0;
		}
	}
	return 1;

}


int boucle_vingt(){
	int EtatInitial[L] = {1,0,0,0,0,0,0,0,0};
	Initialise(EtatInitial);
	for(int i=0; i<=155; i++){
		if(SontEgaux(EtatInitial,Etat)==0) Avance();
	}
	return 0;
}
void Periode(int *e){
	int T;
	for(T=1; SontEgaux(e,Etat) != 1;T++){
		Avance();
	}
	printf("%d", T);
}

int main(){
	int EtatInitial[L] = {1,0,0,0,0,0,0,0,0};
	Initialise(EtatInitial);
	AfficheEtat();
	//Avance();
	//Periode(EtatInitial);
	boucle_vingt();
	AfficheEtat();
	return 0;
}
