#include "mainwindow.h"
#include "widgetcontainer.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
  setCentralWidget(WidgetContainer::createContainer("retroarch.exe"));
  this->setFocusPolicy(Qt::ClickFocus);
}

MainWindow::~MainWindow() {}
