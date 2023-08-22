#include <iostream>
#include <stack>
#include<algorithm>
#include<vector>

using namespace std;

void push(stack<char> &s, char c) {
  if (s.empty() || s.top() != c) {
    s.push(c);
  } else {
    s.pop();
  }
}

int main() {
  char char_array[] = {'a', 'b', 'b', 'a', 'c', 'a'};
  stack<char> s;

  for (char c : char_array) {
    push(s, c);
  }

  string output_string = "";
  while (!s.empty()) {
    char top_element = s.top();
    s.pop();

    output_string += top_element;
  }

  reverse(output_string.begin(), output_string.end());

  cout << output_string << endl;

  return 0;
}
