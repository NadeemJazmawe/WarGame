#pragma once

#include "Soldier.hpp"
using namespace std;

namespace WarGame{
    class Paramedic : public Soldier{
        public:
            explicit Paramedic(int t) : Soldier(t , 0 , 100 , TYPE::Paramedic ){};
            void play(vector<vector<Soldier*>>& , pair<int,int>) override;
    };
}