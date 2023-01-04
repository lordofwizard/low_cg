#include <graphics.h>
#include <iostream>
int x1, y1, x2, y2;
void input() {
    std::cout << "Input from user type all the co-ordinates x1 y1 x2 y2 in this order respectively > " << std::endl << "DO NOT FUCK WITH US \n";
    std::cin >> x1 >> y1 >> x2 >> y2;
}
void dda_line() {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int len = 0;
    if (dx > dy)
        len = dx;
    else
        len = dy;
    dx = (dx) / len;
    dy = (dy) / len;
    int x = x1 + 0.5 * dx;
    int y = y1 + 0.5 * dy;
    putpixel(x, y, WHITE);
    for (int i = 0; i <= len; i++) {
        x = x + dx;
        y = y + dy;
        putpixel(x, y, WHITE);
        delay(100);
    }
}
int main() {
    int gd = DETECT, gm;
    input();
    initgraph(&gd, &gm, NULL);
    dda_line();
    closegraph();
}