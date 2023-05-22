#pragma once
#include "Weapon.hpp"
class Inventory
{

private:

	int m_selected_weapon;
	int m_grenade_count;
	Weapon* m_primary_weapon;
	Weapon* m_secondary_weapon;

public:
	Inventory();
	~Inventory();

	void switch_weapon();
	void shoot();
	void throw_grenade();
	int get_grenade();
	int get_selected_weapon();
	int get_ammo();
};

