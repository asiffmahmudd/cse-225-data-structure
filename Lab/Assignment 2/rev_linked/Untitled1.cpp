#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head;
public:
    linked_list()
    {
        head = NULL;
    }
    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
        }
        else
        {
            tmp->next = head;
            head = tmp;
        }
    }
    void display(){
        node *tmp = head;
        while(tmp != NULL){
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);
    a.add_node(4);
    a.add_node(5);
    a.add_node(6);
    a.display();
    return 0;
}
