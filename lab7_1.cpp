#include<iostream>
#include<string>

using namespace std;

string reverse (string x){
	int i = 0, L = x.size();
	string y = x ;
	while(i < L){
		y[i] = x[L-i-1];
		i++;
	}
	return y;
}

string func3(string x){
	int i = 0, L = x.size();
	string y = x;
	while(i < L){
		y[i] = tolower(x[i]);
		i++;
	}
	return y;	
	
}

int main(){
	string s ;
    cout << "Input text: " ;
	cin >> s ;
	
	string tlw = func3(s) ;
	string r = reverse(tlw) ;
    cout << "Reversed text: " << reverse(s) << "\n";

	if(r == tlw) {
		cout << "Palindrome: Yes" ;
	}else{
		cout << "Palindrome: No" ;
	}

    return 0;
}
