#pragma once

#include "Soldier.hpp"
using namespace std ;

namespace WarGame {
    class FootSoldier : public Soldier{
    public:
        explicit FootSoldier(int team) : Soldier(team, 10, 100, TYPE::Foot){};

        void play(vector<vector<Soldier*>>& , pair<int,int>) override;
    };
}
