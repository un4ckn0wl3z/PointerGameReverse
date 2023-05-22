#pragma once
#include "Inventory.hpp"
class Player
{
private:

	int m_mana;
	int m_health;
	Inventory* m_inventory;


public:

	Player(int health, int mana);
	~Player();

	int get_health();
	int get_mana();

	void calc_mana();
	void damage();
	void switch_weapon();
	void shoot();
	void throw_grenade();

	void print_info();
	

};

