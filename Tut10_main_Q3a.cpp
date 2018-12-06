////////////////////////////////////////////////////////////////////////
// OOP Tutorial 10: Constants and initialisation (Question 3a) 
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <iostream>	
using namespace std;

//Question 3a: lack of default constructor
class Score {
    public:
		Score( int a);
        Score( const Score& s);
		int getAmount() const { return amount_;}
        //...
    private:
        int amount_;
};
Score::Score( int a) 
: amount_(a)
{}
Score::Score( const Score& s) 
: amount_( s.amount_)
{}

int main() {
    Score s;               
    const Score s1;        
    const Score s2( 10);
    const Score s3( s2);

	cout << "\n\ns  "  << s.getAmount();
	cout << "\n\ns1 "  << s1.getAmount();
	cout << "\n\ns2 "  << s2.getAmount();
	cout << "\n\ns3 "  << s3.getAmount();

	cout << "\n\n";
	system("pause");
	return 0;
}
