//
// Created by admin on 2023/6/7.
//

#ifndef SNAKEY_SNAKE_H
#define SNAKEY_SNAKE_H


#include <vector>
#include "Sprite.h"
#include "Food.h"

class Snake: public Sprite{
private:
    std::vector<Sprite> nodes;  //蛇身节点
    int s_dir{};    //蛇方向
public:
    Snake():Snake(0,0) {}
    Snake(int x, int y):Sprite(x,y),s_dir(VK_RIGHT){
        nodes.emplace_back(20,0);
        nodes.emplace_back(10,0);
        nodes.emplace_back(0,0);
    }

    void setDir(int dir);
    void draw() const override;
    void bodyMove();
    //食物碰撞 吃到食物
    bool touchFood(const Food& food) const;
    //身体碰撞 咬到自己
    bool biteSelf() const;
    //蛇的生长
    void grow();
};


#endif //SNAKEY_SNAKE_H
