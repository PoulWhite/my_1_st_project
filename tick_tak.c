#include <stdio.h>

char GameFeeld[3][3]{{'1','2','3'},{'4','5','6'},{'7','8','9'}};

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

int main(){
    FillaAll('.');
    DrawGame();
}
