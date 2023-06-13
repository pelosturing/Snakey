//
// Created by admin on 2023/6/8.
//

#include "Food.h"

void Food::draw() const {
    setfillcolor(GREEN);
    solidellipse(m_x,m_y,m_x+20,m_y+20);
}

void Food::changeFood() {
    m_x = (rand()%16+2)*20;
    m_y = (rand()%16+2)*20;
}
