#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string s;
    cout<<"Enter the Paragraph:";
    getline(cin,s);
    unordered_map<char,int> mp;
    
    for(auto& ch : s)
    {
        if(ch != ' ')
            mp[ch]++;
    }
    
    cout << "The Frequency of the characters in the paragraph is:" << endl;
    for(auto& it: mp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    return 0;
}
