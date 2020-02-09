//
//  PlayerStruct.hpp
//  Remake FreeZe
//
//  Created by Emil Panecki on 28/01/2020.
//  Copyright © 2020 Emil Panecki. All rights reserved.
//

#ifndef PlayerStruct_hpp
#define PlayerStruct_hpp

#include <SFML/Graphics.hpp>
#include "ResourcePath.hpp"
#include <stdio.h>

class PlayerStruct{
    
public:
    void Be();
    
    void Movement();
    
    sf::Sprite SpriteReturn();
    
    void SetPlayer();
    
private:
    
    sf::Texture texture;
    
    sf::Sprite sprite;
    
    int Player_HP = 100;
    
    float Speed = 0.5f;
    
    int Damage = 2;
    
};

#endif /* PlayerStruct_hpp */
