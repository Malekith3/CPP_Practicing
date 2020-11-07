#include "Player.h"
#include  <iostream>
using namespace std;


bool Player::setDate(int date)
{
	if (date >=1980 && date <=2002)
	{
		this->date = date;
		return true;
	}
	return false;
}

void Player::setName(std::string name)
{
	this->name = name;
}

int Player::getDate()
{
	return Player::date;
}

std::string Player::getName()
{
	return Player::name;
}

bool Player::inputPlayer()
{
	int date;
	std::string name;

	cout << "Please insert Name of player : ";
	cin >> name;
	
	cout << "Please insert birth year ";
	cin >> date;
	
	setName(name);
	return setDate(date);
}

void Player::initPlayer( std::string& name , int date)
{
	
	this->name = name;
	this->date = date;
	if (!setDate(date))
	{
		this->date = 1980;
	}
}

void Player::printPlayer()
{
	cout << "Name of player : " << this->name <<endl << "Date of the player : "<< this->date << endl;
}