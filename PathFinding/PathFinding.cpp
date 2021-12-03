#include <iostream>
#include <ctime>
#include <cstdlib>

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */

char notLine[] = "_______________________________________\n";
char line[] = "|.....................................|\n";

std::string grid[10][41];

class Node
{
public:
    int _x;
    int _y;
    float _gScore;
    bool _isValid;
    Node* _next;
    
    Node(int x, int y)
    {
        _gScore = 0;
        _next = 0;
        _x = x;
        _y = y;

        if (grid[x][y].find("."))
            _isValid = true;
        else
            _isValid = false;
    }
};

void makeGrid()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 41; j++)
        {
            if (i != 0 && i != 9)
            {
                grid[i][j] = line[j];
            }
            else
            {
                grid[i][j] = notLine[j];
            }
        }
    }
}

void printGrid()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 41; j++)
        {
            std::cout << grid[i][j];
        }
    }
}

void generateObsctacles()
{
    for (int i=0; i < 10; i++)
    {
        for (int j = 0; j < 41; j++)
        {

        }
    }
}

void MakeObstacles(int maxObstacleAmount, int ObstacleAmount)
{
    int x = rand() % 37+1;
    int y = rand() % 8+1;
    std::cout << x << " , " << y << std::endl;
    grid[y][x] = '*';
    ObstacleAmount++;
    if (ObstacleAmount <= maxObstacleAmount) {
        MakeObstacles(maxObstacleAmount, ObstacleAmount);
    }
}

void MakeStartEnd(){
    grid[1][1] = "\033[32m*\033[0m";
    grid[8][37] = "\033[31m*\033[0m";

}

float gScore(Node* start, Node* n)
{
    start
}

float aStar(Node n)
{
}

int main()
{
    srand((int)time(0)); // make random work


    makeGrid();
    MakeObstacles(21,0);
    MakeStartEnd();

    Node* nStart = new Node(1,1);
    Node* nEnd = new Node(8, 37);

    printGrid();
}