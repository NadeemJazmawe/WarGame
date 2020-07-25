#pragma once

#include "Soldier.hpp"
using namespace std;

namespace WarGame{
    class ParamedicCommander : public Soldier{
        public:
            explicit ParamedicCommander(int t) : Soldier(t , 0 , 200 , TYPE::ParamedicCommande){} 

            void play(vector<vector<Soldier *>> &, pair<int, int>) override;

        private:
            void playHelper(vector<vector<Soldier*>>& , pair<int,int>);
    };
}