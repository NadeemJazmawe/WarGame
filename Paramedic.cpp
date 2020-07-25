#include "Paramedic.hpp"
using namespace std;

namespace WarGame {
    void Paramedic::play(vector<vector<Soldier*>>& board, pair<int,int> p){
        for (int i = p.first-1; i < p.first+2 && i < board.size(); ++i) {
            if(i<0)
                i=0;
            for (int j = p.second-1; j < p.second+2 && j < board[i].size(); ++j) {
                if(j<0)
                    j=0;
                if(i == p.first && j == p.second) // skip on the Paramedic
                    continue;
                if(board[i][j] != nullptr && board[i][j]->getTeam() == this->getTeam())
                    board[i][j]->heal();
            }
        }
    }
}