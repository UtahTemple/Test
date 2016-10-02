#include "AdventureObject.h"
#include <iostream>
#include <string>
#include <iomanip>
// Test the AdventureObject objects to see if they work...

using FString = std::string;

bool TestAdventureObject(AdventureObject inAObject);

int main()
{
	bool bAllGood = true;
	std::cout << "Testing base AdventureObject: Instantiating...";
	AdventureObject AObject;
	std::cout << "OK!\n";
	bAllGood = TestAdventureObject(AObject);
	if (bAllGood)
	{
		std::cout << "AdventureObject:  ALL PASSED!\n\n\n";
	}
	else
		return 1; // end the program.  1 = failure.
	
	return 0;



}

bool TestAdventureObject(AdventureObject inAObject)
{
	bool bWorks = true;
	std::cout << std::setprecision(2);
	std::cout << "     Setting Name...";
	inAObject.SetName("TestName");
	if (inAObject.GetName() == "TestName") std::cout << "OK! (" << inAObject.GetName() << ")\n"; else
	{
		bWorks = false;
		std::cout << "FAIL!\n";
	}
	std::cout << "     Setting Description..."; 
	inAObject.SetDesc("TestDesc");
	if (inAObject.GetDesc() == "TestDesc") std::cout << "OK! (" << inAObject.GetDesc() << ")\n"; else
	{
		std::cout << "FAIL!\n";
		bWorks = false;
	}
	std::cout << "     Setting Object Worth...";
	inAObject.SetWorth(100);
	if (inAObject.GetWorth() == 100) std::cout << "OK! (" << inAObject.GetWorth() << ")\n"; else
	{
		std::cout << "FAIL!\n";
		bWorks = false;
	}
	std::cout << "     Setting Object Percentage of life remaining...";
	float test = .92;
	inAObject.SetLifePct(test);
	if (inAObject.GetLifePct() == test) std::cout << "OK! (" << inAObject.GetLifePct() << ")\n"; else
	{
		std::cout << "FAIL!\n";
		bWorks = false;
	}
	return(bWorks);
}