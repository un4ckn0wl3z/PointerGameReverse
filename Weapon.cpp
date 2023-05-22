#include "Weapon.hpp"

Weapon::Weapon(int ammo) : m_ammo{ammo} {}
Weapon::~Weapon() {}

int Weapon::get_ammo()
{
	return this->m_ammo;
}

void Weapon::shoot()
{
	this->m_ammo -= 1;
}