#include <iostream>
#include "Player.hpp"


Player::Player(int health, int mana) : m_health{ health }, m_mana{ mana }
{
	this->m_inventory = new Inventory();
}

Player::~Player(){}

int Player::get_health()
{
	return this->m_health;
}

int Player::get_mana()
{
	return this->m_mana;
}

void Player::calc_mana()
{
	this->m_mana -= 3;
}

void Player::damage()
{
	this->m_health -= 5;
}

void Player::throw_grenade()
{
	this->m_inventory->throw_grenade();

}
void Player::switch_weapon()
{
	this->m_inventory->switch_weapon();
}

void Player::shoot()
{
	this->m_inventory->shoot();
}

void Player::print_info()
{
	std::cout << "---------------------- PLAYER STAT -------------------" << std::endl;
	std::cout << "Health: " << this->m_health << std::endl;
	std::cout << "Mana: " << this->m_mana << std::endl;
	std::cout << "Grenade: " << this->m_inventory->get_grenade() << std::endl;
	std::cout << "Selected weapon: " << ((this->m_inventory->get_selected_weapon() == 0) ? "Primary" : "Secondary") << std::endl;
	std::cout << "Ammo: " << this->m_inventory->get_ammo() << std::endl;
	std::cout << "---------------------- ###### ------------------------" << std::endl;
	std::cout << "\n\n\n" << std::endl;

}

