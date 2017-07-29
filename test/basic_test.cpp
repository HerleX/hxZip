#include <lib/hxZipLibrary.hpp>
#include <iostream>

int main(int argc, char* argv[])
{
	// Load the library
	hxZip::hxZipLibrary zipLib;
	zipLib.load();
	std::string input = "";
	while(input != "0")
	{
		std::cin >> input;
	}
	zipLib.release();
	return 0;
}
