//
// Created by admin on 2023/6/8.
//

#include "Food.h"

void Food::draw() const {
    setfillcolor(m_color);
    solidellipse(m_x,m_y,m_x+10,m_y+10);
}

void Food::changeFood() {
    m_x = rand()%64*10;
    m_y = rand()%48*10;
}
