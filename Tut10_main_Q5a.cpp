////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: More on Classes and Instances (Question 5a) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
#include <string>	
using namespace std;

//Question 5a: composition: need initialisation list for const attribute
class Score {
public:
    Score();
    Score( int a);
	~Score();
    Score( const Score& s);
    int getAmount() const;
    void setAmount( int a);
    //...
private:
    int amount_;
};
Score::Score() : amount_(0) {
    cout << "\n Score() called: "  << amount_;
}
Score::Score( int a) : amount_(a) {
    cout << "\n Score( int a) called: " << amount_;
}
Score::Score( const Score& s) : amount_(s.amount_) {
    cout << "\n Score( const Score&) called: " << amount_;
}
Score::~Score() {
    cout << "\n ~Score() called: ";
}
int Score::getAmount() const {
    return amount_;
}
void Score::setAmount( int a) {
    amount_ = a;
}

class Player {
public:
    Player();
    Player( Score score, string name);
    Player( int value, string name);
    Player( const Player& s);
    //...
private:
    Score score_;
	string name_;
};
Player::Player()
{
    cout << "\n Player() called: ";
	score_.setAmount(0);
	name_ = "";
    cout << " name_ is " << name_;
    cout << " score_.amount_ is " << score_.getAmount();
}
Player::Player( Score score, string name)
{
    cout << "\n Player( Score score, string name) called: ";
	score_ = score;
	name_ = name;
    cout << " name_ is " << name_;
    cout << " score_.amount_ is " << score_.getAmount();
}
Player::Player( int value, string name)
{
    cout << "\n Player( int value, string name) called: ";
	score_.setAmount( value);
	name_ = name;
    cout << " name_ is " << name_;
    cout << " score_.amount_ is " << score_.getAmount();
}
Player::Player( const Player& p)
{
    cout << "\n Player( const Player& s) called: ";
	score_.setAmount( p.score_.getAmount());
	name_ = p.name_;
    cout << " name_ is " << name_;
    cout << " score_.amount_ is " << score_.getAmount();
}

int main()
{
//Question 5a
    cout << "\n\n\nTesting Score constructors... ";
    cout << "\n\nScore s;";
    Score s;
    cout << "\n\nconst Score s1;";
    const Score s1;
    cout << "\n\nconst Score s2( 10);";
    const Score s2( 10);
    cout << "\n\nconst Score s3( s2);";
    const Score s3( s2);

    cout << "\n\n\nTesting Player constructors... ";
    cout << "\n\nconst Player cp1;";
    const Player cp1;
    cout << "\n\nconst Player cp2( s2, \"tom\");";
    const Player cp2( s2, "tom");
    cout << "\n\nconst Player cp3( 12, \"ann\");";
    const Player cp3( 12, "ann");
    cout << "\n\nconst Player cp4( cp1);";
    const Player cp4( cp1);

	cout << "\n\n";
	system( "pause");
	return 0;
}
