#include <iostream>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <list>
#include<vector>


int matriz[10][10];
int x,y,i,j,r,v,ar,temp,temp2,custo1,w,cont;
int visitados[10],pai[10],custo[10];   
std::list<int> fila;
std::vector<int> avisitar;        

	

int main(){
	
	std::cout<< "1";
    std::ifstream input("grafo1.txt");
	
	

		
    input >> x >> ar;
	
		
		for(int m=0;m<ar;m++){

			input >> i >> j >> custo1;
	
			matriz[i][j] = custo1;
			
		}
		
		printf("\n");
		
		for ( i=1; i<x+1; i++ ){
			printf("\n");
  			for ( j=1; j<x+1; j++ )
  			{
     		std:: cout<< matriz[ i ][ j ] ;
 		    }	
		}
		printf("\n");
		
		
		printf("\n");
				std:: cout<< "Digite quais nos voce deseja saber: ";
				scanf("%d" "%d",&i, &j);
				v=0;
				avisitar.push_back(i);
				custo[i]=0;
				
				while(avisitar.empty()!=1 ){
					i = avisitar.at(0);
					avisitar.erase(avisitar.begin()+0);
					visitados[i]= 1;
					
				for(int k=0;k<=x; k++ ){
					if(matriz[i][k] != 0 and visitados[k]==0 ){
						if(custo[j]==0 or custo[j]>matriz[i][k] + custo[i]){
						custo[k] = matriz[i][k] + custo[i];
						avisitar.push_back(k);
						pai[k]=i;
						}
					}
				}
					for(int z=0;z<avisitar.size();z++){
						temp=custo[avisitar.at(z)];
       				 	temp2= avisitar.at(z);
       				 	for(int w=z+1;w<avisitar.size();w++){
       				 		if(custo[avisitar.at(w)]< custo[avisitar.at(z)]){
       				 			avisitar.at(z)=avisitar.at(w);
       				 			avisitar.at(w)= temp2;
								}
							}
					}
			
			for(int z=0;z<avisitar.size();z++)
			std::cout << avisitar.at(z) << " "<< custo[avisitar.at(z)] << " " ;
			std::cout << "\n" ;
				if(i==j){
						v=1;
						for(int k =0; k<x; k++){
						visitados[k]=0;
					}
						break;
					}
		
			 }
				
				if(v==1 ){
					y=j;
					std::cout << y << " ";
					
					while(pai[y]!=0){
						std::cout << pai[y] << " ";
						y=pai[y];
					}
					std::cout << "Custo total = " << custo[j];
				
					
				}else{
						std::cout<< "Os nos não estao conectados";
						for(int k =0; k<x; k++){
						visitados[k]=0;
					}
					}

return 0;
}
	
