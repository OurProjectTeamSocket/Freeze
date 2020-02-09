//
//  WindowStruct.cpp
//  Remake FreeZe
//
//  Created by Emil Panecki on 28/01/2020.
//  Copyright © 2020 Emil Panecki. All rights reserved.
//

#include "WindowStruct.hpp"

void WindowStruct::CreateWindow(){
    
    window = new sf::RenderWindow(sf::VideoMode(1280, 720), "Re:FreeZe");

    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "icon.png")) {
        return EXIT_FAILURE;
    }
    window->setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    
    Player.SetPlayer();
    
    while (window->isOpen())
    {
        
        sf::Event event;
        while (window->pollEvent(event))
        {
            
            if (event.type == sf::Event::Closed) {
                window->close();
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window->close();
            }
        }
        
        Player.Be();
        
        window->clear();
        DrawObject(Player.SpriteReturn());
        window->display();
    }

    return EXIT_SUCCESS;
    
}

void WindowStruct::DrawObject(sf::Sprite sprite){
    window->draw(sprite);
}
