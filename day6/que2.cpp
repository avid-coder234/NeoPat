Mark is designing a scheduling system for a conference, where each session is represented as a vertex in a graph. The sessions are connected by edges, indicating that they cannot be scheduled at the same time. He needs to determine if the sessions can be assigned a set of time slots (represented by colors) such that no two conflicting sessions are scheduled at the same time.



If possible, the program should print the assigned time slots (colors) for each session; otherwise, it should indicate that no valid scheduling is possible with the given number of time slots.

Input format :
The first line of the input contains an integer V, representing the number of vertices in the graph.

The next V lines of the input contain the adjacency matrix of the graph, where each line consists of V space-separated integers (0 or 1) representing the presence or absence of edges between vertices.

The last line of the input contains an integer m, representing the number of colors available for coloring.

Output format :
If a valid coloring exists, the output prints the assigned colors for each vertex, separated by spaces as integers.

If no valid coloring exists, the output prints "Solution does not exist".



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases fall under the following specifications:

1 ≤ V ≤ 100

1 ≤ m ≤ V

Sample test cases :
Input 1 :
5
0 1 0 1 0
1 0 1 0 0
0 1 0 1 1
1 0 1 0 1
0 0 1 1 0
3
Output 1 :
1 2 1 2 3 
Input 2 :
3
0 1 1
1 0 1
1 1 0
2
Output 2 :
Solution does not exist
Input 3 :
3
0 1 0
1 0 1
0 1 0
2

#include <iostream>
#include <vector>
using namespace std;

int V;
vector<vector<int>> graph;
vector<int> color;
bool isSafe(int v, int c) {

        for(int i = 0 ; i < V ; i++){
        if(graph[v][i] == 1 && c == color[i]){
        return false;
        }
    }

    return true;
}

bool graphColoring(int m , int v){
    if(v == V) return true;
    
    for(int c = 1 ; c <= m ; c++){
        if(isSafe(v,c)){
            color[v] = c;
            if(graphColoring(m,v+1)) return true;
        }
        color[v] = 0;
    }
    
    return false;
}


int main() {
    cin >> V;
    graph.resize(V, vector<int>(V));
    color.resize(V, 0);

    // Input adjacency matrix
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    int m;
    cin >> m;

    if (graphColoring(m, 0)) {
        for (int i = 0; i < V; i++) {
            cout << color[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Solution does not exist";
    }

    return 0;
}
