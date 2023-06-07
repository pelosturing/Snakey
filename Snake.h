//
// Created by admin on 2023/6/7.
//

#ifndef SNAKEY_SNAKE_H
#define SNAKEY_SNAKE_H


#include <vector>
#include "Sprite.h"

class Snake: public Sprite{
private:
    std::vector<Sprite> nodes;  //蛇身节点
    int s_dir{};    //蛇方向
public:
    Snake():Snake(0,0) {}
    Snake(int x, int y):Sprite(x,y) {
        nodes.emplace_back(20,0);
        nodes.emplace_back(10,0);
        nodes.emplace_back(0,0);
    }

    void setDir(int dir){
        s_dir = dir;
    }

    void draw() const override{
        for (const auto& item: nodes) {
            item.draw();
        }
    }

    void bodyMove();
};


#endif //SNAKEY_SNAKE_H
