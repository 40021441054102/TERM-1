#include <iostream>
#include <cmath>
using namespace std;
int main() {
 
    char s1[] = "xyz";
    char s2[] = "abcdef";
 
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
 
    int result = strcmp(s1, s2);
 
    if(result < 0)
        cout << "s1 < s2";
 
    if(result == 0)
        cout << "s1 = s2";
 
    if(result > 0)
        cout << "s1 > s2";
}