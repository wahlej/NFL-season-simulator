#include <iostream>

using namespace std;

class Player { // simple class for a player including rating
    private:
    string firstName;
    string lastName;
    int rating;
    public:
    void setPlayerInfo(string first, string last, int overall) {
        firstName = first;
        lastName = last;
        rating = overall;
    };
};

class Team { // holds all needed info for NFL team
    private:
    Player QB;
    Player RB;
    Player WR;
    Player MLB;
    Player CB;
    string coach;
    string location;
    string name;
    Team(string loc, string nm);
    public:
    void printTeamInfo() {
        cout << location << " " << name << endl;
        // make way to print player info
    }
    void setTeamInfo(Player qb, Player rb, Player wr, Player mlb, Player cb, string co) {
        QB = qb;
        RB = rb;
        WR = wr;
        MLB = mlb;
        CB = cb;
        coach = co;
    }
};

Team::Team(string loc, string nm): location(loc), name(nm) {}

int main() {

Team 




}