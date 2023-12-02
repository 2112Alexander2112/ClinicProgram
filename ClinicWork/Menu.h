#pragma once
class Menu
{
	std::string appName;
	std::vector<std::string> menuItem;
public:
	Menu(std::string appName, std::vector <std::string> menuItem);
	void displayAppName() const;
	void displayMenuItems() const;
	int choiceProgram();
	bool allowProgram();
};

