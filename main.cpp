#include <conio.h>
#include <easyx.h>

#include "GameScene.h"


int main()
{
    //设置随机数种子
    srand(time(nullptr));
    initgraph(640, 480);	// 创建绘图窗口，大小为 640x480 像素
    GameScene scene;
    while (true){
        scene.run();
        Sleep(100);
    }


    _getch();				// 按任意键继续
    closegraph();			// 关闭绘图窗口
    return 0;
}

