#include<iostream>
#include<queue>
#include<algorithm>
#include<string>
using namespace std;
// Queue is a FIFO - First in First Out Data Structure (ex. A line of People)
// A collection designed for holding elements proior to processing.
// Queue is also a linear Data Structure
// add = enqueue, push()
// remove = dequeue, pop()
// Queue runs on a first come first serve principal
// elements are added at the last
// removed from the first
int main(){
    // declared a queue
    queue<string>peopleWaiting;

    // adding elements in the queue
    peopleWaiting.push("Karen");
    peopleWaiting.push("Harold");
    peopleWaiting.push("Chad");
    peopleWaiting.push("Steve");
    peopleWaiting.push("Chandler");
    peopleWaiting.push("Carl");
    peopleWaiting.push("Chris");
    peopleWaiting.push("Jonathan");
    peopleWaiting.push("Madison");

    // printing the first element of the queue
    cout<<peopleWaiting.front()<<endl;

    // removing elements from the queue
    peopleWaiting.pop();

    // check if queue is empty
    cout<<boolalpha<<peopleWaiting.empty()<<endl;

    // check the size of the queue
    cout<<peopleWaiting.size()<<endl;

    // check for a certain object
    string value= "Steve";
    bool found = false;
    queue<string>copy(peopleWaiting);
    while (!copy.empty()) {
        if (copy.front() == value) {
            found = true;
            break;
        }
        copy.pop();
    }

    if (found) {
        cout <<value<< " is in the Queue " << endl;
    } 
    else {
        cout << "Element not found." << std::endl;
    }

    // printing elements of a Queue, this will also modify the values of the orignal queue so it's better to create a copy of it and print it
    while (!peopleWaiting.empty()) {
        cout << peopleWaiting.front() << " | ";
        peopleWaiting.pop();
    }
    return 0;
}