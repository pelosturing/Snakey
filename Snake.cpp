//
// Created by admin on 2023/6/7.
//

#include "Snake.h"


void Snake::bodyMove() {
    //蛇身
    for (size_t i = nodes.size()-1; i>0; -- i) {
        nodes[i] = nodes[i-1];
    }
    //蛇头
    switch (s_dir) {
        case VK_UP:
            nodes[0].moveBy(0,-20);
            break;
        case VK_DOWN:
            nodes[0].moveBy(0,20);
            break;
        case VK_LEFT:
            nodes[0].moveBy(-20,0);
            break;
        case VK_RIGHT:
            nodes[0].moveBy(20,0);
            break;
        default:
            break;
    }
}


void Snake::setDir(int dir) {
    s_dir = dir;
}

void Snake::draw() const {
    for (const auto& item: nodes) {
        item.draw();
    }
}

bool Snake::touchFood(const Food &food) const {
    return nodes[0].isCollision(food);
}

bool Snake::biteSelforTouchWall() const {
    for (int i = 1; i < nodes.size(); ++ i) {
        if (nodes[0].isCollision(nodes[i])){
            return true;
        }
    }
    if (nodes[0].locX()<20 || nodes[0].locX()>=420 ||
        nodes[0].locY()<20 || nodes[0].locY()>=420)
        return true;
    return false;
}

void Snake::grow() {
    int new_x = nodes[nodes.size()-1].locX();
    int new_y = nodes[nodes.size()-1].locY();
    nodes.emplace_back(new_x,new_y);
}

