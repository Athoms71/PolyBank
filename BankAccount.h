#pragma once
#include <string>
#include <vector>

class BankAccount {
private:
	const std::string idAccount;
	const std::string idClient;

	float solde = 0;

	std::vector<std::string> listOp;

public:
	BankAccount(const std::string& _idAccount, const std::string& _idClient);


};