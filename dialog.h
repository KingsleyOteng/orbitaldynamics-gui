#ifndef DIALOG_H
#define DIALOG_H

#//include <QDeclarativeItem>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE



class DialogData;

class Dialog : public QDialog
{
    Q_OBJECT
public:

    Dialog();
    Dialog(const Dialog &);
    Dialog &operator=(const Dialog &);
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    QSharedDataPointer<DialogData> data;
    Ui::Dialog *ui;

protected:
    void paintEvent(QPaintEvent *e);
};

#endif // DIALOG_H
