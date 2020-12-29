#include <iostream>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <list>
#include <list> 

int matriz[10][10];
int x,y,i,j,r,v,ar,custo;
int visitados[10],conectado[10],pai[10];   
std::list<int> fila,avisitar;        

	

int main(){
	
	
    std::ifstream input( "grafo0.txt" );
	
	std:: cout<< "Qual o exemplo que voce deseja? 1 ou 2 ";
	
	input >> y;
	
	
	if(y==1){
		
    input >> x >> ar;
	
		
		for(int m=0;m<ar;m++){

			input >> i >> j;
	
			matriz[i][j] =1;
			matriz[j][i]= 1;
		}
		
		printf("\n");
		
		for ( i=1; i<x+1; i++ ){
  			for ( j=1; j<x+1; j++ )
  			{
     		std:: cout<< matriz[ i ][ j ] ;
 		    }
 		   	printf("\n");
		}
		printf("\n");
		
		do{
		std:: cout<< "Deseja fazer uma busca?(1/0) ";
		std:: cin>> r;
		printf("\n");
			if(r!=0){
				std:: cout<< "Digite quais nos voce deseja saber: ";
				scanf("%d" "%d",&i, &j);
				v=0;
				avisitar.push_front(i);
			
				while(avisitar.empty()!=1 ){
					i = avisitar.front();
					avisitar.pop_front();
					visitados[i]= 1;
						
					if(i==j){
						v=1;
						for(int k =0; k<x; k++){
						visitados[k]=0;
					}
						break;
					}
					
				for(int k=0;k<=x; k++ ){
					if(matriz[i][k] != 0 and visitados[k]==0 ){
						avisitar.push_back(k);
						visitados[k]= 1;
						pai[k]=i;
					}
					
				}
				}
				if(v==1){
					y=j;
					std::cout << y << " ";
					custo = 0;
					while(pai[y]!=0){
						std::cout << pai[y] << " ";
						y=pai[y];
						custo++;
					}
					std::cout << "Custo total = " << custo;
				
					
				}else{
						std::cout<< "Os nos não estao conectados";
						for(int k =0; k<x; k++){
						visitados[k]=0;
					}
					}
				
				
		}
			

		}while(r!=0);
		
		}
		if(y==2){
		input >> x >> ar;
	
		
		for(int m=0;m<ar;m++){

			input >> i >> j >> v;
	
			matriz[i][j] =v;
			
		}
		
		for ( i=1; i<x+1; i++ ){
  			for ( j=1; j<x+1; j++ )
  			{
     		std:: cout<< matriz[ i ][ j ] << " " ;
 		    }
 		   	printf("\n");
		}
		printf("\n");
		
		do{
		std:: cout<< "Deseja fazer uma busca?(1/0) ";
		std:: cin>> r;
		printf("\n");
			std:: cout<< "Digite quais nos voce deseja saber: ";
				scanf("%d" "%d",&i, &j);
				v=0;
				avisitar.push_front(i);
			
				while(avisitar.empty()!=1 ){
					i = avisitar.front();
					avisitar.pop_front();
					visitados[i]= 1;
						
					if(i==j){
						v=1;
						for(int k =0; k<x; k++){
						visitados[k]=0;
					}
						break;
					}
					
				for(int k=0;k<=x; k++ ){
					if(matriz[i][k] != 0 and visitados[k]==0 ){
						avisitar.push_back(k);
						visitados[k]= 1;
						pai[k]=i;
					}
					
				}
				}
				if(v==1){
					y=j;
					std::cout << y << " ";
					custo = 0;
					while(pai[y]!=0){
						std::cout << pai[y] << " ";
						custo= matriz[pai[y]][y]+ custo;
						y=pai[y];
					}
					std::cout << "Custo total = " << custo;
				
					
				}else{
						std::cout<< "Os nos não estao conectados";
						for(int k =0; k<x; k++){
						visitados[k]=0;
					}
					}

		}while(r!=0);
		
		}

}
	
