#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H


template <class ItemType>
class UnsortedType
{
    struct NodeType{
        ItemType info;
        NodeType* next;
    };

    public:
        UnsortedType();
        int LenghtIs();
        bool IsFull();
        void InsertItem(ItemType item);
        void DeleteItem(ItemType item);
        void DisplayMax();

    private:
        NodeType* listData;
        int length;
        NodeType* currentPos;
};

#endif // UNSORTEDTYPE_H
