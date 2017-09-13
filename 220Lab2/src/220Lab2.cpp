//============================================================================
// Name        : 220Lab2.cpp
// Author      : Kevin Faucher
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string reverseStr(string str, string tmp, int index);
int sumOfdigits(int x, int sum);

int main() {
	string str = "amri";
	string tmp = "";

	cout << reverseStr(str, tmp, 3) << endl;
	cout << sumOfdigits(1542,0) << endl;
	return 0;
}

//Part 1: # 1-6

//Problem 1

string reverseStr(string str, string tmp, int index) {
	if (index >= 0) {
		tmp += str.at(index);
		return (reverseStr(str, tmp, index-1));
	}else{
		return tmp;
	}
}

int sumOfdigits(int x, int sum)
{
    if(x !=0){
       int digit = x % 10;
       return sumOfdigits(x / 10,sum+digit);
       }
       else{
         return sum;}

}
