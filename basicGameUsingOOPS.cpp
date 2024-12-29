#include<iostream>
using namespace std;

class player{
	private:
		int health;
		int age;
		int score;
		bool alive;
	public:
		int getHealth(){
			return health;
		}
		int getAge(){
			return age;
		}
		int getScore(){
			return score;
		}
		int isAlive(){
			return alive;
		}
		
		void setHealth(int health){
			this->health=health;
		}
		void setAge(int age){
			this->age=age;
		}
		void setScore(int score){
			this->score=score;
		}
		void setIsAlive(int alive){
			this->alive=alive;
		}
};


player getMaxScore(player a,player b){
	if(a.getScore()>b.getScore())
		return a;
	else
		return b;
}

int main(){
	player ashutosh;
	player meghana;
	
	ashutosh.setAge(19);
	ashutosh.setScore(86);
	ashutosh.setIsAlive(true);
	ashutosh.setHealth(100);
	
	meghana.setAge(17);
	meghana.setScore(54);
	meghana.setIsAlive(true);
	meghana.setHealth(100);
	
	player suu=getMaxScore(ashutosh,meghana);
	cout<<suu.getScore()<<endl<<suu.getAge();
	
}
