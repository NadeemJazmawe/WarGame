#pragma once

#include<iostream>
#include<vector>
using namespace std;


namespace WarGame{
    class Soldier{
    protected:
        enum TYPE{Commander, Foot, FootCommander , Sniper, SniperCommander , Paramedic , ParamedicCommande};

        const int damage;
        const int team;
        const int maxHealth;
        int health;
        const TYPE type;

    public:
        Soldier(uint team, uint damage, uint health, TYPE type)
            : type(type), team(team), damage(damage), health(health), maxHealth(health){}
        
        int getDamage() const{return damage;}
        int getTeam() const {return team;}
        int getHealth() const {return health;}
        TYPE getType(){return type;}

        void heal();
        void harm(int, Soldier**);

        virtual void play(vector<vector<Soldier*>>&, pair<int,int>){};
        void playAll(vector<vector<Soldier*>>& , TYPE);

        virtual ~Soldier() {};
    };
}