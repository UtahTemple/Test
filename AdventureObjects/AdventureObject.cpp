#include "AdventureObject.h"



AdventureObject::AdventureObject()
{
	SetName("Adventure Object Name");
	SetDesc("You should never see this.  If you do, the programmer has not initialized the AdventureObject properly.  This is a defect.");
	SetWorth(0);
	SetLifePct(100.00);
	return;
}


AdventureObject::~AdventureObject()
{

}

void AdventureObject::SetName(FString setName) { Name = setName; return; } //Sets the name of the AdventureObject
FString AdventureObject::GetName() { return Name; } //Returns the name of the AdventureObject
void AdventureObject::SetDesc(FString setDesc) { Desc = setDesc; return;} //Sets the description of the AdentureObject
FString AdventureObject::GetDesc() { return Desc; } //Returns the description of the AdventureObject
void AdventureObject::SetWorth(Int32 setWorth) { Worth = setWorth; return; } //Sets the monetary value of the AdventureObject
Int32 AdventureObject::GetWorth() { return Worth; } //Returns the monetary value of the AdventureObject
void AdventureObject::SetLifePct(float setPctLeft) { LifePct = setPctLeft; return; } //Sets the percentage of life remaining on the AdventureObject
float AdventureObject::GetLifePct() { return LifePct; } //Returns the amount of life remaining on the AdventureObject