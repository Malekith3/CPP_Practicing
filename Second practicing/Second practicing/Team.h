#ifndef __TEAM_H
#define __TEAM_H
#include "Player.h"
const int MAX_NUMBER_OF_PLAYER = 11;
class Team
{
	
	
	Player* player[MAX_NUMBER_OF_PLAYER];
	std::string nameOfTeam;
	int numOfPlayers;
	static const char* errorTranslation[2];
	
public:
	enum  eError  { NotInEnoughPlayers , Succed };
	void initTeam(std::string nameOfTeam = "Who Carse ?");
	eError addPlayer(std::string name, int date) ;
	void printTeam(bool printWithPlayers = false);
	void freeTeam();
	static void translateError(enum  eError error);
	
};
#endif
