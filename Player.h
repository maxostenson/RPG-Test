#ifndef PLAYER_H
#define PLAYER_h

#include "Item.h"
#include "Inventory.h"

#include <iostream>

class Player
{
public:
	//Function: Player()
	//Parameters: none
	//Return: Object of Player type with default values
	//Purpose: Create a new player
	//Last edited: 23 March, 2019
	Player(void);

	//Function: gainHealth()
	//Parameters: Integer representing how much health to add to the player
	//Return: None
	//Purpose: Adds specified amount of health to the player, not exceeding their max health
	//Last edited: 23 March, 2019
	void gainHealth(int);

	//Function: loseHealth()
	//Parameters: Integer representing how much health to take away from the player
	//Return: Integer being either 0 (player survived) or 1 (player died)
	//Purpose: Take health away from the player, and check whether that killed the player
	//Last edited: 23 March, 2019
	int loseHealth(int);

	//Function: addItem()
	//Parameters: Item representing the Item being added to the players inventory
	//Return: An integer either 0 (item was added) or 1 (inventory full)
	//Purpose: Give the player an Item and check if they can store it
	//Last edited: 23 March, 2019
	int addItem(Item);

	//Function: removeItem()
	//Parameters: Item to remove
	//Return: Int indicating if the removal was successful (0 if successful, 1 if item not found)
	//Purpose: Remove an item from the players inventory
	//Last edited: 23 March, 2019
	int removeItem(Item);

	//Function: addExperience()
	//Parameters: Int representing how much experience to add
	//Return: None
	//Purpose: Add experience to the player, and level them up if needed
	//Last edited: 23 March, 2019
	void addExperience(int);

	//Function: levelUp()
	//Parameters: None
	//Return: None
	//Purpose: Level up the character
	//Last edited: 23 March, 2019
	void levelUp(void);

	//Function: raiseStat()
	//Parameters: Integer representing which stat to be upgraded (0 is damage, 1 is health, and 2 is carry weight)
	//Return: None
	//Purpose: Upgrade a user stat
	//Last edited: 23 March, 2019
	void raiseStat(int);

	//Function: ~Player()
	//Parameters: None
	//Return: None
	//Purpose: Clean up any Player objects that go out of scope
	//Last edited: 23 March, 2019
	~Player(void);
private:
	static const int NUM_OF_STATS = 3;
	static const int LEVEL_EXP_INCREASE_PERCENT = .25;
	static const int DEFAULT_HEALTH = 10;
	static const int DEFAULT_EXP_NEEDED = 10;
	static const int DAMAGE_MENU_SLOT = 1;
	static const int HEALTH_MENU_SLOT = 2;
	static const int CARRY_MENU_SLOT = 3;

	double currHealth;
	double maxHealth;
	double currExperience;
	double nextLevExperience;
	int currLevel;
	int currStats[NUM_OF_STATS];
	Inventory playerInventory;
};

#endif