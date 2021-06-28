#include <iostream>
#include <string>


using namespace std;


class Player {
private:
    string name;
    int health;
    int xp;
public:
    string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
    
    Player(string name_val = "Nonce", int health_val = 0, int xp_val = 0);
};


// Initialiser 
Player::Player(string name_val, int health_val, int xp_val)
    :name {name_val}, health {health_val}, xp {xp_val} {}

void display_player(Player p) {
    cout << p.get_name() << endl;
    cout << p.get_health() << endl;
    cout << p.get_xp() << endl;
}


int main() {

    Player enemy;
    Player cal {"Cal", 69, 69};
    Player kurt {"Kurt", 100, 100};

    display_player(cal);
    display_player(kurt);

    return 0;
}