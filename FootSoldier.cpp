
#include<iostream>
#include<vector>
#include "FootSoldier.hpp"
using namespace std;

namespace WarGame{
    void FootSoldier::play(vector<vector<Soldier*>>& board , pair<int,int> p){
        int x = p.first;
        int y = p.second;
        int len = board.size();
        int wid = board[0].size();
        int minDistance = len + wid;
        int distance;
        Soldier** near = nullptr;
        for (int i = 0; i < len; ++i) {
            for (int j = 0; j < wid; ++j) {
                distance = abs(i-x)+abs(j-y);
                if (board[i][j] != nullptr && board[i][j]->getTeam() != this->getTeam() && distance < minDistance){
                    minDistance = distance;
                    near = &board[i][j];
                }
            }
        }
        if (near != nullptr)
            (*near)->harm(this->getDamage() , near);
        else
            cerr << "FootSoldier::there is no on to shoot" << endl;
    }  
}