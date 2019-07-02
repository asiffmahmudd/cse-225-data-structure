#ifndef QUEUE_H
#define QUEUE_H

class queue
{
    int data[10];
    int front, rear;

    public:
        queue();
        void add(int x);
        void remove();
        void display();
};

#endif // QUEUE_H
