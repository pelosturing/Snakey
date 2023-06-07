//
// Created by admin on 2023/6/7.
//

#ifndef SNAKEY_SPRITE_H
#define SNAKEY_SPRITE_H

#include <easyx.h>

class Sprite {
private:
    int m_x;
    int m_y;            //坐标
    COLORREF m_color{RED};   //颜色
public:
    Sprite():Sprite(0,0){}
    Sprite(int x, int y):m_x(x),m_y(y){}

    virtual void draw() const{
        //设置填充颜色
        setfillcolor(m_color);
        //绘制矩形
        fillrectangle(m_x,m_y,m_x+10,m_y+10);
    }

    void moveBy(int dx, int dy){
        m_x += dx;
        m_y += dy;
    }
};


#endif //SNAKEY_SPRITE_H
