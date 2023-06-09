#include <conio.h>
#include <easyx.h>
#include <iostream>

#include "GameScene.h"


int main()
{
    //设置随机数种子
    srand(time(nullptr));
    initgraph(660, 520);	// 创建绘图窗口，大小为 640x480 像素
    GameScene scene;
    while (true){
        scene.run();
        if (scene.snakeTouch()){
            std::cout<<"game over,your grade is"<<scene.showGrade()<<std::endl;
            break;
        }
        Sleep(100);
    }
    _getch();				// 按任意键继续
    closegraph();			// 关闭绘图窗口
    return 0;
}

