#include <stdio.h>

char GameFeeld[3][3]{{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char Buffer[64]{};

void FillaAll(char symbol){
    for(int y = 0; y<3; y++){
        for(int x = 0; x<3; x++)
            GameFeeld[y][x] = symbol;
    }
}
void DrawGame(){
    printf("|/|A|B|C|\n");
    for(int y = 0; y < 3; y++){
        printf("|%d|", y+1);
        for(int x = 0; x<3; x++){
            printf("%c ", GameFeeld[y][x]);
        }
        printf("\n");
    }
}

int GetPointX(){
    char X = 0;
    scanf("%c", &X);
    int x = 0;
    if(X == 'A' || X == 'a') x = 0;
    else if(X == 'B' || X == 'b') x = 1;
    else if(X == 'C' || X == 'c') x = 2;
    else x = 5;
    return x;
}

int GetPointY(){
    char Y = 0;
    scanf("%c", &Y);
    int y = 0;
    if(Y == '1') y = 0;
    else if(Y == '2') y = 1;
    else if(Y == '3') y = 2;
    else y = 5;
    return y;
}
void SetX(int X, int Y){
    GameFeeld[Y][X] = 'X';
}

void Set0(int X, int Y){
    GameFeeld[Y][X] = '0';
}

int main(){
   /* int X = GetPointX();
    int Y = GetPointY();
    printf("%d %d\n", X, Y); */
    FillaAll('.');
    DrawGame();
    printf("________\n\n");
    Set0(0 , 1);
    SetX(1, 0);
    DrawGame();

    return 0;
}
