#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

class AsciiConvert {
public:
	AsciiConvert(const char* source, const char* result);

	~AsciiConvert();
	
	void converter(bool consout = false);

	float brightness(int R, int G, int B);

	void image_resize(sf::Image& img, sf::Image& newImg);

private:
	sf::Image img;
	std::ofstream txtresult;
};