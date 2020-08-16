#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
  string line;
  vector<int> inputs;
  string temp;
  int n, p1, p2;

  // get input
  getline(cin, line);
  stringstream ss(line);

  // seperate spaces
  do {
    ss >> temp;
    inputs.push_back(stoi(temp));
  } while(ss);

  // preform logic
  if (inputs.size() > 2) {
    n = inputs[0];
    p1 = inputs[1];
    p2 = inputs[2];

    // check binary indecies
    bool same = ((n >> (p1 - 1)) & 1) == ((n >> (p2 - 1)) & 1);

    // output
    cout << "Are the binary indecies at " << p1 << " and " << p2 << " in the decimal " << n << " the same? " << (same ? "true" : "false") << endl;;
  }

  return 0;
}

// Test example: 45 [binary: 101101]
// binary indecies 1 & 4 and 6 & 1 and 4 & 6 would be true

