//
// Created by admin on 2023/6/7.
//

#ifndef SNAKEY_SPRITE_H
#define SNAKEY_SPRITE_H

#include <easyx.h>

class Sprite {
protected:
    COLORREF m_color{RED};
    int m_x;
    int m_y;
public:
    Sprite():Sprite(0,0){}
    Sprite(int x, int y):m_x(x),m_y(y){}

    inline int locX() const{
        return m_x;
    }

    inline int locY() const{
        return m_y;
    }

    // 绘制
    virtual void draw() const;
    // 移动
    void moveBy(int dx, int dy);
    //碰撞检测
    bool isCollision(const Sprite& other) const;

};


#endif //SNAKEY_SPRITE_H
