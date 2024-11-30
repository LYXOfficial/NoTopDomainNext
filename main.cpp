#include "main.h"
#include "ui_main.h"
#include <QApplication>

NTDMain::NTDMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NTDMain)
{
    ui->setupUi(this);
}

NTDMain::~NTDMain()
{
    delete ui;
}

int main(int argc,char* argv[]){
    QApplication a(argc,argv);
    NTDMain ntd;
    ntd.show();
    return a.exec();
}
