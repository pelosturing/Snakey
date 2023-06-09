//
// Created by admin on 2023/6/7.
//

#ifndef SNAKEY_GAMESCENE_H
#define SNAKEY_GAMESCENE_H


#include "Snake.h"
#include "Food.h"

class GameScene {
private:
    Snake snake{};
    Food food;
    int grade=0;
public:
    GameScene() = default;
    void run();
    void onMsg(const ExMessage& msg);   //响应消息：键盘 鼠标
    //判断吃到食物或咬到自己
    bool snakeTouch();
    inline int showGrade() const{
        return grade;
    }




};


#endif //SNAKEY_GAMESCENE_H
