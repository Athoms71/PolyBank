#include "BankAccount.h"

BankAccount::BankAccount(const std::string& _idAccount, const std::string& idClient) : idAccount(_idAccount), idClient(_idClient) {}

void BankAccount::credit(const float amount) {
	if (amount >= 0) {
		balance += amount;
	}
	else {
		std::cout << "Le montant doit être positif !" << std::endl;
	}
}