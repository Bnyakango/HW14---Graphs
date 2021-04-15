/**
 * @file main.cpp
 * @brief This is a test of CMake, doxygen, and GitHub.
 * @details This is the long brief at the top of main.cpp.
 * @author Benson Nyakango
 * @date 3/30/21
 * 
 */

#include <iostream>
#include <queue>
using namespace std;

class Graph {
private:
    int n; 
    vector<vector<bool> > a;
public:
    Graph(int n0) {
        n = n0;
        for(int i = 0; i < n; i++) {
            vector <bool> row(n, false);
            a.push_back(row);
        }
    }

  void addEdge(int i, int j) {
        a[i][j] = true;
    }

    void removeEdge(int i, int j) {
        a[i][j] = false;
    }

    bool hasEdge(int i, int j) {
        return a[i][j];
    }

    void outEdges(int i, vector <int> &edges) {
        for (int j = 0; j < n; j++)
            if (a[i][j]) edges.push_back(j);
    }
    void inEdges(int i, vector <int> &edges) {
        for (int j = 0; j < n; j++)
            if (a[j][i]) edges.push_back(j);
    }

  void printGraph() {
    for (int i = 0; i < n; i++) {
      cout << i << ":\t";
      for (int j = 0; j < n; j++){
        cout << a[i][j] << "\t";
      }
      cout << "\n";
    }
  }

};

int main() {
  Graph g(12);

  g.addEdge(0, 1);
  g.addEdge();
  

  g.printGraph();
}
