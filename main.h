#ifndef NTDMAIN_H
#define NTDMAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class NTDMain; }
QT_END_NAMESPACE

class NTDMain : public QMainWindow
{
    Q_OBJECT

public:
    NTDMain(QWidget *parent = nullptr);
    ~NTDMain();

private:
    Ui::NTDMain *ui;
};
#endif // NTDMAIN_H
