#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n, unidade, dezena, centena;
	
	do{
	
	cout << "Digite um numero de três digitos";
	cin >> n;
	
	}while(n <= 99 or n >999);
	
	unidade = n % 10;
	dezena = (n/10) %10;
	centena = (n/100) %10;
	
	system("pause");
	system("cls");
	
	cout<<"A soma dos digitos do numero escolhido é: "<<unidade+dezena+centena;
}
