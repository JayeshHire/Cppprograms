
#include <iostream>
using namespace std;
class base{
    public :
    int b;
    base(int x){
        b = x;
    }
};

class power{
    public:
    int p;
    power(int y){
        p = y;
    }
};

class combn{
	public:
    int n ;
    combn(int a){
        n = a;
        }
};

class combi{
	public:
    int i;
    combi(int a){
        i = a;
    }
};

int fact(int d){
    int result = 1;
    for (int i = d; i > 0; i--){
        result *= i;
    }
    return result;
}

int operator * (const combn& N, const combi& I){
    int num = fact(N.n);
    int deno = fact(I.i)*fact(N.n-I.i);
    int result = num/deno;
    return result;
}

int operator ^(const base& A, const power& B){
    int result = A.b;
    for (int i= 1; i< B.p ;i++){
        result *= A.b;
    }
    return result;
}

double probability(int n, int i){
	combn N(n);
	combi I(i);
	base B(2);
	power P(n);
	int num = N*I;
	int deno = B^P;
	double result = num*100/deno;
	return result;
}




int main() {
    // Write C++ code here
    int option;
    int sizeOfsuccession = 5 ;
    double result;
    int p = 2; //p is the number of heads or number of tails
	cout << "Mention the number of succession for tossing a coin"<< endl;
    cin>> sizeOfsuccession;
    cout << "1. Probability for tails"<<endl;
    cout <<"2. Probability for heads"<<endl;
    cin>>option;
    switch(option){
    	case 1:
    		cout << "Enter the number of tails for whom you want to see probability "<<endl;
    		cin >> p;
    		result = probability(sizeOfsuccession,p);
    		cout << "The probability in percentage for tossing a coin for "<<sizeOfsuccession<<
			" number of times and for event where we are getting exactly "<<p<<" tails is "<<result<<endl;
			break;
    	case 2:
    		cout << "Enter the number of heads for whom you want to see probability "<<endl;
    		cin >> p;
    		result = probability(sizeOfsuccession,p);
    		cout << "The probability in percentage for tossing a coin for "<<sizeOfsuccession<<
			" number of times and for event where we are getting exactly "<<p<<" tails is "<<result<<endl;
    		break;
    		
	}
	return 0;
}
