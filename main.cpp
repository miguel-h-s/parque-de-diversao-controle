#include<iostream>

int main() {
	std::cout<<"bem vindo ao parque de diversão!"<<std::endl;

	std::cout<<"qual sua altura em metros?"<<std::endl;
	double altura;
	std::cin>>altura;

	std::cout<<"qual sua idade?"<<std::endl;
	int idade;
	std::cin>>idade;

	if(idade < 0 || altura < 0) {
		std::cout<<"valores invalidos!"<<std::endl;
		return 1;
	}

	if(idade > 12 && altura > 1.50) {
		std::cout<<"entrada permitida!"<<std::endl;
	} else {
		std::cout<<"entrada negada!"<<std::endl;
	}
	return 0;
}
