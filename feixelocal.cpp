/* 
	Aluno : Joan Filipe
	Busca feixe local:
	Dada a função o programa executa N vezes até encontrar o máximo local
	-1 <= X <= 2;
*/



#include<iostream>
#include<iostream>
#include<cmath>
#include <stdlib.h> 
#include <time.h>



using namespace std;

double funcao(float x)  //Função f(x)
{
	return (x*(sin(10*3.141592*x)))+1;
	
}

int main()
{	
	srand ( time(NULL) );
	float temp,temp2;
	double x =0;
	float r[10],r1[10],viz[20],fviz[20],soma; // qntidade de estados = 10
	int fg,n=0,a=0;
	
	for(int z=0;z<10;z++)
		r[z] = ((float)rand() / (float)(RAND_MAX/3) - 1); 

	while(a==0){
		
		cout << "Atualizando: " << n << " vezes \n ";
		cout << "X :";
		for(int z=0;z<10;z++){
		r[z] = floorf(r[z] * 1000) / 1000; 
		cout << " " << r[z] << " " ; // imprimindo valores de K com 3 casas decimais
		}
		soma = 0;
		cout << "\n F(x): ";
		for(int z=0;z<10;z++){
		r1[z] = funcao(r[z]);
		
		
		r1[z] = floorf(r1[z] * 1000) / 1000;
		
		
		if(r1[z]==r1[z+1]){
			soma++;
			if (soma==9)
				a=1;         // sai do laço quando os valores forem iguais
		}
		cout << r1[z] << " " ; // imprimindo valores de f(x) com 3 casas decimais
		}
	
		for(int z=0;z<10;z++){
		viz[z] = r[z] + 0.001 ; 	// incrementando o valor ao vizinho
		viz[z+10] = r[z] - 0.001;
		fviz[z] = funcao(viz[z]);
		fviz[z+10] = funcao(viz[z+10]);
		}
		
		// Ordenando pelos maiores f(x) dos vizinhos
		for(int z=0;z<20;z++){
			temp=viz[z];
			temp2= fviz[z];
       			for(int w=z+1;w<20;w++){
       				 		if(fviz[w]> fviz[z]){
       				 			viz[z]=viz[w];
       				 			viz[w]= temp;
       				 			fviz[z]=fviz[w];
       				 			fviz[w]= temp2;
								}
							}
					} 
	
		for(int z=0;z<10;z++)
		r[z] = viz[z];

			
		cout<< "\n Digite um numero qualquer para continuar \n";	
		n++;
		cin >> fg;
				
	}
	
	return 0;
}


