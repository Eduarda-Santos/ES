#include <stdio.h>
#include <stdlib.h>
int TAM = 80000;
int j, aux, i;

void setVetor(int *v) {
   int i;
   for (i=0; i<TAM; i++) 
    	v[i] = 10 + rand()%90;   
}

void insertSort(int *v){
	for(i = 1; i < TAM; i++){
		for(j = i; j > 0; j--){
				if(v[j] < v[j-1]){
					aux   = v[j-1];
					v[j-1]= v[j];
					v[j]  = aux;
				} else break;	
		}
	//	printf(".");						
	}
}

void bubbleSort(int *v){
	for (i=0;i<TAM-1;i++){
		for (j=i+1; j<TAM; j++){
			if (v[i]>v[j]){
					aux = v[j];
					v[j]= v[i];
					v[i]= aux;
			}
		}	
	}
}
void selectSort(int *v){
	for(i = 1; i < TAM; i++){
		j = i - 1;
		while(v[j - 1] < v[j]){
			if(v[j] < v[j - 1]){
				aux = v[j];
				v[j] = v[j - 1];
				v[j - 1] = aux;
			}
			j--;
		}
	}
}
void main(){
	int  v[TAM]; // = {6,5,3,1,8,7,2,4};
	setVetor(v);
	//insertSort(v);
	//bubbleSort(v);
	selectSort(v);
	printf("pronto\n");
}