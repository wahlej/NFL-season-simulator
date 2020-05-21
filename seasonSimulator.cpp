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
Player balMLB = Player("Patrick", "Queen", 75);
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

Team cincinnatiBengals = Team("Cincinnati", "Bengals");
Player cinQB = Player("Joe", "Burrow", 75);
Player cinRB = Player("Joe", "Mixon", 87);
Player cinWR = Player("AJ", "Green", 90);
Player cinMLB = Player("Josh", "Bynes", 76);
Player cinCB = Player("William", "Jackson III", 81);
cincinnatiBengals.setTeamInfo(cinQB, cinRB, cinWR, cinMLB, cinCB, "Zac Taylor");

Team clevelandBrowns = Team("Cleveland", "Browns");
Player cleQB = Player("Baker", "Mayfield", 76);
Player cleRB = Player("Nick", "Chubb", 92);
Player cleWR = Player("Odell", "Beckham Jr.", 90);
Player cleMLB = Player("Joe", "Schobert", 82);
Player cleCB = Player("Denzel", "Ward", 85);
clevelandBrowns.setTeamInfo(cleQB, cleRB, cleWR, cleMLB, cleCB, "Kevin Stefanski");   

Team dallasCowboys = Team("Dallas", "Cowboys");
Player dalQB = Player("Dak", "Prescott", 81);
Player dalRB = Player("Ezekiel", "Elliot", 93);
Player dalWR = Player("Amari", "Cooper", 91);
Player dalMLB = Player("Jaylon", "Smith", 81);
Player dalCB = Player("Byron", "Jones", 88);
dallasCowboys.setTeamInfo(dalQB, dalRB, dalWR, dalMLB, dalCB, "Mike McCarthy");   

Team denverBroncos = Team("Denver", "Broncos");
Player denQB = Player("Drew", "Lock", 68);
Player denRB = Player("Phillip", "Lindsay", 85);
Player denWR = Player("Courtland", "Sutton", 84);
Player denMLB = Player("Alexander", "Johnson", 78);
Player denCB = Player("Bryce", "Callahan", 81);
denverBroncos.setTeamInfo(denQB, denRB, denWR, denMLB, denCB, "Vic Fangio");   

Team detroitLions = Team("Detroit", "Lions");
Player detQB = Player("Matthew", "Stafford", 82);
Player detRB = Player("Kerryon", "Johnson", 82);
Player detWR = Player("Kenny", "Golladay", 86);
Player detMLB = Player("Jahlani", "Tavai", 72);
Player detCB = Player("Justin", "Coleman", 84);
detroitLions.setTeamInfo(detQB, detRB, detWR, detMLB, detCB, "Matt Patricia");   

Team greenbayPackers = Team("Green Bay", "Packers");
Player gbQB = Player("Aaron", "Rodgers", 89);
Player gbRB = Player("Aaron Jones", "", 87);
Player gbWR = Player("Davante", "Adams", 94);
Player gbMLB = Player("Blake", "Martinez", 72);
Player gbCB = Player("Jaire", "Alexander", 89);
greenbayPackers.setTeamInfo(gbQB, gbRB, gbWR, gbMLB, gbCB, "Matt LaFleur");   

return 0;

}