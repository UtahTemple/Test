#pragma once
#include "FRooms.h"

FRooms::FRooms() { return; } //constructor

Int32 FRooms::GetNumRooms(void) const { return _Rooms.size(); }

bool FRooms::CreateRoom()
{
	bool IsDone = false;
	FRoomProperties Room = PromptForRoom("For Future Implementation");
	if (ValidateRoom(Room))
	{
		FRoom RoomObj;
		RoomObj.SetProperties("ROOMID"+itos(_Rooms.size()+1),Room.Height,Room.Width,Room.Desc);
		_Rooms.push_back(RoomObj);
		IsDone = true;
	}

	return IsDone;
}

void FRooms::WriteRoomFile()
{
	FRoomProperties MyRoomProps;
	RoomFile.open(FILEPATH, std::ios::out | std::ios::trunc);
	if (RoomFile.is_open())
	{
		RoomFile << "[Description of Rooms]\n";
		for (auto MyRoom : _Rooms)
		{
			MyRoomProps = MyRoom.GetProperties();
			RoomFile << "ROOM ID: ";
			RoomFile << MyRoomProps.ID << "\n";
			RoomFile << "ROOM DESC: ";
			RoomFile << MyRoomProps.Desc << "\n";
			RoomFile << "ROOM HEIGHT: ";
			RoomFile << MyRoomProps.Height << "\n";
			RoomFile << "ROOM WIDTH: ";
			RoomFile << MyRoomProps.Width << "\n";
		}
		RoomFile.close();
	}
	else std::cout << "Unable to open file";
	return;
}
;

FRoomProperties FRooms::PromptForRoom(FString msg)
{
	FRoomProperties RoomProp;
	FString Response = "";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "Adding a new room:\n\nPlease enter a room description: ";
	std::getline(std::cin, Response);
	RoomProp.Desc = Response;
	std::cout << "Room Height: (1-20): ";
	std::getline(std::cin, Response);
	RoomProp.Height = std::stoi(Response);
	std::cout << "Room Width: (1-20): ";
	std::getline(std::cin, Response);
	RoomProp.Width = std::stoi(Response);
	return RoomProp;
}

bool FRooms::ValidateRoom(FRoomProperties Room)
{
	//TODO Validate room dimensions and data
	return true;
}

std::string FRooms::itos(Int32 i)
{
	std::stringstream s;
	s << i;
	return s.str();
}
