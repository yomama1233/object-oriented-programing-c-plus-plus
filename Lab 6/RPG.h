#ifndef RPG_H
#define RPG_H

#include <string>

using namespace std;

const int SKILL_SIZE = 2;

class RPG {
    public:
        //constructors
        RPG();
        RPG(string name, int health, int strength, int defene, string type);

        void set_skills();
        void print_action(string, RPG);
        void update_health(int);
        void attack(RPG *);
        void use_skill(RPG *);

        const bool is_alive();
        const string get_name();
        const int get_health();
        const int get_strength();
        const int get_defense();



    private:

        string name;
        int defense;
        int strength;
        int health;
        string type;
        string skills[SKILL_SIZE];
        

};

#endif