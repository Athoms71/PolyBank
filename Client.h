#include <iostream>
#include <string>

class Client {
public:
	Client(const std::string& prenom, const std::string& nom);
	std::string prenom();
	std::string nom();
private:
	std::string _prenom;
	std::string _nom;
};
