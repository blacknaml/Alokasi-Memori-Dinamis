#include <QtCore/QCoreApplication>
#include <QObject>
#include <QDebug>

using namespace std;

class Mahasiswa : QObject
{
public:
    Mahasiswa(const QString &nim, QObject *parent=0);
    const QString &nim() const;
    void setNim(const QString &nim);
    int getNimLength() const;
private:
    QString _nim;
};

Mahasiswa::Mahasiswa(const QString &nim, QObject *parent){
    _nim = nim;
}

const QString &Mahasiswa::nim() const {
    return _nim;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
