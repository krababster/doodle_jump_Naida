#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Doodle.h"


class MainWindow : public sf::RenderWindow
{
	std::string name;
	sf::Texture texture;
	sf::Sprite sprite;
	Doodle* doodle;
public:
	MainWindow(int width, int heigth, std::string name) : sf::RenderWindow(sf::VideoMode(width, heigth), name)
	{
		if (!texture.loadFromFile("background.png"))
		{
			throw;
		}
		this->doodle = new Doodle(200,600);
	}

	void show()
	{
		while (this->isOpen())
		{
			sf::Event event;
			while (this->pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
				{
					this->close();
				}
			}
			this->clear(sf::Color::Red);
			texture.setRepeated(true);
			texture.loadFromFile("background.png");
			sf::Sprite sprite(texture);
			this->draw(sprite);
			this->draw(this->doodle->getSprite());
			this->display();
		}
	}
};

