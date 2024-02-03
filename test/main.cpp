#include <QByteArray>
#include <QCache>
#include <QCoreApplication>
#include <QJsonArray>
#include <QJsonObject>
#include <QQueue>
#include <QStack>
#include <QVariant>

void testVector() {
  QVector<QString> vec;
  vec.append("1");
}

void testList() {
  QList<QString> list;
  list.append("1");
}

void testStack() {
  QStack<QString> stack;
  stack.push("1");
}

void testQueue() {
  QQueue<QString> queue;
  queue.enqueue("1");
}

void testQMap() {
  QMap<QString, QString> map;
  map.insert("1", "1");
}

void testQulitMap() {
  QMultiMap<QString, QString> multiMap;
  multiMap.insert("1", "1");
}

void testQHash() {
  QHash<QString, QString> hash;
  hash.insert("1", "1");
}

void testQMultiHash() {
  QMultiHash<QString, QString> multiHash;
  multiHash.insert("1", "1");
}

void testQSet() {
  QSet<QString> set;
  set.insert("1");
}

void testQString() {
  QString str;
  str = "1";
}

void testQStringList() {
  QStringList list;
  list.append("1");
}

void testQByteArray() {
  QByteArray array;
  array = "1";
}

void testQVariant() {
  QVariant var;
  var = "1";
}

void testQDate() {
  QDate date;
  date = QDate::currentDate();
}

void testQTime() {
  QTime time;
  time = QTime::currentTime();
}

void testQDateTime() {
  QDateTime dateTime;
  dateTime = QDateTime::currentDateTime();
}

void testQUrl() {
  QUrl url;
  url = "1";
}

void testQUuid() {
  QUuid uuid;
  uuid = QUuid::createUuid();
}

void testQCache() {
  QCache<QString, QString> cache;
  cache.insert("1", new QString("1"));
}

void testQJsonObject() {
  QJsonObject obj;

  obj.insert("key", "1");
  auto map = obj.toVariantMap();
}

void testQJsonArray() {
  QJsonArray array;
  array = QJsonArray::fromStringList(QStringList("123"));
}

int main(int argc, char *argv[]) {
  testVector();
  testList();
  testStack();
  testQueue();
  testQMap();
  testQulitMap();
  testQHash();
  testQMultiHash();
  testQSet();
  testQString();
  testQStringList();
  testQByteArray();
  testQVariant();
  testQDate();
  testQTime();
  testQDateTime();
  testQUrl();
  testQUuid();
  testQCache();
  testQJsonObject();
  testQJsonArray();
}
