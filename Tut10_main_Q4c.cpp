////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: More on Classes and Instances (Question 4c) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
using namespace std;

//Question 4c: returning instances
class Score {
public:
    Score();
    Score( int a);
	~Score();
    Score( const Score& s);
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

//Returning value
Score clone( const Score& crs) {
   return( Score( crs.getAmount()));
}
const Score cclone( const Score& crs) {
   return( Score( crs.getAmount()));
}

Score create( int a) {
   return( Score( a));
}
const Score ccreate( int a) {
   return( Score( a));
}

int main() {
	//returning values

    Score s( 12);
	clone(s).showAmount();
	cclone(s).showAmount();
	clone( s).setAmount(1);
    cclone( s).setAmount(1);

	create(10).showAmount();
	ccreate(10).showAmount();
	create( 10).setAmount(1);
	ccreate( 10).setAmount(1);

	cout << "\n\n";
	system( "pause");
	return 0;
}