#include "SniperCommander.hpp"

using namespace std;

namespace WarGame{
    void SniperCommander::play(vector<vector<Soldier*>>& board, pair<int,int> p) {
        playHelper(board, p);
        playAll(board, TYPE::Sniper);
    }

     void SniperCommander::playHelper(vector<vector<Soldier*>>& board , pair<int,int> p){
        int maxHealth = 0;
        Soldier** strongest = nullptr;
        for (auto & i : board) {
             for (auto & j : i) {
                if (j != nullptr && j->getTeam() != this->getTeam() && j->getHealth() > maxHealth){
                    maxHealth = j->getHealth();
                    strongest = &j;
                }   
            }
        }
        if(strongest != nullptr)
            (*strongest)->harm(this->getDamage(),strongest);
        else
            cerr << "Sniper::there is no one to shoot at" << endl;
    }
}