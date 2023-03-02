#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3;
	float result;

	cout<<"Insira sua primeira nota: ";
	cin>>n1;
	cout<<"Insira sua segundo nota: ";
	cin>>n2;
	cout<<"Insira sua terceira nota: ";
	cin>>n3;
	
	system("pause");
	system("cls");
	
	result = (n1+n2+n3)/3;
	
	if(result >= 7){
		cout<<"Você foi aprovado "<<result;
	}
	else if(result >= 5 && result < 7){
		cout<<"Você ficou de recuperação "<<result;
	}else{
		cout<<"Reprovado com a média "<<result;
	}
	
}
