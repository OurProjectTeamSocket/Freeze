//
//  MapGeneratorClass.cpp
//  Remake FreeZe
//
//  Created by Emil Panecki on 28/01/2020.
//  Copyright © 2020 Emil Panecki. All rights reserved.
//

#include "MapGeneratorClass.hpp"

void MapGenerator::Generator(){
    
    float x = 0;
    float y = 0;
    
    for (int i = 0; i <= 360; i++) {
        Trees.push_back(new sf::Sprite(Tree, sf::IntRect(0, 0, 1500, 1500)));
        Trees[i]->setPosition(rand() % 3200, rand() % 3200);
        Trees[i]->setOrigin(16, 16);
        Trees[i]->setScale(1.4, 1.4);
        
    }
    
    for (int i = 0; i <= 182; i++) {
        Stones.push_back(new sf::Sprite(Stone, sf::IntRect(0, 0, 1500, 1500)));
        Stones[i]->setPosition(rand() % 3200, rand() % 3200);
        Stones[i]->setOrigin(16, 16);
        
    }
    
    for (int i = 0; i <= 23136; i++) {
        Subsoil.push_back(new sf::Sprite(SubsoilTxT[0], sf::IntRect(0, 0, 1500, 1500)));
        
        Subsoil[i]->setPosition(x += 1500, y);
        
        if(x > 3200){
            x = 0;
            y += 1500;
        };
        
        /*switch (int SR = rand()%3) {
            case 0:
                Subsoil[i]->setTexture();
                break;
                
            case 1:
                Subsoil[i]->setTexture();
                break;
                
            case 2:
                Subsoil[i]->setTexture();
                break;
                
            case 3:
                Subsoil[i]->setTexture();
                break;
                
            default:
                break;
        }*/
        
        switch (int SR = rand()%2) {
            case 0:
                Subsoil[i]->setRotation(0);
                break;
                
            case 1:
                Subsoil[i]->setRotation(90);
                break;
                
            case 2:
                Subsoil[i]->setRotation(180);
                break;
                
            default:
                break;
        }
        Subsoil[i]->setOrigin(1500, 1500);
    
    }
}

void MapGenerator::SetTextures(){
    
    SubsoilTxT[0].loadFromFile( resourcePath() + "IMG_0956.PNG" ); // Winter
    SubsoilTxT[1].loadFromFile( resourcePath() + "IMG_0957.PNG" ); // Spring
    SubsoilTxT[2].loadFromFile( resourcePath() + "IMG_0954.PNG" ); // Summer
    SubsoilTxT[3].loadFromFile( resourcePath() + "IMG_0955.PNG" ); // Autumn
    
    Tree.loadFromFile( resourcePath() + "Tree" );
    
    Stone.loadFromFile( resourcePath() + "Stone" );
    
}
