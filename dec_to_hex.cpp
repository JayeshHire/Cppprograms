#include <iostream>
#define HEX '1',\
 '2',\
  '3',\
   '4',\
   '5',\
    '6',\
	 '7',\
	  '8',\
	   '9',\
	    'A',\
		 'B',\
		 'C',\
		  'D',\
		   'E',\
		    'F'
using namespace std;


//function for string reversal
string rstring(string);

//function for converting decimal to hexadecimal value
string dec2hex(int dec); //takes positive integer as an input


int main(){
	string hex = dec2hex(65535);
	cout << "Hex value is :"<<hex;
	return 0;
}


string dec2hex(int dec){
	char hex_ref [] = { HEX };
	string initial_hex = "";
	int rem ;
	int divident = dec;
	while (divident != 0){
		rem = divident%16;
		divident /= 16;
		initial_hex.push_back(hex_ref[rem - 1]);
		
	}
	string hex = rstring(initial_hex);
	return hex;
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
















