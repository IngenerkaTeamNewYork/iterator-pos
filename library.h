#ifndef ITERATOR_POS_LIBRARY_H
#define ITERATOR_POS_LIBRARY_H

#include <list>

template <class T>
struct iteratorPos {
    explicit iteratorPos(std::list<T> *list, T el) {
        auto iterTmp = list->begin();
        std::list<T> copy = *list; // Copying to temporary object so that we won't modify original list
        copy.unique(); // Make sure there isn't any duplicates
        unsigned int posTmp = 0;
        for (T element : copy) {
            posTmp++;
            if (element == el) {
                this->pos = --posTmp;
                iterTmp.operator++(pos);
                this->iter = --iterTmp;
            }
        }
    }
    unsigned int pos = 0;
    typename std::list<T>::iterator iter;
};

#endif