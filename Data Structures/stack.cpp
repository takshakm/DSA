#include<iostream>
#include<stack> // Liberary for Stack
#include<string> // Liberary for Strings
#include<algorithm>
using namespace std;
// LIFO - Last in First out.
// Objects are pushed from the top & Popped from the Top.
int main(){
    stack<string> myStack;
    // .push() method is used to push elements to the stack
    myStack.push("Minecraft");
    myStack.push("Red Dead Redemption 2");
    myStack.push("Bully");
    myStack.push("Grand Theft Auto");
    myStack.push("Witcher 3");
    myStack.push("Spider Man");
    myStack.push("Valorant");

    // .pop() removes the top most item in the stack
    myStack.pop();

    // another way to use the .top() method
    string MyFavGame = myStack.top();
    cout<<"My favourit Video Game is "<<MyFavGame <<endl;;

    while(!myStack.empty()){
        cout<<myStack.top()<<" ";
        myStack.pop();
    }
    cout<<endl;
    /* boolalpha is a manipulator in C++ that can be used to control the way that boolean values are printed to the output stream. When boolalpha is set, boolean values are printed as "true" or "false" rather than as non-zero or zero values. */
    cout << boolalpha << myStack.empty() << endl;
}