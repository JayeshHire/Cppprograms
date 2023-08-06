#include <iostream>
#include <vector>
#include <utility>
using namespace std;

//function to convert decimal to binary
vector <int> binary(int dec);

//function for converting binary to exponent form
pair <int , pair<int , vector<int> > > bin_to_exp(vector <int> bin);

//function for converting exponent to IEEE standard form
pair <int , pair<vector <int>, vector<int > > > exp_to_IEEE(int dec);

//program to print vector array in reverse order
void rprint(vector <int> d);

//function to find the fractal part of the binary
vector <int> frac(vector <int> q);

int main(){
	
	
	pair <int , pair<vector <int>, vector<int > > > e = exp_to_IEEE(46);
	int a = e.first;
	cout << a ;//<< e.second.first <<" " << e.second.second <<endl;
	if (e.first == 0)
	cout << "positive number "<<endl;
	else
	cout<< "negative number"<<endl;
	cout << "exponential :";
	rprint(e.second.first);
	cout <<"fraction : ";
	rprint(e.second.second);
	
	
	
	
	return 0;
}

vector <int> binary(int dec){
	int flag = 0;
	int quo , rem ;
	if (dec < 0 ){
	flag = 1;
	dec = -(dec);
	}
	quo = dec;
	vector <int> p;
	while(1){
		rem = quo%2;
		quo /= 2;
	
		p.push_back(rem);
		if (quo == 0)
		break;
		
	}
	p.push_back(flag);
	return p;
}

vector <int> frac(vector <int> q){
	vector <int> f ;
	for(int i = q.size() - 3; i >=0 ; i--){
		f.push_back(q[i]);
	}
	return f;
}

void rprint(vector <int> d){
	for (int i = d.size()-1; i >= 0 ; i--){
		cout << d[i]<< " ";
	}
	cout<<endl;
}

pair <int , pair<int , vector<int > > > bin_to_exp(vector <int> bin){
	int expo = bin.size()-2;
	int IEEE_expo = expo + 127;
	vector <int> fraction = frac(bin);
	pair <int , pair<int , vector<int > > > p(bin[bin.size() - 1] ,{IEEE_expo , fraction});

	return p;
}

pair <int , pair<vector <int>, vector<int > > > exp_to_IEEE(int dec){
	vector <int > bin = binary(dec);
	pair <int , pair<int , vector<int > > > p = bin_to_exp(bin);
	vector <int> exp_binary = binary(p.second.first);
	pair <int , pair<vector <int>, vector<int > > > result (p.first, {exp_binary, p.second.second} ) ;
	return result;
}


