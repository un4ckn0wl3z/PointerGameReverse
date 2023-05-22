#include "Inventory.hpp"


Inventory::Inventory() : m_selected_weapon{ 0 }, m_grenade_count{5} 
{
	this->m_primary_weapon = new Weapon(60);
	this->m_secondary_weapon = new Weapon(30);
}
Inventory::~Inventory(){}

int Inventory::get_grenade()
{
	return this->m_grenade_count;
}


int Inventory::get_selected_weapon()
{
	return this->m_selected_weapon;
}

void Inventory::switch_weapon()
{
	this->m_selected_weapon = this->m_selected_weapon == 0 ? 1 : 0;
}

void Inventory::throw_grenade()
{
	this->m_grenade_count -= 1;
}



void Inventory::shoot()
{
	if (this->m_selected_weapon == 0)
	{
		return this->m_primary_weapon->shoot();
	}
	return this->m_secondary_weapon->shoot();

}

int Inventory::get_ammo()
{
	if (this->m_selected_weapon == 0)
	{
		return this->m_primary_weapon->get_ammo();
	}
	return this->m_secondary_weapon->get_ammo();
	
}
