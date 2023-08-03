#ifndef VIEWSETTINGBLK_H
#define VIEWSETTINGBLK_H

#include <QWidget>

namespace Ui {
class viewSettingBlk;
}

class viewSettingBlk : public QWidget
{
    Q_OBJECT

public:
    explicit viewSettingBlk(QWidget *parent = nullptr);
    ~viewSettingBlk();

private:
    Ui::viewSettingBlk *ui;
};

#endif // VIEWSETTINGBLK_H
