#ifndef SEVERVIEW_H
#define SEVERVIEW_H

#include <QWidget>

namespace Ui {
class severView;
}

class severView : public QWidget
{
    Q_OBJECT

public:
    explicit severView(QWidget *parent = nullptr);
    ~severView();

private:
    Ui::severView *ui;
};

#endif // SEVERVIEW_H
