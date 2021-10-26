#include<iostream>
using namespace std;
//method accepting an array of player names, player scores, count, and new player's name and score
//adds new player at proper position so that scores are arranged in descending order
void add(string* players, int* scores, int &count, string newplayer, int newscore){
    int index_to_add=count; //initially assuming count is the index of new player
    //finding index of new player to add
    for(int i=0;i<count;i++){
        if(newscore>scores[i]){
            //found
            index_to_add=i;
            break;
            }
            }
    //shifting remaining elements in players and scores arrays one place to right
    for(int j=count;j>index_to_add;j--){
            players[j]=players[j-1];
            scores[j]=scores[j-1];
                }
                //adding name of player to players array at index_to_add
                players[index_to_add]=newplayer;
                //adding score to scores array
                scores[index_to_add]=newscore;
                //updating reference parameter count
                count++;
}
//method to print player names and scores
void printPlayers(string* players, int* scores, int count){
    cout<<"Players:"<<endl;
    for(int i=0;i<count;i++){
        cout<<players[i]<<" - score: "<<scores[i]<<endl;
        }
        }
//method to search for a player using name, returns the index if found, else -1
int searchPlayer(string* players, int count, string player){
    for(int i=0;i<count;i++){
        if(players[i]==player){
            //found
            return i;
            }
            }
            return -1;
            }
//method to remove a players details from arrays, returns true if deleted, false if not found
bool removePlayer(string* players, int* scores, int &count, string player){
    //finding index of player
    int index=searchPlayer(players,count,player);
    if(index==-1){
        //not found
        return false;
        }else{
            //shifting elements right of index to one place left
            for(int i=index;i<count-1;i++){
                players[i]=players[i+1];
                scores[i]=scores[i+1];
                }
                //updating count and returning true
                count--;
                return true;
                }
}
int main(){
    const int MAX_SIZE=10;
    //declaring two arrays to store names and scores
    string players[MAX_SIZE];
    int scores[MAX_SIZE];
    int count=0; //current count of players
    string name;
    int score, index;
    char ch=' ';
    //looping until user enter 'x'
    while(ch!='x'){
        //printing menu, reading choice
        cout<<endl<<"a) add a new player"<<endl;
        cout<<"b) print players"<<endl;
        cout<<"c) search for a player"<<endl;
        cout<<"d) remove a player"<<endl;
        cout<<"x) exit"<<endl;
        cout<<"Your choice: ";
        cin>>ch;
        //handling choice, reading proper inputs and calling proper methods
        switch(ch){
            case 'a':
            if(count==MAX_SIZE){
                cout<<"Array is full!"<<endl;
                 break;
                 }
                 cout<<"Enter name and score: ";
                 cin>>name>>score;
                  //adding new player
                   add(players,scores,count,name,score);
                   break;
            case 'b':
                //printing players
                printPlayers(players,scores,count);
                break;
            case 'c':
                cout<<"Enter player name: ";
                cin>>name;
                //searching for player
                index=searchPlayer(players,count,name);
                if(index==-1){
                cout<<"Not found!"<<endl;
                }else{
                cout<<name<<" has the score: "<<scores[index]<<endl;
                    }
                break;
            case 'd':
                cout<<"Enter player name: ";
                cin>>name;
                //removing player
                if(removePlayer(players,scores,count,name)){
                    cout<<"Player removed!"<<endl;
                }else{
                    cout<<"Not found!"<<endl;
                    }
                break;
                    }
                    }

            return 0;
}
