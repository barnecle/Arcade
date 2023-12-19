#include <stdlib.h>
#include <stdio.h>
#include <conio.h> 
#include <iostream> 
#include <windows.h> 
using namespace std; 

struct Coord{
    int x, y;
};
struct Coord playerPos;
char playerGrid[60][60];
int actualGrid[60][60];
int sz;

/*Populate the playerGrid and actualGrid for game*/
void gameInit(){
    return;
}

/*Print out grid and player position*/
void gameRender(){
    return;
}

/*update playerPos and player grid with flags, numbers, etc.*/
void update(){
    return;
}

void 

int main(){
    string playerName;
    int dfc;
    cout << "Please enter your name: " ;
    cin >> playerName;
    cout << "Choose Difficulty Level\n
            1 - 20x20 grid\n
            2 - 40x40 grid\n
            3 - 60x60 grid\n
            Enter choice 1-3 (automatically set to 2): ";
    cin << dfc;
    switch(dfc){
        case 1:
            sz = 20;
            break;
        case 2:
            sz = 40;
            break;
        case 3:
            sz = 60;
            break;
        default:
            sz = 40;
            break;
    }
}