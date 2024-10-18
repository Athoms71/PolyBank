#pragma once
#include <string>
#include <vector>

class BankAccount {
private:
	std::string idAccount;
	std::string idClient;

	float solde = 0;

	std::vector<std::string> listOp;

public:
	BankAccount(std::string _idAccount, std::string idClient);


};