#include "archivos.h"

archivos::archivos()
{
    file_name="historial.txt";
}

void archivos::write_file(int points)
{
    fstream archivo;
        try{
            archivo.open(file_name, ios::app);
            if (!archivo.is_open()){
                throw runtime_error("No se pudo abrir el archivo.");
            }
            auto now = std::chrono::system_clock::now();
            time_t end_time = std::chrono::system_clock::to_time_t(now);
            archivo<<"\nEn la fecha:"<<ctime(&end_time)<<" usted jugó y su máximo puntaje fue: "<<points<<'\n';
            archivo.close();
            qDebug()<<"Se ha escrito el archivo";
        }
        catch (const exception& e){
            qDebug()<<e.what();
        }
}
