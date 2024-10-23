#include <iostream>
#include "Client.h"

int main() {
	Client Test("Aurélien", "LITRA");
	std::cout << Test.prenom() << " et " << Test.nom() << std::endl;
	return 0;
}
