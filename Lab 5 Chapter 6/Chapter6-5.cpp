#include <iostream>
#include <queue>
#include <vector>
using namespace std;
// Define a tree node
struct Node {
char ch; // character

int freq; // frequency
Node *left, *right;
Node(char c, int f) : ch(c), freq(f), left(NULL), right(NULL) {}
};
// Compare two nodes based on frequency
struct Compare {
bool operator()(Node* a, Node* b) {
return a->freq > b->freq; // Min-heap
}
};
// Recursive function to print Huffman Codes
void printCodes(Node* root, string code) {
if (!root) return;
// If it's a leaf node (real character)
if (root->ch != '#')
cout << root->ch << " : " << code << endl;
// Recurse left with "0"
printCodes(root->left, code + "0");
// Recurse right with "1"
printCodes(root->right, code + "1");
}
int main() {
int n;
cout << "Enter number of characters: ";
cin >> n;
priority_queue<Node*, vector<Node*>, Compare> pq;
cout << "Enter characters and frequencies:\n";
for (int i = 0; i < n; i++) {
char ch;
int f;
cin >> ch >> f;
pq.push(new Node(ch, f));
}
// Build Huffman tree
while (pq.size() > 1) {
Node* left = pq.top(); pq.pop();
Node* right = pq.top(); pq.pop();
// Merge two smallest nodes
Node* newNode = new Node('#', left->freq + right->freq);
newNode->left = left;
newNode->right = right;
pq.push(newNode);
}
Node* root = pq.top();
cout << "Huffman Codes:\n";
printCodes(root, "");
return 0;
}