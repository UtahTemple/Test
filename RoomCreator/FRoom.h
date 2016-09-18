#pragma once
#include <string>

using FString = std::string;
using Int32 = int;

struct FRoomProperties
{
	FString ID = "";
	FString Desc = "Uninitialized Room";
	Int32 Height = 0;
	Int32 Width = 0;
};

enum class EErrorStatus
{
	OKAY,
	Room_Name_In_Use,
	Room_Height_Too_Big,
	Room_Height_Too_Small,
	Room_Width_Too_Big,
	Room_Width_Too_Small,
	File_Save_Error_Bad_Filename,
	File_Save_Error_Insufficient_Space,
	File_Save_Error_Other
};

class FRoom
{
public:
	FRoom();
	EErrorStatus SetProperties(FString RoomID, Int32 Height, Int32 Width, FString Desc);
	FRoomProperties GetProperties() const;
	
private:
	FRoomProperties Room;
};

