//
// Created by admin on 2023/6/7.
//

#include "GameScene.h"

void GameScene::run() {
    //双缓冲绘图
    BeginBatchDraw();
    cleardevice();
    snake.draw();
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
        snake.setDir(msg.vkcode);   //vkcode = virtual key code虚拟键码
    }
}
