class MyLinkedList {
    struct node{
            int val;
            node* next;
        };
        node* head;
        int size;
public:
    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    
    int get(int index) {
        if(index<0 || index>=size)
        {
            return -1;
        }
        node* current=head;
        for(int i=0;i<index;i++)
        {
            current=current->next;
        }
        return current->val;
    }
    
    void addAtHead(int val) {
        node* newNode=new node(val);
        newNode->next=head;
        head=newNode;
        size++;
    }
    
    void addAtTail(int val) {
        node* newNode=new node(val);
        if(!head){
            head=newNode;
        }
        else{
            node* current=head;
            while(current->next)
            {
                current=current->next;
            }
                 current->next=newNode;
        }
        size++;
    }
   
    void addAtIndex(int index, int val) {
     if(index<0 || index>size) {
        return;
     }  
     if(index==0){
        addAtHead(val);
        return;
     }
     node* newNode=new node(val);
     node* current=head;
     for(int i=0;i<index-1;i++)
     {
        current=current->next;
     }
     newNode->next=current->next;
     current->next = newNode;
     size++;
    }
    
    void deleteAtIndex(int index) {
         if (index < 0 || index >= size) return;
        if (index == 0) {
            node* temp = head;
            head = head->next;
            delete temp;
        } else {
            node* current = head;
            for (int i = 0; i < index - 1; ++i)
                current = current->next;
            node* toDelete = current->next;
            current->next = toDelete->next;
            delete toDelete;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */