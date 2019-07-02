#ifndef QUEUE_H
#define QUEUE_H


class queue
{
    public:
        queue();
        void Enqueue(int x);
        void dequeue();
        int topelement();
        void display();
    private:
        int front;
        int rear;
        int a[50];
};

#endif // QUEUE_H
