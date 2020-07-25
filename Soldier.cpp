#include "Soldier.hpp"
using namespace std;

namespace WarGame{

    void Soldier::heal(){
        health = maxHealth;
    }

    void Soldier::harm(int damage, Soldier** p){
        health -= damage;
        if(health <= 0)
            *p = nullptr;
    }

    void Soldier::playAll(vector<vector<Soldier*>>& board, TYPE type){
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[i].size(); ++j) {
                if(board[i][j] != nullptr && board[i][j]->getTeam() == this->getTeam() && board[i][j]->getType() == type)
                    board[i][j]->play(board , pair<int,int>{i,j});
            }
        }
    }
}