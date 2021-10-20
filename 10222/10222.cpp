//10222 - Decode the Mad man
#include <iostream>
#include <string>

using namespace std;

string keyboard="`1234567890-=qwertyuiop[]\asdfghjkl;'zxcvbnm,./";

int main(){
    string message;
    while(getline(cin,message)){
        for(int i=0;i<message.length();i++){
            if(65<=message[i]&&message[i]<=90){
                message[i]+=32;
            }
            if(message[i]==' '){
                cout<<" ";
                continue;
            }
            else if(message[i]=='d'){
                cout<<"a";
                continue;
            }
            for(int j=0;j<keyboard.length();j++){
                if(message[i]==keyboard[j]){
                    cout<<keyboard[j-2];
                }
            }
        }
        cout<<endl;
    }  
    return 0;
}