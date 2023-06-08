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
    int grade;
public:
    GameScene() = default;
    void run();
    void onMsg(const ExMessage& msg);   //响应消息：键盘 鼠标
    //判断吃到食物或咬到自己
    void snakeTouch(){
        if (snake.touchFood(food)){
            //加分
            grade += 10;
            //蛇生长
            snake.grow();
            //重新生成新的食物
        }
    }
    //判断咬到自己


};


#endif //SNAKEY_GAMESCENE_H
