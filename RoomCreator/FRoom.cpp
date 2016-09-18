#include "FRoom.h"
#include <map>

FRoom::FRoom() { return; } // Constructor

EErrorStatus FRoom::SetProperties(FString RoomID, Int32 Height, Int32 Width, FString Desc)
{
	//TODO Do some validation to make sure room dimensions are okay
	Room.ID = RoomID;
	Room.Height = Height;
	Room.Width = Width;
	Room.Desc = Desc;
	return EErrorStatus::OKAY;
}

FRoomProperties FRoom::GetProperties() const
{
	return Room;
}

