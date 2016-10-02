#pragma once
#include "AdventureObject.h

using FString = std::string;
using Int32 = int;

struct Enchantment
{
	FString EName; //enchantment name
	Int32 EType; //enchantment type, 1 = Magic, 2 = Fire, 3 = Poison, 4 = Electricity, 5 = Acid
	Int32 EAttackBonus; //bonus to attack as a result of this enchantment
	Int32 EDamageBonus; //bonus to damage as a result of this enchantment
	Int32 EDuration; //rounds that the enchantment lasts, -1 = unlimited
};

class AOWeapon :
	public AdventureObject
{
public:
	AOWeapon();
	//Set enchantment
	//Get active enchantments
	//Set Weapon Type, 1=sword, 2=dagger, 3=warhammer, 4=wand
	//Get Weapon type
	//Set Damage Type, 1=slice, 2=pierce, 3=bash, 4=magic
	//Get Damage Type
	
private:
	Int32 WeaponType;
	Int32 DamageType;
	Int32 AttackBonus;
	Int32 DamageBonus;
	//create a map of Enchantments
};

