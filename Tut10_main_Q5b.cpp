////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: More on Classes and Instances (Question 5b) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
#include <string>	
using namespace std;

//Question 5b: composition with initialisation list
class Score {
public:
    Score();
    Score( int a);
    Score( const Score& s);
	~Score();
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
    Player( const Score& score, const string& name);
    Player( int value, const string& name);
    Player( const Player& s);
    //...
private:
    Score score_;
    string name_;
};
Player::Player()
: score_( 0), name_()
{
    cout << "\n Player() called: ";
    cout << " name_ is " << name_;
    cout << " score_.amount_ is " << score_.getAmount();
}
Player::Player( const Score& score, const string& name)
: score_( score), name_( name)
{
    cout << "\n Player( Score score, string name) called: ";
    cout << " name_ is " << name_;
    cout << " score_.amount_ is " << score_.getAmount();
}
Player::Player( int value, const string& name)
: score_( value), name_( name)
{
    cout << "\n Player( int value, string name) called: ";
    cout << " name_ is " << name_;
    cout << " score_.amount_ is " << score_.getAmount();
}
Player::Player( const Player& p)
: score_( p.score_.getAmount()), name_( p.name_)
{
    cout << "\n Player( const Player& s) called: ";
    cout << " name_ is " << name_;
    cout << " score_.amount_ is " << score_.getAmount();
}

int main()
{
    const Score s( 10);

    cout << "\n\n\nTesting Player constructors with initialisation list... ";
    cout << "\n\nconst Player cp1;";
    const Player cp1;
    cout << "\n\nconst Player cp2( s, \"tom\");";
    const Player cp2( s, "tom");
    cout << "\n\nconst Player cp3( 12, \"ann\");";
    const Player cp3( 12, "ann");
    cout << "\n\nconst Player cp4( cp1);";
    const Player cp4( cp1);

	cout << "\n\n";
	system( "pause");
	return 0;
}
