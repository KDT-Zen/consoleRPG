#include "Character.h"

void Character::TakeDamage(int arg_damage)
{
	hp -= arg_damage;
}

void Character::TakeHeal()
{
	hp += max_hp * 0.4;
}
