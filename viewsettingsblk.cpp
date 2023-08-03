#include "viewsettingsblk.h"

viewSettingsBlk::viewSettingsBlk(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant viewSettingsBlk::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex viewSettingsBlk::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex viewSettingsBlk::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int viewSettingsBlk::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int viewSettingsBlk::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant viewSettingsBlk::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
