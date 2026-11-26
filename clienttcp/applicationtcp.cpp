#include "applicationtcp.h"
#include "ui_applicationtcp.h"

applicationtcp::applicationtcp(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::applicationtcp)
{
    ui->setupUi(this);
}

applicationtcp::~applicationtcp()
{
    delete ui;
}
