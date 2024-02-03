# qt6printers

helper.py qt.py文件是从kde的KDevelop的开源项目中获取

https://github.com/KDE/kdevelop/tree/master/plugins/gdb/printers

## 用法

``` bash
cp install/.gdb ~ -r
cp install/.gdbinit ~
```

## 支持数据类型
- [x] QVector
- [x] QList
- [ ] QStack
- [x] QQueue
- [x] QMap
- [x] QMultiMap
- [x] QHash
- [ ] QMultiHash
- [ ] QSet
- [x] QString
- [x] QStringList
- [x] QByteArray
- [x] QVariant
- [x] QDate
- [x] QTime
- [x] QDateTime
- [x] QUrl
- [x] QUuid
- [ ] QCache
- [x] QJsonObject（有点问题）
- [x] QJsonArray

## 验证环境
Ubuntu 22.04 g++-11

## 参考资料
https://github.com/qt-creator/qt-creator/tree/master/share/qtcreator/debugger

https://github.com/Lekensteyn/qt5printers

/usr/share/gcc/python/libstdcxx/