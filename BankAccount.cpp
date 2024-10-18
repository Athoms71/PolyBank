#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(const std::string& _idAccount, const std::string& _idClient) : idAccount(_idAccount), idClient(_idClient) {}


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