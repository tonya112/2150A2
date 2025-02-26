#ifndef LISTITEM_H
#define LISTITEM_H


class ListItem {
public:
    virtual bool compare(ListItem* other) = 0;

    virtual ~ListItem() = default;

};

#endif //LISTITEM_H
