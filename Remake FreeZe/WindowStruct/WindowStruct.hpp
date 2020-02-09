//
//  WindowStruct.hpp
//  Remake FreeZe
//
//  Created by Emil Panecki on 28/01/2020.
//  Copyright © 2020 Emil Panecki. All rights reserved.
//

#ifndef WindowStruct_hpp
#define WindowStruct_hpp

#include <SFML/Graphics.hpp>
#include "ResourcePath.hpp"
#include "PlayerStruct.hpp"
#include <stdio.h>

struct WindowStruct{
    
public:
    void CreateWindow();
    
    void DrawObject(sf::Sprite sprite);
    
private:
    sf::RenderWindow *window;
    
    PlayerStruct Player;
    
};

#endif /* WindowStruct_hpp */
