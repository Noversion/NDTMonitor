#ifndef DLG_H
#define DLG_H

#include <QWidget>

namespace Ui {
class dlg;
}

class dlg : public QWidget
{
    Q_OBJECT

public:



    explicit dlg(QWidget *parent = nullptr);
    ~dlg();

private:
    Ui::dlg *ui;
};

#endif // DLG_H
