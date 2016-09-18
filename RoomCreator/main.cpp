#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include "FRooms.h"

using Int32 = int;
using FText = std::string;

bool AddAnother();

int main()
{
	//prompt for room file name
	//create file object
	//instantiate Room object
	//prompt for room properties
	//write room
	//repeat or quit

	//test
	FRooms Rooms;
	do
	{
		if (Rooms.CreateRoom())
			std::cout << "Room Created.\n";
		else
			std::cout << "Room creation failure.\n";
	} while (AddAnother());

	std::cout << "Number of objects in Rooms: " << Rooms.GetNumRooms() << "\n";
	Rooms.WriteRoomFile();
	return 0;
}

bool AddAnother()
{
	std::cout << "Would you like to add another room? (y/n) ";
	FString Response = "";
	std::getline(std::cin, Response);
	return ((Response[0] == 'y') || (Response[0] == 'Y'));

	return false;
}
