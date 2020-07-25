#pragma once

#include "Soldier.hpp"
using namespace std;

namespace WarGame{
    class Sniper : public Soldier{  
        public:
            explicit Sniper(int team) : Soldier(team, 50, 100, TYPE::Sniper){};

            void play(vector<vector<Soldier*>>& , pair<int,int>) override;
        
    };
}