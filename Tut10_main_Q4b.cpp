////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: More on Classes and Instances (Question 4b) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
using namespace std;

//Question 4b: Passing instances by address and by references
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
void Score::showAmount() const {
    cout << amount_;
}

//outside Score class

//Using pointers to constant as function parameters
void pi_showAmount( int* pi) {
   cout << *pi;
}
void cpi_showAmount( const int* cpi) {
   cout << *cpi;
}
void ps_showAmount( Score* ps) {
   cout << ps->getAmount();
}
void cps_showAmount( const Score* cps) {
   cout << cps->getAmount();
}
//Using constant reference variables as function parameters
void ri_showAmount( int& ri) {
   cout << ri;
}
void cri_showAmount( const int& cri) {
   cout << cri;
}
void rs_showAmount( Score& rs) {
   cout << rs.getAmount();
}
void crs_showAmount( const Score& crs) {
   cout << crs.getAmount();
}

int main() {
	Score score( 3);
	const Score cscore( 5);

	//passing parameters through pointers
    cout << "\nShowing score (with ps_show( Score*)): ";
    ps_showAmount( &score);
    cout << "\nShowing score (with cps_show( const Score*)): ";
    cps_showAmount( &score);

    cout << "\nShowing cscore (with ps_show( Score*)): ";
    ps_showAmount( &cscore);
    cout << "\nShowing cscore (with cps_show( const Score*)): ";
    cps_showAmount( &cscore);

	//passing parameters with references
    cout << "\nShowing score (with rs_show( Score&)): ";
    rs_showAmount( score);
    cout << "\nShowing score (with crs_show( const Score&)): ";
    crs_showAmount( score);

    cout << "\nShowing cscore (with rs_show( Score&)): ";
    rs_showAmount( cscore);
    cout << "\nShowing cscore (with crs_show( const Score&)): ";
    crs_showAmount( cscore);

	cout << "\n\n";
	system( "pause");
	return 0;
}
