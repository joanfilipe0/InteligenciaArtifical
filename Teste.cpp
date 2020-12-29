#include<iostream>
#include<math.h>
#include <iomanip>
#include <random>

using namespace std;

double funcao(double x){
	return ((x*sin(10*3.14*x)) + 1);
}



int main()
{
    double y=2

	double x = funcao(y);
	cout<< "\n Funcao = " << x ;
	 return 0;
}
