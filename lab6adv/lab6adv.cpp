#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{

	struct Client
	{
		std::string name;
		int price;
		int month;
		int futmonth;
		void save()
		{
			std::ofstream file("D:\ssss.txt");
			file << "Name :" << name << std::endl;
			file << "Prise :" << price << std::endl;
			file << "Month :" << month << std::endl;
			file << "Future Month :" << futmonth << std::endl;
		}
	};

	Client client
	{
		"sdgdgsdg",
		4,
		4,
		4
	};
	client.save();
	
}