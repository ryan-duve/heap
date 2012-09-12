#include<iostream>
#include<string>

using namespace std;

void capitalize(string &hw);

int main(){
	string hw="hello world!";

	cout << "Before capitalize function: " << hw << endl;

	capitalize(hw);

	cout << "After capitalize function: " << hw << endl;

 return 0;
}

void capitalize(string &hw){
	hw="Hello World!";
}
