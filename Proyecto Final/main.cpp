#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cmath>

using namespace std;

const int SCREEN_WIDTH = 40;
const int SCREEN_HEIGHT = 20;

char screen[SCREEN_HEIGHT][SCREEN_WIDTH];
int cursorX = SCREEN_WIDTH / 2;
int cursorY = SCREEN_HEIGHT / 2;

void drawScreen() {
    system("cls");
    for (int y = 0; y < SCREEN_HEIGHT; y++) {
        for (int x = 0; x < SCREEN_WIDTH; x++) {
            cout << screen[y][x];
        }
        cout << endl;
    }
}

void moveCursor(int dx, int dy) {
    int newX = cursorX + dx;
    int newY = cursorY + dy;
    if (newX < 0) newX = SCREEN_WIDTH - 1;
    if (newX >= SCREEN_WIDTH) newX = 0;
    if (newY < 0) newY = SCREEN_HEIGHT - 1;
    if (newY >= SCREEN_HEIGHT) newY = 0;
    cursorX = newX;
    cursorY = newY;
}

class Shape {
public:
    virtual void draw() = 0;
    virtual void erase() = 0;
};

class Square : public Shape {
public:
    void draw() override {
        for (int y = cursorY; y < cursorY + 4; y++) {
            screen[y % SCREEN_HEIGHT][cursorX] = '+';
            screen[y % SCREEN_HEIGHT][(cursorX + 3) % SCREEN_WIDTH] = '+';
        }
        for (int x = cursorX + 1; x < cursorX + 3; x++) {
            screen[cursorY][x % SCREEN_WIDTH] = '+';
            screen[(cursorY + 3) % SCREEN_HEIGHT][x % SCREEN_WIDTH] = '+';
        }
    }

    void erase() override {
        for (int y = cursorY; y < cursorY + 4; y++) {
            screen[y % SCREEN_HEIGHT][cursorX] = ' ';
            screen[y % SCREEN_HEIGHT][(cursorX + 3) % SCREEN_WIDTH] = ' ';
        }
        for (int x = cursorX + 1; x < cursorX + 3; x++) {
            screen[cursorY][x % SCREEN_WIDTH] = ' ';
            screen[(cursorY + 3) % SCREEN_HEIGHT][x % SCREEN_WIDTH] = ' ';
        }
    }
};

class Circle : public Shape {
public:
    void draw() override {
        int radius = 3;
        int centerX = cursorX + 2;
        int centerY = cursorY + 2;

        for (int y = cursorY; y < cursorY + 5; y++) {
            for (int x = cursorX; x < cursorX + 5; x++) {
                double distance = sqrt(pow(x - centerX, 2) + pow(y - centerY, 2));
                if (distance <= radius) {
                    screen[y % SCREEN_HEIGHT][x % SCREEN_WIDTH] = '+';
                }
            }
        }
    }

    void erase() override {
        for (int y = cursorY; y < cursorY + 5; y++) {
            for (int x = cursorX; x < cursorX + 5; x++) {
                screen[y % SCREEN_HEIGHT][x % SCREEN_WIDTH] = ' ';
            }
        }
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        screen[cursorY][cursorX + 2] = '+';
        screen[cursorY + 1][cursorX + 1] = '+';
        screen[cursorY + 1][cursorX + 3] = '+';
        screen[cursorY + 2][cursorX] = '+';
        screen[cursorY + 2][cursorX + 1] = '+';
        screen[cursorY + 2][cursorX + 2] = '+';
        screen[cursorY + 2][cursorX + 3] = '+';
        screen[cursorY + 2][cursorX + 4] = '+';
    }

    void erase() override {
        for (int y = cursorY; y < cursorY + 3; y++) {
            for (int x = cursorX; x < cursorX + 5; x++) {
                screen[y % SCREEN_HEIGHT][x % SCREEN_WIDTH] = ' ';
            }
        }
    }
};

int main() {
    for (int y = 0; y < SCREEN_HEIGHT; y++) {
        for (int x = 0; x < SCREEN_WIDTH; x++) {
            screen[y][x] = ' ';
        }
    }

    Square square;
    Circle circle;
    Triangle triangle;

    while (true) {
        if (_kbhit()) {
            char key = _getch();
            switch (key) {
                case 'w':
                    moveCursor(0, -1);
                    break;
                case 's':
                    moveCursor(0, 1);
                    break;
                case 'a':
                    moveCursor(-1, 0);
                    break;
                case 'd':
                    moveCursor(1, 0);
                    break;
                case 'f':
                    square.draw();
                    break;
                case 'e':
                    square.erase();
                    break;
                case 'c':
                    circle.draw();
                    break;
                case 'r':
                    circle.erase();
                    break;
                case 't':
                    triangle.draw();
                    break;
                case 'g':
                    triangle.erase();
                    break;
                case 'q':
                    return 0;
            }
        }

        screen[cursorY][cursorX] = '*';

        drawScreen();

        screen[cursorY][cursorX] = ' ';
    }

    return 0;
}
