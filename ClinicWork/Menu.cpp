#include "Header.h"
#include "Menu.h"

Menu::Menu(std::string appName, std::vector<std::string> menuItem)
    : appName(appName), menuItem(menuItem)
{
}

void Menu::displayAppName() const
{
    system("cls");
    std::cout << "\n\t ============================";
    std::cout << "\n\t " << appName;
    std::cout << "\n\t ============================";
}

void Menu::displayMenuItems() const
{
    for (int i = 0; i < menuItem.size(); i++) {
        std::cout << "\n\t  " << i + 1;
        std::cout << " - " << menuItem[i];
    }
    std::cout << "\n\t ============================";
    std::cout << std::endl;
}

int Menu::choiceProgram()
{
    int choice;
    std::cout << "\n> Make a choice: ";
    std::cin >> choice;
    return choice;
}

bool Menu::allowProgram()
{
    std::string allow;
    std::cout << "\n> Continue? (y/n): ";
    std::cin >> allow;
    return (allow == "y" || allow == "Y");
}
