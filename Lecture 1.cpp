#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Node* copyRandomList(Node* head) {
    unordered_map<Node*, Node*> mp;
    auto dummy = new Node(-1);
    auto dummyHead = dummy;
    auto hd = head;
    while(hd!=NULL){
        auto nd = new Node(hd->val);
        mp[hd] = nd;
        dummy->next = nd;
        hd = hd->next;
        dummy = dummy->next;
    }
    dummy = dummyHead->next;
    hd=head;
    while(dummy!=NULL){
        dummy->random=mp[hd->random];
        hd = hd->next;
        dummy = dummy->next;
    }
    return dummyHead -> next;
}

int main() {
    
    return 0;
}