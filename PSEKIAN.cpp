#include <iostream>
#include <vector> //memanggil fungsi addEdge dan push_back

using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int x){
    for (int v = 0; v < x; ++v){
        cout << "Node" << v << "terhubung dengan node: ";
        for(vector<int>::iterator i = adj[v].begin(); i != adj[v].end(); ){
            cout << *i << " ";
            cout << endl;
        }

    }
} 

int main(){
    const int x = 7;
    vector <int> adj[x];

    addEdge(adj, 0,1);
    addEdge(adj, 0,4);
    addEdge(adj, 1,2);
    addEdge(adj, 1,3);
    addEdge(adj, 1,4);
    addEdge(adj, 2,3);
    addEdge(adj, 3,4);

    printGraph(adj, x);
}

