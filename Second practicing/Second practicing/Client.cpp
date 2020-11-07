#include "Team.h"

int main(int argc, char* argv[])
{
	/*
	Player player;
	bool tmp;
	player.initPlayer();
	player.printPlayer();
	do
	{
		tmp =  player.inputPlayer();
		
	}while (!tmp);
	
	player.printPlayer();
	*/
	Team team;
	team.initTeam("Space Pizdec");
	team.printTeam(true);
	team.translateError( team.addPlayer("Chack Pizdec", 1981));
	
	team.printTeam(true);
	
}



