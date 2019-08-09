#include "mainwindow.h"
#include <QApplication>
#include <QMouseEvent>
#include <QThread>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  QThread::sleep(3);
  QMouseEvent e(QEvent::MouseButtonPress, QPoint(2, 3),
                Qt::MouseButton::LeftButton, 0, 0);
  QApplication::sendEvent(&w, &e);

  return a.exec();
}
