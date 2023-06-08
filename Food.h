//
// Created by admin on 2023/6/8.
//

#ifndef SNAKEY_FOOD_H
#define SNAKEY_FOOD_H

#include "Sprite.h"
#include <ctime>

class Food: public Sprite{
public:
    Food():Sprite(10,10) {
        //随机生成
        m_x = rand()%64*10;
        m_y = rand()%48*10;
    }
    void draw() const override;

};


#endif //SNAKEY_FOOD_H
