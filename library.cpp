#include "library.h"

template <class T>
iteratorPos::iteratorPos(std::unique_ptr<std::list<T>> list, std::unique_ptr<T> el) {
    std::list<T>::iterator iterTmp = list->begin();
    std::list<T> copy = *list; // Copying to temporary object so that we won't modify original list
    copy.unique(); // Make sure there isn't any duplicates
    unsigned int posTmp = 0;
    for (T element : copy) {
        posTmp++;
        if (element == *el) {
            this->pos = posTmp;
            iterTmp.operator++(pos);
            this->iter = iterTmp;
        }
    }
}