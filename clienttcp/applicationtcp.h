#ifndef APPLICATIONTCP_H
#define APPLICATIONTCP_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class applicationtcp;
}
QT_END_NAMESPACE

class applicationtcp : public QWidget
{
    Q_OBJECT

public:
    explicit applicationtcp(QWidget *parent = nullptr);
    ~applicationtcp() override;

private:
    Ui::applicationtcp *ui;
};
#endif // APPLICATIONTCP_H
