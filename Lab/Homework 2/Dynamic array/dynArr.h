#ifndef DYNARR_H
#define DYNARR_H


class dynArr
{
    public:
        dynArr();
        dynArr(int,int);
        ~dynArr();
        void setValue(int,int,int);
        int getValue(int,int);

    private:
        int **data;
        int row;
        int col;
};

#endif // DYNARR_H
