////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: More on Classes and Instances (Question 4d) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
#include <string>	
using namespace std;

//Question 4d: return references and const references
class Score {
public:
	Score();
	Score(int a);
	~Score();
	Score(const Score& s);
	int getAmount() const;
	void setAmount(int a);
	//...
private:
	int amount_;
};
Score::Score() : amount_(0) {
	cout << "\nScore() called";
}
Score::Score(int a) : amount_(a) {
	cout << "\nScore( int a) called";
}
Score::Score(const Score& s) : amount_(s.amount_) {
	cout << "\nScore( const Score&) called";
}
Score::~Score() {
	cout << "\n~Score() called";
}
int Score::getAmount() const {
	return amount_;
}
void Score::setAmount(int a) {
	amount_ = a;
}

class Player {
public:
	Player();
	Player(const Score& score, const string& name);
	const Score& getScore() const;
	//...
private:
	Score score_;
	string name_;
};
Player::Player() : score_(0)
{
	cout << "\nPlayer() called";
}
Player::Player(const Score& score, const string& name) : score_(score), name_(name)
{
	cout << "\nPlayer( Score score, string name) called";
}
const Score& Player::getScore() const
{
	return score_;
}
int main()
{
	//Question 4d
	cout << "\n\n\nCreating a Score and a Player... ";
	cout << "\n\nScore s;";
	Score s(12);
	cout << "\n\nPlayer p( s, \"Fred\");";
	Player p(s, "Fred");
	cout << "\n\nShowing score of player... p.getScore().getAmount();";
	cout << "\nFred score is: " << p.getScore().getAmount();

	cout << "\n\nTrying to change score of player... p.getScore() = 2;";
	//p.getScore() = 2;
	cout << "\n\nShowing score of player... p.getScore().getAmount();";
	cout << "\nFred score is: " << p.getScore().getAmount();

	cout << "\n\n";
	system("pause");
	return 0;
}
