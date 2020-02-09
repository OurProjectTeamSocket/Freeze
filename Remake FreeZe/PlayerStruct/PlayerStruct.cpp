//
//  PlayerStruct.cpp
//  Remake FreeZe
//
//  Created by Emil Panecki on 28/01/2020.
//  Copyright © 2020 Emil Panecki. All rights reserved.
//

#include "PlayerStruct.hpp"

void PlayerStruct::Be(){
    
    if(Player_HP > 0){
        Movement();
    }
    
}

void PlayerStruct::Movement(){
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
        sprite.move(0, -Speed);
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
        sprite.move(0, Speed);
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        sprite.move(-Speed, 0);
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
        sprite.move(Speed, 0);
    }
    
}

sf::Sprite PlayerStruct::SpriteReturn(){
    return sprite;
}

void PlayerStruct::SetPlayer(){
    
    texture.loadFromFile( resourcePath() + "FreeZe-Player.png" );
    sprite.setTexture(texture);
    
    sprite.setPosition(0, 0);
    sprite.setOrigin(800, 800);
    sprite.scale(0.082, 0.082);
    
}
