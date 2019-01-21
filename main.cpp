#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector <string> dislike;

    string word = "";

    dislike.push_back("hate");
    dislike.push_back("poverty");
    dislike.push_back("hunger");
    dislike.push_back("racism");



    while(cin>>word){
        if(word == dislike[0] ||
           word == dislike[1]||
           word ==dislike[2] ||
           word == dislike[3] )
                cout<< "bleep!"<<endl;
        else
            cout<<word<<endl;

    }










    return 0;
}