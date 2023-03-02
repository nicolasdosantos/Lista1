#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	int id;
	string nome;
	
	cout << "Digite seu nome ";
	cin >> nome;
	
	cout << "Digite sua idade";
	cin >> id;
	
	if (id < 18 ){
		cout <<nome<< ", você é menor de idade";
	}
	
	else if(id>18 && id <65){
		cout<<nome<<", Você é adulto(a)";
	}
	
	else{
		cout<<nome<<", Você é idoso(a)";
	}
}
