class BST {
private:
    struct Node {
        int val;
        Node* right{nullptr};
        Node* left{nullptr};
    }
public:
    void insert(int value);
    bool find(int value);
    bool del(int value);
    void print(bool order=true);
private:
    Node* root_{nullptr};

};
