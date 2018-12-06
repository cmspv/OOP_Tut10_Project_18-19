////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: More on Classes and Instances (Question 3d) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>		
using namespace std;


//Question 3d: embedded const functions 
class Score {
public:
    Score();
    Score( int a);
    void showAmount() const;
	int getAmount() ;
    void setAmount( int a);
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
int Score::getAmount() {
    return amount_;
}
void Score::setAmount( int a) {
    amount_ = a;
}
void Score::showAmount() const {
    cout << "The score amount is " << getAmount() << endl;
}


int main()
{
    Score s;
    const Score cs( 10);
	s.showAmount();
    cs.showAmount();

	cout << "\n\n";
	system("pause");
    return 0;
}
