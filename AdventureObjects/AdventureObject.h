#pragma once
#include <string>

using FString = std::string;
using Int32 = int;

class AdventureObject
{
public:
	AdventureObject();
	~AdventureObject();

	void SetName(FString setName); //Sets the name of the AdventureObject
	FString GetName(); //Returns the name of the AdventureObject
	void SetDesc(FString setDesc); //Sets the description of the AdentureObject
	FString GetDesc(void); //Returns the description of the AdventureObject
	void SetWorth(Int32 setWorth); //Sets the monetary value of the AdventureObject
	Int32 GetWorth(void); //Returns the monetary value of the AdventureObject
	void SetLifePct(float setPctLeft); //Sets the percentage of life remaining on the AdventureObject
	float GetLifePct(void); //Returns the amount of life remaining on the AdventureObject


private: 
	FString Name;
	FString Desc;
	Int32 Worth;
	float LifePct;
	
};

