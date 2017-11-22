#ifndef ITERATOR_POS_LIBRARY_H
#define ITERATOR_POS_LIBRARY_H

#include <list>
#include <bits/unique_ptr.h>

template <class T>
struct iteratorPos {
    explicit iteratorPos(std::unique_ptr<std::list<T>> list, std::unique_ptr<T> el);
    unsigned int pos = 0;
    std::list<T>::iterator iter;
};

#endif