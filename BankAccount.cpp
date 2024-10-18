#include "BankAccount.h"

BankAccount::BankAccount(const std::string& _idAccount, const std::string& idClient) : idAccount(_idAccount), idClient(_idClient) {}

void BankAccount::credit(const float amount) {
	if (amount >= 0) {
		balance += amount;
	}
	else {
		std::cout << "Le montant doit �tre positif !" << std::endl;
	}
}

void BankAccount::infos() const {
	std::cout << "Vous avez : " << balance << " euros." << std::endl;
	std::cout << "Voici la liste des op�rations :" << std::endl;
	for (int i = 0; i < listOp.size(); i++) {
		std::cout << i << " : " << listOp[i] << std::endl;
	}
}

void BankAccount::retrait(const float amount){
    std::cout << "Vous avez demandé un retrait de " << amount << "€.";
	if (amount > balance){
        std::cout << "Le solde de votre compte est insuffisant pour faire un retrait de la somme demandée." << std::endl;
    }
    else {
        balance -= amount;
        std::cout << "Votre retrait d'un montant de " << amount << "€ a bien été pris en compte.";
    }
}