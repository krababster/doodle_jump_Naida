#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Doodle
{
	int x = 250, y = 0;
	sf::Texture texture;
	sf::Image image;
	sf::Sprite sprite;

public:
	Doodle(int x, int y)
	{
		this->texture.loadFromFile("doodle.png");
		this->sprite.setTexture(texture);

	}
	sf::Sprite getSprite()
	{
		return this->sprite;
	}
	void moveRight()
	{
		this->x++;
		this->y++;
	}
	void moveLeft()
	{
		this->x--;
		this->y++;
	}
};

