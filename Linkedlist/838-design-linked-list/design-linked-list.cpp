class MyLinkedList {
public:
    struct Node {
        int val;
        Node* next;
        Node(int x) {
            val = x;
            next = NULL;
        }
    };

    Node* dummy;
    int size;

    MyLinkedList() {
        dummy = new Node(0);   // dummy head
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;

        Node* cur = dummy->next;
        for (int i = 0; i < index; i++)
            cur = cur->next;

        return cur->val;
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(size, val);
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;

        Node* prev = dummy;
        for (int i = 0; i < index; i++)
            prev = prev->next;

        Node* node = new Node(val);
        node->next = prev->next;
        prev->next = node;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        Node* prev = dummy;
        for (int i = 0; i < index; i++)
            prev = prev->next;

        Node* del = prev->next;
        prev->next = del->next;
        delete del;
        size--;
    }
};
