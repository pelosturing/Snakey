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
        changeFood();
    }
    void draw() const override;
    //改变食物坐标，生成新的食物
    void changeFood();

};


#endif //SNAKEY_FOOD_H
