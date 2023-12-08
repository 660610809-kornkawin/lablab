#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";
    getline(cin,name);
    cout<<"Fahsai: Wow!!! "<< name <<" is a really cool name.\n";
    int x;
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout<<name<<": ";
    cin>>x;
    
    cout<<"Fahsai: I think you may be GEAR "<<(x-120000000)/10000000<<". I have a free movie ticket for you.\n";

    string movie,day;
    cout<<"Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout<<name<<": ";
    cin.ignore();
    getline(cin,movie);

    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<name<<": ";
    getline(cin,day);
    cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n";

    string word;
    cout<<name<<": ";
    getline(cin,word);
    cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/";
    return 0;
}