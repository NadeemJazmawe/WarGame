#pragma once

#include "Soldier.hpp"
using namespace std;

namespace WarGame{
    class SniperCommander : public Soldier{
        public:
            explicit SniperCommander(int team) : Soldier(team, 100, 120, TYPE::SniperCommander){}

            void play(vector<vector<Soldier*>>& , pair<int,int> ) override;
        
        private:
            void playHelper(vector<vector<Soldier*>>& , pair<int,int>);
    };
}