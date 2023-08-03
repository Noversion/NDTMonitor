#ifndef UP_WD_H
#define UP_WD_H

#include <QWidget>

namespace Ui {
class up_wd;
}

class up_wd : public QWidget
{
    Q_OBJECT

public:
    explicit up_wd(QWidget *parent = nullptr);
    ~up_wd();

private slots:
    void on_startServerBtn_clicked();

private:
    Ui::up_wd *ui;
};

#endif // UP_WD_H
