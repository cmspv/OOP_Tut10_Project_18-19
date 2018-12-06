////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: Constants and initialisation (Question 7a) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
#include <string>
using namespace std;

class Score {
public:
   Score();
   Score(int a);
   int getAmount() const;
   //...
private:
	int amount_;
};
Score::Score()
:amount_(0)
{}
Score::Score( int a)
:amount_(a)
{}
int Score::getAmount() const {
   return amount_;
}

class Player {
public:
    Player( const string& name="unknown", const Score& score=Score(50));
    void setDetails( const string& name="", const Score& score=Score());
    void show( const string& leadStr="\nPlayer's details: ") const;
    //...
private:
    string name_;
    Score score_;
};
Player::Player( const string& name, const Score& score)
: name_(name), score_( score)
{}
void Player::setDetails( const string& name, const Score& score) {
    score_ = score;
    name_ = name;
}
void Player::show( const string& leadStr) const {
    cout << "\n" << leadStr;
    cout << "\nname_ is " << name_;
    cout << "\nscore_ is " << score_.getAmount();
}

int main() {
	Score s;
	Player p1;
	p1.show();
	Player p2("Fred");
	p2.show("\np2 as Fred --- ");
	p2.setDetails("Rick");
	p2.show("\np2 as Rick --- ");
	p2.setDetails();  
	p2.show("\np2 from cin--- ");

	cout << "\n\n";
	system("pause");
    return 0;
}

