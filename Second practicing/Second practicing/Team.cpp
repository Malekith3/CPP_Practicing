#include "Team.h"
#include <iostream>

const char* Team::errorTranslation[2] = { "Not enough players", " Succed" };

void Team::initTeam( std::string nameOfTeam )
{
	this->nameOfTeam = nameOfTeam;
	this->numOfPlayers = 0;
	
}

Team::eError  Team::addPlayer(std::string name , int date)
{
	if (this->numOfPlayers >= MAX_NUMBER_OF_PLAYER)
		return NotInEnoughPlayers;
	this->player[this->numOfPlayers] = new Player;
	this->player[this->numOfPlayers]->initPlayer( name , date);
	++this->numOfPlayers;
	
	return Succed;
}

void Team::printTeam(bool printWithPlayers)
{
	std::cout << "The name of the team : " << this->nameOfTeam << "Number of active players in team : " << this->numOfPlayers << std::endl;
	if(printWithPlayers)
	{
		
		for (int i = 0; i < this->numOfPlayers; ++i)
		{
			this->player[i]->printPlayer();
		}
	}
}

void Team::freeTeam()
{
	delete []this->player;
	delete this;
}

 void Team::translateError(enum  eError error)
{
	std::cout << " Log [INFO] "<< errorTranslation[error] << std::endl;
	
}
