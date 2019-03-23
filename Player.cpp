#include "Player.h"

Player::Player() : currHealth(DEFAULT_HEALTH), maxHealth(DEFAULT_HEALTH), currExperience(0),  
nextLevExperience(DEFAULT_EXP_NEEDED), currLevel(1), currStats{ 0 }, playerInventory()
{   }

void Player::gainHealth(int healthToGain)
{
	if (this->currHealth + healthToGain > this->maxHealth)
	{
		currHealth = maxHealth;
	}
	else
	{
		currHealth += healthToGain;
	}
}

int Player::loseHealth(int damageTaken)
{
	if (currHealth - damageTaken <= 0)
	{
		currHealth = 0;
		return 1;
	}
	else
	{
		currHealth -= damageTaken;
		return 0;
	}
}

int Player::addItem(Item itemToAdd)
{
	return playerInventory.addItem(itemToAdd);

}

int Player::removeItem(Item itemToRemove)
{
	return playerInventory.removeItem(itemToRemove);
}

void Player::addExperience(int experienceToGain)
{
	currExperience += experienceToGain;
	while (currExperience > nextLevExperience);
	{
		currExperience -= nextLevExperience;
		nextLevExperience += nextLevExperience * LEVEL_EXP_INCREASE_PERCENT;
		this->levelUp();
	}
}

void Player::levelUp()
{
	std::cout << "Level up!" << std::endl;
	currLevel++;
	int statToUpgrade;
	std::cout << "Which stat would you like to level up?" << std::endl;
	std::cout << DAMAGE_MENU_SLOT << ") Damage" << std::endl;
	std::cout << HEALTH_MENU_SLOT << ") Health" << std::endl;
	std::cout << CARRY_MENU_SLOT << ") Carry Weight" << std::endl;
	std::cout << "Stat to level up: ";
	std::cin >> statToUpgrade;
	std::cout << std::endl;
	while (std::cin.fail() || statToUpgrade <= 0 || statToUpgrade >= 4)
	{
		std::cout << "Invalid choice." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Which stat would you like to level up?" << std::endl;
		std::cout << DAMAGE_MENU_SLOT << ") Damage" << std::endl;
		std::cout << HEALTH_MENU_SLOT << ") Health" << std::endl;
		std::cout << CARRY_MENU_SLOT << ") Carry Weight" << std::endl;
		std::cout << "Stat to level up: ";
		std::cin >> statToUpgrade;
		std::cout << std::endl;
	}
	this->raiseStat(statToUpgrade - 1);
}

void Player::raiseStat(int statToRaise)
{
	this->currStats[statToRaise]++;
}

Player::~Player()
{
}