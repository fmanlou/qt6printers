#include <QCoreApplication>
#include <QVariant>

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  QMap<QString, QVariant> map;

  QString str("123");

  map.insert(str, 4);

  return a.exec();
}
