#include <iostream>
#include <vector>
using namespace std;

enum Race { HUMAN, ELF, DWARF, ORC, TROLL };

class Player {

private:
  string name;
  Race race;
  int hitPoints;
  int magicPoints;

public:
  Player(string name, Race racee, int hitPoints, int magicPoints) {
    this->name = name;
    this->race = racee;
    this->hitPoints = hitPoints;
    this->magicPoints = magicPoints;
  }

  virtual string attack() {
    return "Please choose an attack method!";
  }

  string getName() { return this->name; }

  Race getRace() { return this->race; }

  int getHitPoints() { return this->hitPoints; }

  int getMagicPoints() { return this->magicPoints; }

  void setName(string name) { this->name = name; }

  void setRace(Race race) { this->race = race; }

  void setHitPoints(int hitPoints) { this->hitPoints = hitPoints; }

  void setMagicPoints(int magicPoints) { this->magicPoints = magicPoints; }
};

class Guerrero : public Player {
public:
  Guerrero(string name, Race racee) : Player(name, racee, 100, 0) {}

  string attack() override {
    Player::attack();
    return "I will destroy you with my sword!";
  }
};

class Sacerdote : public Player {
public:
  Sacerdote(string name, Race racee) : Player(name, racee, 100, 200) {}

  string attack() override {
    Player::attack();
    return "I will assault you with holy wrath!";
  }
};

class Mago : public Player {
public:
  Mago(string name, Race racee) : Player(name, racee, 200, 0) {}

  string attack() override {
    Player::attack();
    return "I will crush you with my arcane missiles!";
  }
};

int main() {
  system("COLOR 70");
  vector<Player *> playeers;
  Player *Pplayer;
  int option;
  string name;
  Race racee;
  int race;
  int tam = 0;
  while (true) {
    system("cls");
    cout<<"      ========================\n\n";
    cout << "        Create a Character\n\n====>  1. Create a Warrior!\n====>  2. Create a Priest!\n====>  3. Create a Mage!\n====>  4. Finishing creating characters..."
         << endl;
    cout<<"\n      ========================\n";
    cin >> option;
    if (option == 4) {
      system("cls");
      break;
    }
    cout << "\nPlease enter your character's name... \n" << endl;
    cin >> name;
    cout << "\nWhich race do you want?\n\n1. HUMAN\n2. ELF\n3. DWARF\n4. ORC\n5. TROLL\n"
         << endl;
    cin >> race;
    switch (race) {
    case 1:
      racee = HUMAN;
      break;
    case 2:
      racee = ELF;
      break;
    case 3:
      racee = DWARF;
      break;
    case 4:
      racee = ORC;
      break;
    case 5:
      racee = TROLL;
      break;
    }
    switch (option) {
    case 1: {
      Guerrero *guerrero = new Guerrero(name, racee);

      playeers.emplace_back(guerrero);
      tam += 1;
      break;
    }

    case 2: {
      Sacerdote *sacerdote = new Sacerdote(name, racee);

      playeers.emplace_back(sacerdote);
      tam += 1;
      break;
    }

    case 3: {
      Mago *mago = new Mago(name, racee);

      playeers.emplace_back(mago);
      tam += 1;
      break;
    }
    }
  }

  for (int i = 0; i < tam; i++) {
    //system("cls");
    cout << "\n\nYour Warrior!!!";
    cout<<"      \n========================";
    cout << "\n\nName: " << playeers[i]->getName() << endl;
    cout << "Race: ";
    switch (playeers[i]->getRace()) {
    case 0:
      cout<<"HUMAN"<<endl;
      break;
    case 1:
      cout<<"ELF"<<endl;
      break;
    case 2:
      cout<<"DWARF"<<endl;
      break;
    case 3:
      cout<<"ORC"<<endl;
      break;
    case 4:
      cout<<"TROLL"<<endl;
      break;
    }
    cout << "Hit Points: " << playeers[i]->getHitPoints() << endl;
    cout << "Magic Points: " << playeers[i]->getMagicPoints() << endl;
    cout << "Attack: " << playeers[i]->attack() << endl << endl;
  }
}
