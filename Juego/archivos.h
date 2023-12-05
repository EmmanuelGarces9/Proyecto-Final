#ifndef ARCHIVOS_H
#define ARCHIVOS_H
#include <string>
#include <fstream>
#include <QDebug>
#include <stdexcept>
#include <chrono>


using namespace std;

class archivos
{
private:
    string file_name;
public:

    archivos();
    void write_file(int points, bool EorH);
    string read_file();

};
#endif // ARCHIVOS_H
