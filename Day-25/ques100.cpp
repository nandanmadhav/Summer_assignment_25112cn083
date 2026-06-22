#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
return a.size() < b.size();
}

int main() {
string words[] = {"apple", "is", "beautiful", "red"};
int n = 4;
sort(words, words+n, compare);
cout << "Words Sorted by Length: ";
for(int i=0; i<n; i++) cout << words[i] << " ";
return 0;
}
