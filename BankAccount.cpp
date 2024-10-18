#include "BankAccount.h"

BankAccount::BankAccount(const std::string& _idAccount, const std::string& idClient) : idAccount(_idAccount), idClient(_idClient) {}

void BankAccount::transfert(BankAccount account2, char idAccount2, float amount, char comment) {
	if (amount <= 0) {
		std::cout << "Le montant doit etre positif !" << endl;
	}
	else if (amount > balance) {
		std::cout << "Montant superieur au solde du compte !";
	}
	else {
		balance -= amount;
		account2.credit(amount);
		std::cout << "Transfert de " << amount << "€ vers le compte " << autreCompte.idAccount2 << " effectué." << endl;
	}

}
