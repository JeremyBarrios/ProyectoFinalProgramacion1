#include <iostream>
#include <conio.h>
#include <windows.h>

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

// Clase para el Cuadrado
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


int main() {

    for (int y = 0; y < SCREEN_HEIGHT; y++) {
        for (int x = 0; x < SCREEN_WIDTH; x++) {
            screen[y][x] = ' ';
        }
    }

    Square square;

    while (true) {

        screen[cursorY][cursorX] = '*';


        drawScreen();


        screen[cursorY][cursorX] = ' ';


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
            case 'f': // Tecla 'F' para dibujar un cuadrado
                square.draw();
                break;
            case 'e': // Tecla 'E' para borrar el cuadrado
                square.erase();
                break;
            case 'q': // Tecla 'Q' para salir del programa
                return 0;
        }
    }

    return 0;
}
