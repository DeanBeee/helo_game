/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	void animation();
	void setupFontAndText();
	void setupSprite();

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	sf::Sprite m_heloSprite;//sprite for helocoptar
	sf::Texture m_heloTexture;//texture for helocoptar
	sf::Vector2f m_location{200.0f, 200.0f};//starting location for helo 
	
	int m_currentFrame = 0;//current frame 
	float m_frameCounter = 0.0f; // counter 
	float m_frameincrement = 0.25f; //increment


	bool m_exitGame; // control exiting game

};

#endif // !GAME_HPP

