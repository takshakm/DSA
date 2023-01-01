class MyQueue {
 private:
  stack<int> s1;  // stack to hold the elements in the queue
  stack<int> s2;  // auxiliary stack to facilitate the FIFO behavior

 public:
  /** Initialize your data structure here. */
  MyQueue() {}

  /** Push element x to the back of queue. */
  void push(int x) {
    s1.push(x);
  }

  /** Removes the element from the front of the queue and returns it. */
  int pop() {
    // if s2 is empty, transfer all elements from s1 to s2 in reverse order
    if (s2.empty()) {
      while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
      }
    }
    // if s2 is not empty, pop the top element from s2
    int top = s2.top();
    s2.pop();
    return top;
  }

  /** Get the front element. */
  int peek() {
    // if s2 is empty, transfer all elements from s1 to s2 in reverse order
    if (s2.empty()) {
      while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
      }
    }
    // if s2 is not empty, return the top element from s2
    return s2.top();
  }

  /** Returns whether the queue is empty. */
  bool empty() {
    return s1.empty() && s2.empty();
  }
};
