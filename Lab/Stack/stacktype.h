#ifndef STACKTYPE_H
#define STACKTYPE_H

const int Max_Items = 5;

template <class ItemType>
class stacktype
{
    public:
        stacktype();
        bool IsFull();
        bool IsEmpty();
        void Push(ItemType);
        void Pop();
        ItemType Top();
        void display();

    private:
        int top;
        ItemType items[Max_Items];
};

#endif // STACKTYPE_H
