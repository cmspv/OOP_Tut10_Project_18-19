////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: More on Classes and Instances (Question 3b) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
using namespace std;


//Question 3b: only const member functions applied to const instances
class Score {
public:
    Score();
    Score( int a);
    Score( const Score& s);
    int getAmount() const;
    void setAmount( int a);
    void showAmount();
    //...
private:
    int amount_;
};
Score::Score()
: amount_(0)
{}
Score::Score( int a) 
: amount_(a)
{}
Score::Score( const Score& s) 
: amount_( s.amount_)
{}

int Score::getAmount() const {
    return amount_;
}
void Score::setAmount( int a) {
    amount_ = a;
}
void Score::showAmount() {
    cout << amount_ << endl;
}

int main()
{
	//Question 3b
    Score s;
    const Score s1;
    const Score s2( 10);
    const Score s3( s2);

    cout << s.getAmount() << endl;
    cout << s3.getAmount() << endl;
    s.setAmount( 15);
    s3.setAmount( 15);
    s.showAmount();
    s3.showAmount();

	cout << "\n\n";
	system("pause");
    return 0;
}
