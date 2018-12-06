////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: More on Classes and Instances (Question 3c) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>		
using namespace std;


//Question 3c: overloaded const vs. non const member functions
class Score {
public:
    Score();
    Score( int a);
 //   void showAmount();
    void showAmount() const;
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
//void Score::showAmount() {
//    amount_ = 0;
//	cout << "non-const version: " << amount_ << endl;
//}
void Score::showAmount() const {
    cout << "const version: " << amount_ << endl;
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
