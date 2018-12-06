////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: More on Classes and Instances (Question 5c) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
#include <string>	
using namespace std;

class Score { 
public:
    Score();
    Score( int);
    Score( const Score&);
    int getAmount() const;
    void setAmount( int);
    //...
private:
    int amount_;
};
Score::Score()
: amount_( 0)
{
    cout << "\n Score() called: ";
    cout << " amount_ is " << amount_;
}
Score::Score( int a)
: amount_( a)
{
    cout << "\n Score( int) called: ";
    cout << " amount_ is " << amount_;
}
Score::Score( const Score& s)
: amount_( s.amount_)
{
    cout << "\n Score( const Score&) called: ";
    cout << " amount_ is " << amount_;
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
    Player( const Score&, const string&, int);
    //...
private:
    string name_;
    Score score_;
	const int initialPoint_;
};
Player::Player()
: name_(), initialPoint_(0), score_(initialPoint_)
{
    cout << "\n Player() called: ";
    cout << " name_ is " << name_;
    cout << " initialPoint_ is " << initialPoint_;
    cout << " score_.amount_ is " << score_.getAmount();
}
Player::Player( const Score& score, const string& name, int point)
: name_(), initialPoint_(point), score_(initialPoint_)
{
    cout << "\n Player() called: ";
    cout << " name_ is " << name_;
    cout << " initialPoint_ is " << initialPoint_;
    cout << " score_.amount_ is " << score_.getAmount();
}

int main()
{
	cout << "\n\n\nTesting Player constructors with initialisation list... ";
    cout << "\n\nconst Player cplayer1;";
    const Player cplayer1;
    cout << "\n\nconst Player cplayer2( score( 10), \"tom\", 12);";
    const Player cplayer2( Score( 10), "tom", 12);
    cout << "\n\nconst Player cplayer3( cplayer1);";
    const Player cplayer3( cplayer1);

	cout << "\n\n";
	system( "pause");
	return 0;
}
