#ifndef _SELECTION_H_
#define _SELECTION_H_

class cselection{
    public:
        cselection(); // construcotr
        virtual ~cselection(); // destructor
        void show(int *num);
        void ssort(int *num);
        void swap(int *x, int *y);
        int size = 10;
};

#endif