#include <QCoreApplication>
#include <QJsonArray>
#include <QJsonObject>
#include <QVariant>

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  QMap<QString, QVariant> map;

  QString str("123");

  map.insert(str, 4);

  QJsonObject obj;

  obj.insert("key", "1");

  QJsonArray array = QJsonArray::fromStringList(QStringList("123"));

  return a.exec();
}
