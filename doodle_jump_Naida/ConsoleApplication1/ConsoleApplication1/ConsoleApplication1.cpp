#include <SFML/Graphics.hpp>
#include "MainWindow.h"

int main()
{
	MainWindow* window = new MainWindow(600, 800, "Doodle");
	window->show();

	delete window;
}