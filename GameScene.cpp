//
// Created by admin on 2023/6/7.
//

#include "GameScene.h"

void GameScene::run() {
    //双缓冲绘图
    BeginBatchDraw();
    cleardevice();
    snake.draw();
    food.draw();
    EndBatchDraw();

    //移动蛇，改动蛇坐标
    snake.bodyMove();
    //改变蛇的移动方向 获取键盘按键
    ExMessage msg{};
    while(peekmessage(&msg,EX_KEY)){
        onMsg(msg);
    }
}

void GameScene::onMsg(const ExMessage &msg) {
    //键盘消息
    if (msg.message == WM_KEYDOWN){
        switch (msg.vkcode) {
            case VK_UP:
                if (snake.showDir()!=VK_DOWN)
                    snake.setDir(VK_UP);
                break;
            case VK_DOWN:
                if (snake.showDir()!=VK_UP)
                    snake.setDir(VK_DOWN);
                break;
            case VK_LEFT:
                if (snake.showDir()!=VK_RIGHT)
                    snake.setDir(VK_LEFT);
                break;
            case VK_RIGHT:
                if (snake.showDir()!=VK_LEFT)
                    snake.setDir(VK_RIGHT);
                break;
        }
    }
}

bool GameScene::snakeTouch() {
    if (snake.touchFood(food)){
        //加分
        grade += 10;
        //蛇生长
        snake.grow();
        //重新生成新的食物
        food.changeFood();
    }
    if (snake.biteSelf()){
        return true;
    }
}
