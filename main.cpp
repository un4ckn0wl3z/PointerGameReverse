#include <iostream>
#include "Player.hpp"

int main()
{
	system("title [#] Pointer's Game [#]");

	static Player* player = new Player(100, 100);
	int option;
	const char* status = "initialize\n";

	while (player->get_health() < 200 && player->get_mana() < 200 )
	{
		player->print_info();

		std::cout << "1. Shoot" << std::endl;
		std::cout << "2. Switch weapon" << std::endl;
		std::cout << "3. Throw grenade" << std::endl;
		std::cout << "4. Calculate Mana" << std::endl;
		std::cout << "5. Hit me" << std::endl << std::endl;
		std::cout << "status: " << status << std::endl;

		std::cout << "Enter action: ";
		std::cin >> option;

		switch (option)
		{
		case 1:
			player->shoot();
			status = "Shooted!\n";
			break;
		case 2:
			player->switch_weapon();
			status = "Weapon switched!\n";
			break;
		case 3:
			player->throw_grenade();
			status = "Fire in the hall!\n";
			break;
		case 4:
			player->calc_mana();
			status = "Mana has been used!\n";
			break;
		case 5:
			player->damage();
			status = "You have been attacked X_X!\n";
			break;
		default:
			break;
		}
		

		system("cls");
	}

	std::cout << "Done!" << std::endl;

	return 0;
}