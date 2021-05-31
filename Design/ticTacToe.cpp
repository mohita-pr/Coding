#include <bits/stdc++.h>
using namespace std;

class User{

    public:
    int userID;
    int playerNumber;
    struct stat
    {
        int wins;
        int losses;
    } stats;

    User(int n){

        userID =n ;
        stats.wins=0;
        stats.losses=0;
    }
};

class Board
{
private:
    vector<vector<int> > board;
    int winner;
    int diagSum, revDiagSum;
    int turn ;
    vector<int> rowsum;
    vector<int> colsum;
    int size;
    

public:
    Board(int n)
    {
        size = n;
        board.resize(n, vector<int>(n, 0));
        rowsum.resize(n, 0);
        colsum.resize(n, 0);
        winner = -1;
        turn = 0;
        revDiagSum = 0;
        diagSum = 0;
    }
    void printBoard()
    {

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    void makeMove(User* user, int row, int col)
    {
        int player = user->playerNumber;
        if (row < 0 || row > board.size() - 1 || col < 0 || col > board[0].size() - 1)
        {
            cout << "Invalid move";
            return;
        }
        if (board[row][col] != 0)
        {
            cout << "Invalid move";
            return;
        }
        if (player != 0 && player != 1)
        {
            cout << "Invalid player";
            return;
        }
        if (player != turn)
        {
            cout << "Invalid turn";
            return;
        }
        if (getWinner() != -1)
        {
            cout << "winner is decided";
            return;
        }

        int move = (player == 0) ? -1 : 1;
        board[row][col] = move;
        turn = (turn == 0) ? 1 : 0;
        rowsum[row] += move;
        colsum[col] += move;
        if (row == col)
            diagSum += move;
        if (row == size - 1 - col)
            revDiagSum += move;
        if (abs(rowsum[row]) == size || abs(colsum[col]) == size || abs(diagSum) == size || abs(revDiagSum) == size)
        {
            winner = player;
            user->stats.wins++;
            cout << "we have a winner " << player << endl;
        }
    }

    int getWinner()
    {
        return winner;
    }
};

class Game{

    public: 

    int gameID;
    Board* game;
    User* player1;
    User* player2;
    User* Winner;

    Game(User* u1,User* u2){

        
        player1=u1;
        player1->playerNumber=0;
        player2=u2;
        player2->playerNumber=1;
        game = new Board(3);

    }

};
int main()
{
    User* u1 = new User(7790);
    User* u2 = new User(391);
    Game* g1 = new Game(u1,u2);
    g1->game->makeMove(u1,0, 2);
    g1->game->makeMove(u2,1, 0);
    g1->game->makeMove(u1,1, 1);
    g1->game->makeMove(u2,0, 1);
    g1->game->makeMove(u1,2, 0);
    g1->game->printBoard();
    cout<<"wins is "<<u1->stats.wins<<endl;
    if(g1->game->getWinner()!=-1){

        int playerNum = g1->game->getWinner();
        if(playerNum==g1->player1->playerNumber)
            g1->Winner=u1;
        else
        {
            g1->Winner=u2;
        }
        

    }
    cout<<"game winner is "<<g1->Winner->userID;
    return 0;
}