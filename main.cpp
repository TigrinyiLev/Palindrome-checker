#include<iostream>
#include<string>

using namespace std;

int main(){
    
    string letter, word;
    getline(cin, letter);

    int i = 0;
    while(letter[i]){
        word += letter[i];
        i++;
        if (letter[i] == ' '){
            cout << word << endl;
            word = "";
        }
    }
    if (word != ""){
        cout << word << endl;
    }
 
}