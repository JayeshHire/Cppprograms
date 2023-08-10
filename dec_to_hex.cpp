#include <iostream>
using namespace std;


//function to convert integer to string
string int2string(int ,int);
class bin {
	int dec;
	string c ;
	public:
	
	//default constructor
	bin(){
		dec = 1;
		c = dec_to_bin(dec);
		}
		
	bin(int a){
		dec = a;
		c = dec_to_bin(dec);
		
	}
	
	//function converting decimal to binary
	string dec_to_bin(int x){
	int flag = 0;
	int divisor , rem ;
	string binary = "";
	divisor = x;
	
	while(1){
		rem = divisor%2;
		divisor /= 2;
		string rem_str = int2string(rem, 10);
		binary += rem_str;
		if (divisor == 0)
		break;
		
	}
	return binary;
	}
	
	
	
	//checking the size of binary
	int sizeofbin(){
		int size = 0;
		while(1){
			if (c[size] == '\0')
			break;
			size ++ ;
		}
		return size;
		}
	
	//functional overloading	
	int sizeofbin(bin A){
		int size = 0;
		while(1){
			if (A.c[size] == '\0')
			break;
			size ++ ;
		}
		return size;
		}

};



//function for converting 4 bit binary to hex
char bin4_2_hex(bin );

//function for string reversal
string rstring(string);

int main(){
	bin A(4);
	string d = int2string(423,100);
	string c = rstring(d);
	cout << d;
	cout << endl  << c;
	return 0;
}


//function tested
//function to convert integer to string
string int2string(int a, int factor = 1000){
    char x ;
    static string result = "";
    
    if (a/factor == 0){
    factor /= 10;
    return int2string(a, factor) ; 
    }
    int pos = a/factor;
     x = pos + 48;
    result.push_back(x);
    a -= a/factor*factor ;  
    if ( a == 0){
        return result;
    }
    
    factor /= 10;
    return int2string(a, factor);
}

/*char bin4_2_hex(bin binary){
	
}*/


//function tested
string rstring(string s){
	string rstr = "";
	string::reverse_iterator i;
	for( i = s.rbegin(); i != s.rend() ; i++){
		rstr += *i;
	}
	return rstr;
}
















