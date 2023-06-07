//
// Created by admin on 2023/6/7.
//

#ifndef SNAKEY_GAMESCENE_H
#define SNAKEY_GAMESCENE_H


#include "Snake.h"

class GameScene {
private:
    Snake snake{};
public:
    GameScene() = default;
    void run();
    void onMsg(const ExMessage& msg);   //响应消息：键盘 鼠标



};


#endif //SNAKEY_GAMESCENE_H
