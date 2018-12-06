////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: Constants and initialisation (Question 6) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
#include <string>	
using namespace std; 

//Question 6

//------------class Player
class Player {
public:
    Player();
	Player( int score, const string& name);
	Player( const Player& p);
	~Player();
    void show() const;
	int getScore() const;
	string getName() const;
	void setScore( int s);
	void setName( const string& str);
private:
    int score_;
    string name_;
};
Player::Player()
: score_( 0), name_() 
{}
Player::Player( const Player& p)
: score_( p.score_), name_(p.name_)
{}
Player::Player( int score, const string& name)
: score_( score), name_(name)
{}
Player::~Player()
{}
void Player::show() const {
    cout << "\n \tname_ is " << name_;
    cout << "\n \tscore_ is " << score_;
}

int Player::getScore() const {
    return score_;
}
string Player::getName() const {
    return name_;
}

void Player::setScore( int score) {
    cout << "\nScore was: " << score_;
	score_ = score;
    cout << "\nScore is: " << score_;
} 
void Player::setName( const string& name) {
    cout << "\nName was: " << name_;
	name_ = name;
    cout << "\nName is: " << name_;
}
//end class Player



//--------start program
int main()
{
//Question 6

	int score( 10);
    cout << "\n___Creating Player player1:";
    Player player1( score, "fred");
	cout << "\n___Showing player1's data:";
	player1.show();
    cout << "\n___Changing values in player1:";
	player1.setName( "Ruby");
	player1.setScore( 50);
	cout << "\n___Showing player1's data:";
	player1.show();

	cout << "\n___Creating new Player player2:";
    Player player2( player1);
	cout << "\n___Showing player2's data:";
	player2.show();

	cout << "\n___Creating new Player player3:";
    Player player3( 240, "Tom");
	cout << "\n___Showing player3's data:";
	player3.show();

	cout << "\n\n";
	system( "pause");
	return 0;
}
