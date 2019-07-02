#ifndef UNSORTED_H_INCLUDED
#define UNSORTED_H_INCLUDED
template<class ItemType>
class UnsortedType{
struct NodeType{
ItemType info;
NodeType*next;
};
public:
    UnsortedType();
    ~UnsortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(ItemType& , bool&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void ResetList();
    void GetNextItem(ItemType&);
    void display();
private:
    NodeType*listData;
    int length;
    NodeType*currentpos;
};


#endif // UNSORTED_H_INCLUDED
