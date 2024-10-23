#include <iostream>
#include "Client.h"
#include <string>


Client::Client(const std::string& prenom, const std::string& nom) {
	_prenom = prenom;
	_nom = nom;
}

std::string Client::prenom()
{
	return _prenom;
}

std::string Client::nom()
{
	return _nom;
}
