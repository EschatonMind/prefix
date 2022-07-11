#include<iostream>
#include<cstring>
using namespace std;
int length(char arr[]);
void printPrefix(char str[]);
void rev(char str[]);
void sufix(char str[]);

void main() {
	char name[100];
	cin.getline(name, 100);
	printPrefix(name);
	rev(name);
	sufix(name);
	
}

void printPrefix(char str[]) {
	for (int E = 0; str[E] != '\0'; E++) {
		for (int S = 0; S <= E; S++) {
			cout << str[S];
		}
		cout << endl;
	}
}
void rev(char str[]) {
	int Start = 0;
	int End = length(str) - 1;
	while (Start < End) {
		swap(str[Start], str[End]);
		
		Start++;
		End--;
	}
	
}

int length(char arr[]) {
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++) {
		count++;
	}
	return count;
}
void sufix(char str[]) {
	printPrefix(str);
}