#pragma once

#include "Soldier.hpp"
using namespace std;

namespace WarGame{
    class FootCommander : public Soldier {
    public:
        explicit FootCommander(int team) : Soldier(team, 20, 150, TYPE::FootCommander){};

        void play(vector<vector<Soldier*>>& , pair<int,int>) override;

    private:
        void playHelper(vector<vector<Soldier*>>& , pair<int,int>) ;
    };
}