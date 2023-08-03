#ifndef PLAYBACKSETTINGBLK_H
#define PLAYBACKSETTINGBLK_H

#include <QWidget>

namespace Ui {
class playbackSettingBlk;
}

class playbackSettingBlk : public QWidget
{
    Q_OBJECT

public:
    explicit playbackSettingBlk(QWidget *parent = nullptr);
    ~playbackSettingBlk();

private:
    Ui::playbackSettingBlk *ui;

};

#endif // PLAYBACKSETTINGBLK_H
