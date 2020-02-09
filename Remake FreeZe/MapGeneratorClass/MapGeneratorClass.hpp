//
//  MapGeneratorClass.hpp
//  Remake FreeZe
//
//  Created by Emil Panecki on 28/01/2020.
//  Copyright © 2020 Emil Panecki. All rights reserved.
//

#ifndef MapGeneratorClass_hpp
#define MapGeneratorClass_hpp

#include <SFML/Graphics.hpp>
#include "ResourcePath.hpp"
#include <stdio.h>

class MapGenerator{
    
public:
    void Generator();
    
    void ReturnSprites();
    
    void SetTextures();
    
private:
    
    std::vector<sf::Sprite*> Trees;
    std::vector<sf::Sprite*> Stones;
    std::vector<sf::Sprite*> Subsoil;
    
    sf::Texture Tree;
    sf::Texture Stone;
    sf::Texture SubsoilTxT[4];
    
};

#endif /* MapGeneratorClass_hpp */
