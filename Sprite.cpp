//
// Created by admin on 2023/6/7.
//

#include "Sprite.h"


void Sprite::draw() const {
    //设置填充颜色
    setfillcolor(m_color);
    //绘制矩形
    fillrectangle(m_x,m_y,m_x+20,m_y+20);
}

void Sprite::moveBy(int dx, int dy) {
    m_x += dx;
    m_y += dy;
}

bool Sprite::isCollision(const Sprite &other) const {
    return m_x == other.m_x && m_y == other.m_y;
}
