#ifndef CHATWIDGET_H
#define CHATWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ChatWidget; }
QT_END_NAMESPACE

class ChatWidget : public QWidget
{
    Q_OBJECT

public:
    ChatWidget(QWidget *parent = nullptr);
    ~ChatWidget();

private:
    Ui::ChatWidget *ui;
};
#endif // CHATWIDGET_H
