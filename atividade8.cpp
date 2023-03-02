#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int id, c;
	float d;
	
	cout<<"A quantos anos você fuma: ";
	cin>>id;
	cout<<"Quantos cigarros você fuma por dia: ";
	cin>>c;
	
	d = (id * c * 3650)/1440;
	
	system("pause");
	system("cls");
	
	cout<<"Você perdeu "<<d<<" Dias de vida fumando";
}
