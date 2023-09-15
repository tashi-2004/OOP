//i222041
//Tashfeen Abbasi
//BS_DS_D

#include <iostream>
using namespace std;
const int MAX_SIZE = 12;
bool mazeSolver(char maze[][MAX_SIZE], int row, int col) {
    if (row == 0 && col == 10) {
        return true;
    }
    if (maze[row][col] == '#' || maze[row][col] == 'X') {
        return false;
    }
    maze[row][col] = 'X';
    if (mazeSolver(maze, row - 1, col) || mazeSolver(maze, row + 1, col) || mazeSolver(maze, row, col - 1) || mazeSolver(maze, row, col + 1)) 
    {
        return true;
    }
    maze[row][col] = '.';
    return false;
}

int main() {
    char mazeData[MAX_SIZE][MAX_SIZE] =
    {
       {'#','#','#','#','#','#','#','#','#','#','#','#'},
       {'#','.','.','.','#','.','.','.','.','.','.','#'},
       {'.','.','#','.','#','.','#','#','#','#','.','#'},
       {'#','#','#','.','#','.','.','.','.','#','.','#'},
       {'#','.','.','.','.','#','#','#','.','#','.','.'},
       {'#','#','#','#','.','#','.','#','.','#','.','#'},
       {'#','.','.','#','.','#','.','#','.','#','.','#'},
       {'#','#','.','#','.','#','.','#','.','#','.','#'},
       {'#','.','.','.','.','.','.','.','.','#','.','#'},
       {'#','#','#','#','#','#','.','#','#','#','.','#'},
       {'.','.','.','.','.','.','.','#','.','.','.','#'},
       {'#','#','#','#','#','#','#','#','#','#','#','#'}
    };
    if (mazeSolver(mazeData, 4, 11)) {
        cout << "Maze solved!" << endl;
    }
    else {
        cout << "Maze unsolvable." << endl;
    }
    return 0;
}
