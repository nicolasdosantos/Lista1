#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	float s, aumento, d;
	
	cout<<"Insira seu sal�rio R$";
	cin>>s;
	
	if(s<=1500){
		aumento = s * 1.10;
	}else{
		aumento = s *1.05;
	}
	d = aumento-s;
	
	system("pause");
	system("cls");
	
	cout<<"O seu novo sa�rio � de R$"<<aumento<<" e teve um aumento de R$"<<d;
}
