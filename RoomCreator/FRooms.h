#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "FRoom.h"

using FString = std::string;
using Int32 = int;
const FString FILEPATH = "C:\\users\\mtemple\\RoomBuilder\\Rooms.bin";

class FRooms
{
public:
	FRooms(); // constructor
	// TODO write get/set filename, eliminate the constant FILEPATH
	Int32 GetNumRooms(void) const;

	bool CreateRoom();
	void WriteRoomFile();

	// save rooms to file
	// read rooms from file

private:
	std::vector<FRoom> _Rooms;
	std::ofstream RoomFile;
	FRoomProperties PromptForRoom(FString msg);
	bool ValidateRoom(FRoomProperties Room);
	FString itos(Int32 i);
};