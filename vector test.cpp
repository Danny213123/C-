#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<vector<int>>twoDimensisons;

  for (int i = 0; i < 5; i++){
    vector<int>temp;
    for (int j = 0; j < 5; j++){
      temp.push_back(i);
    }
    twoDimensisons.push_back(temp);
  }

  for (int i = 0; i < twoDimensisons.size(); i++){
    for (int j = 0; j < twoDimensisons[i].size(); j++){
      cout << twoDimensisons[i][j];
    }
    cout << endl;
  }
}
