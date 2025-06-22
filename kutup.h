#ifndef KUTUP_H
#define KUTUP_H

#include <QMainWindow>
#include <QWidget>
#include <QString>

class kutup : public QWidget
{
    Q_OBJECT

public:
    kutup(QWidget *parent = nullptr);
    ~kutup();
};
#endif // KUTUP_H
