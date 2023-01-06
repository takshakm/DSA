#include<iostream>
#include<stack> // Liberary for Stack
#include<string> // Liberary for Strings
#include<algorithm>
using namespace std;
// LIFO - Last in First out.
// Objects are pushed from the top & Popped from the Top.
int main(){
    stack<string> myGames;
    
    // .push() method is used to push elements to the stack
    myGames.push("Minecraft");
    myGames.push("Red_Dead_Redemption_2");
    myGames.push("Bully");
    myGames.push("Grand_Theft_Auto");
    myGames.push("Witcher_3");
    myGames.push("Spider_Man");
    myGames.push("Valorant");

    // .pop() removes the top most item in the stack
    // so since it pops from the top, then the element - Valorant will be removed from the Stack
    myGames.pop();

    // another way to use the .top() method 
    // this can also be used to peek at the top element in the stack
    string MyFavGame = myGames.top();
    cout<<"My favourit Video Game is "<<MyFavGame <<endl;
    cout<<"The Game at the Top of my Stack is "<<MyFavGame <<endl;

    // we can copy the stack in C++ before printing it such that the orignal stack stays unmodified
    stack<string> copy(myGames);
    while(!copy.empty()){
        cout<<copy.top()<<" | ";
        copy.pop();
    }
    cout<<endl;
    /* boolalpha is a manipulator in C++ that can be used to control the way that boolean values are printed to the output stream. When boolalpha is set, boolean values are printed as "true" or "false" rather than as non-zero or zero values. */
    cout << boolalpha << myGames.empty() << endl;

    // in C++ we cannot directly search for the position of a particular element in the stack
    // insted we can start a counter position and start popping of the element untill the value is matched
    // and increment the position counter
    // this method also does not modify any of the orignal elements in the stack
    string value;
    cout<<"Enter a Element to search for in the Stack myGames: ";
    cin>>value;
    int pos = 0;
    bool found = false;
    while (myGames.size() > 0 && !found){
        if (myGames.top() == value){
            found = true;
        }
        else{
            myGames.pop();
            ++pos;
        }
    }
    if (found){
        cout << "Element found at position: " << pos << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
}