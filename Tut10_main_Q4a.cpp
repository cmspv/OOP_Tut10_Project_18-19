////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: More on Classes and Instances (Question 4a) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
using namespace std;

//Question 4a: passing instances by value (call copy constructor and destructor)
class Score {
public:
    Score();
    Score( int a);
    Score( const Score& s);
	~Score();
    int getAmount() const;
    void setAmount( int a);
	void showAmount() const;
    //...
private:
    int amount_;
};
Score::Score() : amount_(0) {
    cout << "\n Score() called: ";
}
Score::Score( int a) : amount_(a) {
    cout << "\n Score( int a) called: ";
}
Score::Score( const Score& s) : amount_(s.amount_) {
    cout << "\n Score( const Score&) called: ";
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
void Score::showAmount() const {
    cout << amount_;
}

//outside Score class

//Using passed by value parameters
void i_showAmount( int i) {
   cout << i;
}
void s_showAmount( const Score& s) {
   cout << s.getAmount();
}

int main() {

	int x(12);
	int cx(12);
	Score score( 3);
	const Score cscore( 5);

    //passing parameters by value
    cout << "\n\nShowing 10 with showAmount( int): ";
    i_showAmount( 10);
    cout << "\n\nShowing x with showAmount( int): ";
    i_showAmount( x);
    cout << "\n\nShowing cx with showAmount( int): ";
    i_showAmount( cx);
    cout << "\n\nShowing score (with Score::showAmount()): ";
    score.showAmount();
    cout << "\n\nShowing score (with s_show( Score)): ";
    s_showAmount( score);
    cout << "\n\nShowing cscore (with s_show( Score)): ";
    s_showAmount( cscore);

	cout << "\n\n";
	system( "pause");
	return 0;
}
