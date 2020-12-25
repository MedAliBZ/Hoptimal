#include "loginfinale.h"

loginFinale::loginFinale(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant loginFinale::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex loginFinale::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex loginFinale::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int loginFinale::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int loginFinale::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant loginFinale::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
