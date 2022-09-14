#include <iostream>
#include <cstdlib>
using namespace std;


class Alien{
	private:
		int weight;
		int height;
		char gender;
	public:
		Alien(int weight, int height, char gender){
			this->gender = gender;
			this->weight = weight;
			this->height = height;
		}

		int getWeight(){
			return this->weight;
		}

		int getHeight(){
			return this->height;
		}

		int getGender(){
			return this->gender;
		}

		int getPrestige(){
			int genPoints;
			if (this->gender == 'M'){
				genPoints = 2;
			}else{
				genPoints = 3;
			}
			return this->height * this->weight * genPoints;
		}


};

Alien operator+(Alien father, Alien mother){
	int genn = rand() % 2;
	char gender;
	if (genn == 0){
		gender = 'M';
	}else{
		gender = 'F';
	}
	Alien childd = Alien((father.getWeight() + mother.getWeight())/2,(father.getHeight()+mother.getHeight())/2,gender);

	return childd;
}

bool operator==(Alien alien_1, Alien alien_2){

	if (alien_1.getPrestige() == alien_2.getPrestige()){
		return true;
	}else{
		return false;
	}

}

bool operator!=(Alien alien_1, Alien alien_2){
	if (alien_1.getPrestige() != alien_2.getPrestige()){
		return true;
	}else{
		return false;
	}
}


bool operator>=(Alien alien_1, Alien alien_2){
	if (alien_1.getPrestige() >= alien_2.getPrestige()){
		return true;
	}else{
		return false;
	}
}

bool operator>(Alien alien_1, Alien alien_2){
	if (alien_1.getPrestige() > alien_2.getPrestige()){
		return true;
	}else{
		return false;
	}
}


bool operator<(Alien alien_1, Alien alien_2){
	if (alien_1.getPrestige() < alien_2.getPrestige()){
		return true;
	}else{
		return false;
	}
}


bool operator<=(Alien alien_1, Alien alien_2){
	if (alien_1.getPrestige() <= alien_2.getPrestige()){
		return true;
	}else{
		return false;
	}
}
std::ostream& operator<<(std::ostream& os, Alien alien) {

	os<<"heigth: "<<alien.getHeight()<<endl;
	os<<"weigth: "<<alien.getWeight()<<endl;
	os<<"gender: "<<alien.getGender()<<endl;
	return os;
}
int main(){
	Alien alien_1 = Alien(50,30,'M');
	Alien alien_2 = Alien(60,40,'F');
	Alien alien_3 = Alien(100,70,'M');
	Alien alien_4 = Alien(90,90,'F');
	Alien alien_5 = alien_1 + alien_2;
	Alien alien_6 = alien_3 + alien_4;
	if(alien_5==alien_6){
    cout<<"Alien 5 == Alien 6 true"<<endl;
  }
  if(alien_5!=alien_6){
    cout<<"Alien 5 != Alien 6 true"<<endl;
  }else{
    cout<<"Alien 5 != Alien 6 false"<<endl;
  }
  if(alien_5>alien_6){
    cout<<"Alien 5 > Alien 6 true"<<endl;
  }else{
    cout<<"Alien 5 > Alien 6 false"<<endl;
  }
  if(alien_5<alien_6){
    cout<<"Alien 5 < Alien 6 true"<<endl;
  }else{
    cout<<"Alien 5 < Alien 6 false"<<endl;
  }
  if(alien_5>=alien_6){
    cout<<"Alien 5 >= Alien 6 true"<<endl;
  }else{
    cout<<"Alien 5 >= Alien 6 false"<<endl;
  }
  if(alien_5<=alien_6){
    cout<<"Alien 5 <= Alien 6 true"<<endl;
  }else{
    cout<<"Alien 5 <= Alien 6 false"<<endl;
  }

}
