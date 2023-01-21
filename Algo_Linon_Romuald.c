#include<stdlib.h>
#include<stdio.h>

//LINON Romuald
//L3 MATHEMATQUES
//Numéro étudiant: 15603733
//Devoir Maison Algorithme Algébrique



//Algorithme de CORDIC

int CORDIC (int angle, int precision){
	float tab = [0,78539816339744830962;0,099668652491162027378;0,0099996666866652382063;0,00099999966666686666652;0,000099999999666666668667;0,0000099999999996666666667;0,00000099999999999966666667];
	int k=0;
	float X=1;
	float Y=0;
	float temp;
	while (angle>precision){
		angle = angle - tab[k];
		temp = X;
		X = X-(10^(-k))*Y;
		Y = Y+(10^(-k))*temp;
		k = k++;
	}
	temp = Y/X;
	return temp, k;
}


//Calcul du cosinus avec développements en séries entières de Taylor

//Je calcul seulement le cosinus car comme j'aurai déjà la tangente
// je n'aurai plus qu'à faire le produit des deux pour obtenir le sinus

float Taylor(float angle, int k){
	float m = 1;
	if (k = 0){
		return m;
	}
	for (i = 1, i <= k, i++){
		m = m + ((((-1)^i)/factoriel(k))*(angle^(2*i)));
	}
	return m;
}


//Je l'ai faite seulement pour le cas du calcul du cosinus ci-dessus

double facoriel(int k){
	int n = 2*k;
	for (i=n, i >=1, i--){
		n= n*i;
	}
	return n;
}


int main(){
	printf("Entrez la valeur de l'angle");
	float angle = input();
	printf("Entrez la précision souhaitée");
	int b = input;
	precision = 10^(-b);
	CORDIC(angle, precision);
	Taylor(angle, k);
	float sinus = temp*m;
	float invcos = 1/m;
	float invsin = 1/(temp*m);
	float cotan = 1/temp;
	printf("La valeur de la tangente est de: %d \n",temp);
	printf("La valeur du sinus est de: %d \n", sinus);
	printf("La valeur du cosinus est de: %d \n", m);
	printf("La valeur de 1/sin est de: %d \n", invsin);
	printf("La valeur de 1/cos est de: %d \n", invcos);
	printf("La valeur de la cotangente est de: %d \n", cotan);
	return 0;
}
