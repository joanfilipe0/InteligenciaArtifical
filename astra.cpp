#include<iostream>
#include <stdio.h>
#include <fstream>
#include <sstream>

using namespace std;

int e,x,atual;

int main(){
	
	std::ifstream input( "astra1.txt" );
	
	input >> e >> x >> atual; // qtd elementos / qntdade execuções / no inicial
	int vetor[e];
	
	for(int k=0; k<e;k++){
		input >> vetor[k];
	}
	for(int k= 0; k<e; k++){
		if(k == atual)
		cout<< "[" << vetor[k] << "] " ;
		else
		cout<< vetor[k] << " " ;
	}
	
	for(int k=0;k<x;k++){
		cout<<  "\n" ;
		if(vetor[atual-1]<vetor[atual+1]){
			vetor[atual] = vetor[atual-1] + 1;
			atual= atual-1;
			for(int k= 0; k<e; k++){
				if(k == atual)
				cout<< "[" << vetor[k] << "] " ;
				else
				cout<< vetor[k] << " " ;
	}
	
		}else{
			vetor[atual] = vetor[atual+1] + 1;
			atual= atual+1;	
			for(int k= 0; k<e; k++){
				if(k == atual)
				cout<< "[" << vetor[k] << "] " ;
				else
				cout<< vetor[k] << " " ;
			}
		}
	}
}

