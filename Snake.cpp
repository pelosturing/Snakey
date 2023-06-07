//
// Created by admin on 2023/6/7.
//

#include "Snake.h"


void Snake::bodyMove() {
    //蛇头
    switch (s_dir) {
        case VK_UP:
            nodes[0].moveBy(0,-10);
            break;
        case VK_DOWN:
            nodes[0].moveBy(0,10);
            break;
        case VK_LEFT:
            nodes[0].moveBy(-10,0);
            break;
        case VK_RIGHT:
            nodes[0].moveBy(10,0);
            break;
        default:
            break;
    }
}
