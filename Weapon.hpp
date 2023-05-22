#pragma once
class Weapon
{
private:

	int m_ammo;

public:
	Weapon(int ammo);
	~Weapon();

	int get_ammo();
	void shoot();
};

