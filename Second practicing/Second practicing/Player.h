#ifndef __PLAYER_H
#define __PLAYER_H
#include <string>

class Player
{
	std::string name;
	int date;
public:
	bool setDate(int date = 1980);
	void setName(std::string name = "No name");
	int getDate();
	std::string getName();
	bool inputPlayer();
	void initPlayer(std::string& name , int date = 1980);
	void printPlayer();
};
#endif
