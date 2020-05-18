#include <iostream>
#include <string>

using namespace std;

class Player { // simple class for a player including rating
    private:
    string firstName;
    string lastName;
    int rating;
    public:
    Player(): firstName("First"), lastName("Last"), rating(0) {}
    Player(string f, string l, int rat);
    void printPlayerInfo() {
        cout << firstName << " " << lastName << " " << "(" << rating << ")" << endl;
    }
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
    public:
    Team(string loc, string nm);
    void printTeamInfo() { // prints all team info
        cout << location << " " << name << endl;
        cout << "Coach " << coach << endl << endl;
        cout << "QB: "; QB.printPlayerInfo();
        cout << "RB: "; RB.printPlayerInfo();
        cout << "WR: "; WR.printPlayerInfo();
        cout << "MLB: "; MLB.printPlayerInfo();
        cout << "CB: "; CB.printPlayerInfo();
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

Player::Player(string f, string l, int rat): firstName(f), lastName(l), rating(rat) {}

Team::Team(string loc, string nm): location(loc), name(nm) {}

int main() {

/* Generic Team Template
Team nmm = Team("", "");
Player qqqQB = Player("", "", );
Player qqqRB = Player("", "", );
Player qqqWR = Player("", "", );
Player qqqMLB = Player("", "", );
Player qqqCB = Player("", "", );
nmm.setTeamInfo(qqqQB, qqqRB, qqqWR, qqqMLB, qqqCB, "");    
*/

Team arizonaCardinals = Team("Arizona", "Cardinals");
Player ariQB = Player("Kyler", "Murray", 75); // convention for players -- teamabbreviationPOSITION
Player ariRB = Player("Kenyan", "Drake", 81);
Player ariWR = Player("Larry", "Fitzgerald", 83);
Player ariMLB = Player("Jordan", "Hicks", 77);
Player ariCB = Player("Patrick", "Peterson", 88);
arizonaCardinals.setTeamInfo(ariQB, ariRB, ariWR, ariMLB, ariCB, "Kliff Kingsbury");

// this below prints the team location, name, coach, and players with ratings
// arizonaCardinals.printTeamInfo();

Team atlantaFalcons = Team("Atlanta", "Falcons");
Player atlQB = Player("Matt", "Ryan", 87);
Player atlRB = Player("Todd", "Gurley", 86);
Player atlWR = Player("Julio", "Jones", 97);
Player atlMLB = Player("Deion", "Jones", 86);
Player atlCB = Player("Kendall", "Sheffield", 73);
atlantaFalcons.setTeamInfo(atlQB, atlRB, atlWR, atlMLB, atlCB, "Dan Quinn");

Team baltimoreRavens = Team("Baltimore", "Ravens");
Player balQB = Player("Lamar", "Jackson", 92);
Player balRB = Player("Mark", "Ingram", 86);
Player balWR = Player("Marquise", "Brown", 80);
Player balMLB = Player("Chris", "Board", 62);
Player balCB = Player("Marlon", "Humphrey", 89);
baltimoreRavens.setTeamInfo(balQB, balRB, balWR, balMLB, balCB, "John Harbaugh");

Team buffaloBills = Team("Buffalo", "Bills");
Player bufQB = Player("Josh", "Allen", 77);
Player bufRB = Player("Devin", "Singletary", 80);
Player bufWR = Player("Stefon", "Diggs", 93);
Player bufMLB = Player("Tremaine", "Edmunds", 80);
Player bufCB = Player("Tre'Davious", "White", 88);
buffaloBills.setTeamInfo(bufQB, bufRB, bufWR, bufMLB, bufCB, "Sean McDermott");

Team carolinaPanthers = Team("Carolina", "Panthers");
Player carQB = Player("Teddy", "Bridgewater", 75);
Player carRB = Player("Christian", "McCaffrey", 99);
Player carWR = Player("Robby", "Anderson", 84);
Player carMLB = Player("Tahir", "Whitehead", 76);
Player carCB = Player("Donte", "Jackson", 81);
carolinaPanthers.setTeamInfo(carQB, carRB, carWR, carMLB, carCB, "Matt Rhule");  

Team chicagoBears = Team("Chicago", "Bears");
Player chiQB = Player("Nick", "Foles", 71);
Player chiRB = Player("David", "Montgomery", 76);
Player chiWR = Player("Allen", "Robinson", 89);
Player chiMLB = Player("Roquan", "Smith", 83);
Player chiCB = Player("Kyle", "Fuller", 86);
chicagoBears.setTeamInfo(chiQB, chiRB, chiWR, chiMLB, chiCB, "Matt Nagy");  

return 0;

}