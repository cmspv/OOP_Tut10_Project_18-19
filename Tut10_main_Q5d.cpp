////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: More on Classes and Instances (Question 5d) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
#include <string>	
using namespace std;

//Question 5d: with const attribute

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
    Player( const string&, const Score&);
    //...
private:
    string name_;
    const Score score_;
};
Player::Player()
{
    cout << "\n Player() called: ";
    cout << " name_ is " << name_;
    cout << " score_.amount_ is " << score_.getAmount();
}
Player::Player( const string& name, const Score& score)
{
    cout << "\n Player( const string& name, const Score& score) called: ";
	name_ = name;
	score_ = score;
}

int main()
{
 	cout << "\n\nTesting Player with const data member... ";
    cout << "\n\nPlayer player1";
	Player player1;
    cout << "\n\nPlayer player2(\"tom\", score)";
	Player player2("tom", Score(10));

	cout << "\n\n";
	system( "pause");
	return 0;
}
