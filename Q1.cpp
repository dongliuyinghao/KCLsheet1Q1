# include<iostream> 
#include<cmath>
using namespace std; 
int main() 
{ 
	/////Problem 1/////
	cout << "Problem 1" << endl;
	cout << "you are a student." << endl;
	cout << "you are learning C++"<<endl;
	/////Problem 2/////
	int a = 10;
	int b = 15;
	float c = 12.6;
	cout << "Problem 2" << endl;
	cout << a<<endl;
	cout << b<<endl;
	cout << c<<endl;


	/////Problem 3/////
	int n,m,s;
	cout << "Problem 3" << endl;
	cout << "Please enter your 3 numbers: "<<endl;
	cin >> n;
	cin >> m;
	cin >> s;
	cout << "Your numbers forward:" << endl<<n<<endl<<m<<endl<<s<<endl;
	cout << "Your numbers reversed:" << endl<<s<<endl<<m<<endl<<n<<endl;


	/////Problem 4/////
	int z, x, v;
	z = 10;
	x = 15;
	v = z * x;
	cout << "Problem 4" << endl;
	cout << z <<endl<< x <<endl<< v<<endl;


	/////Problem 5/////
	float q, w, max;
	cout << "Problem 5" << endl;
	cin >> q >> w;
	max = ((q>w)?q:w);
	cout <<"The maximum between "<<q<<"and "<<w<<"is " << max << endl;


	/////Problem 6/////
	float i,o;
	cout << "Problem 6" << endl;
	cout << "Please enter a negative number:" << endl;
	cin >> i;
	o = abs(i);
	cout << o << endl;

	return 0;
}