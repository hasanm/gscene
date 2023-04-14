#ifndef MYGRAPHICVIEW_H
#define MYGRAPHICVIEW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDir>
#include <QFile>
#include <QCloseEvent>
#include <QMessageBox>
#include <QSettings>
#include <QImage>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>

class MyGraphicsView : public QGraphicsView
{
    Q_OBJECT
 public:
    explicit MyGraphicsView (QWidget *parent = nullptr);
    ~MyGraphicsView();

protected:

private slots:

private:

    
    
};

#endif // MYGRAPHICVIEW_H
