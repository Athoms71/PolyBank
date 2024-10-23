#pragma once
#include <string>
#include <vector>
#include <iostream>

class BankAccount {
private:
	const std::string idAccount;
	const std::string idClient;

	float balance = 0;

	std::vector<std::string> listOp;

public:
	BankAccount(const std::string& _idAccount, const std::string& _idClient);

	const std::string& getIdAccount() const;

	void transfert(BankAccount& account2, float amount, const std::string& comment);

	void credit(const float amount);

	void infos() const;
	void retrait(const float amount);
};
