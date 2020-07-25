#include "Sniper.hpp"

using namespace std;

namespace WarGame {
    void Sniper::play(vector<vector<Soldier*>>& board, pair<int,int> p){
        uint maxHealth = 0;
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
            (*strongest)->harm(this->damage,strongest);
        else
            cerr << "Sniper::there is no one to shoot at" << endl;
    }
}