#ifndef TASK1_H
#define TASK1_H

#include "commun_task.h"
/*!
 * Пространство имен, соответсвующее этому году
 */
namespace mvms_2017
{
class Task1: public Commun_Task
{
public:
    Task1(bool verbose);
    /*!
     * \brief drawCircle Загрузить изображение в память. Поверх загруженного изображения, написать алгоритм рисования окружности без использования функций opencv. Параметры x,y,r.
     * \param filename Путь к изображению
     * \param x координаты центра
     * \param y
     * \param r радиус
     * \return изображение с нарисованных белым цветом примитивом
     */
    virtual cv::Mat drawCircle(std::string filename,float x,float y,float r);

    //Загрузить изображение в память. Поверх загруженного изображения, написать алгоритм рисования прямоугольника без использования функций opencv. Параметры x,y,w,h.
    /*!
     * \brief drawRectangle
     * \param filename Путь к изображению
     * \param x координаты верхего левого угла
     * \param y
     * \param w ширина
     * \param h высота
     * \return изображение с нарисованных белым цветом примитивом
     */
    virtual cv::Mat drawRectangle(std::string filename,float x,float y,float w,float h);

    //Загрузить изображение в память. Поверх загруженного изображения, написать алгоритм рисования эллипса без использования функций opencv. Параметры x,y,r1,r2.
    /*!
     * \brief drawEllipse
     * \param filename Путь к изображению
     * \param x координаты центра
     * \param y
     * \param r1 длина полуоси вдоль ОХ
     * \param r2 длина полуоси вдоль ОY
     * \return изображение с нарисованных белым цветом примитивом
     */
    virtual cv::Mat drawEllipse(std::string filename,float x,float y,float r1,float r2);
    //Загрузить изображение в память. Поверх загруженного изображения, написать алгоритм рисования треугольника без использования функций opencv. Параметры x1,y1,x2,y2,x3,y3.
    /*!
     * \brief drawTriangle нарисовать треугольник поверх изображения
     * \param filename Путь к изображению
     * \param x1 координаты точек
     * \param y1
     * \param x2
     * \param y2
     * \param x3
     * \param y3
     * \return изображение с нарисованных белым цветом примитивом
     */
    virtual cv::Mat drawTriangle(std::string filename,float x1,float y1,float x2,float y2,float x3,float y3);
    //Загрузить изображение в память. Поверх загруженного изображения, написать алгоритм рисования трапеции без использования функций opencv. Параметры x,y, w,h,l.
    /*!
     * \brief drawTrapeze Трапеция со сторонами параллельными оси OX
     * \param filename Путь к изображению.
     * \param x координаты верхего левого угла
     * \param y
     * \param w ширина верха параллельна OX
     * \param h ширина низа параллельна OX
     * \param l длинна боковой стороны
     * \return изображение с нарисованных белым цветом примитивом
     */
    virtual cv::Mat drawTrapeze(std::string filename,float x,float y,float w,float h,float l);
    //Загрузить изображение в память. Поверх загруженного изображения, написать алгоритм рисования параллелепипед без использования функций opencv. Параметры x1,y1,x2,y2,w
    /*!
     * \brief drawParallelepiped Параллелипипед с основание параллельным оси OX
     * \param filename Путь к изображению.
     * \param x координаты верхего левого угла
     * \param y
     * \param w ширина
     * \param h длинна стороны не параллельной оси OX
     * \param alfa угол в градусах между осью OX и стороной параллепипеда.
     * \return изображение с нарисованных белым цветом примитивом
     */
    virtual cv::Mat drawParallelepiped(std::string filename,float x,float y,float w,float h,float alfa);

    /*!
     * Построить гистограмму загруженного изображения.
     * Параметры N - количество карманов в гистограмме.
     * \param filename Путь к изображению.
     * \param binsize размер кармана гистограммы (сколько значений яркости попадает)
     * \return внешний список каналы, внутренний гистограммы по каждому каналу
     */
    virtual std::vector<std::vector<float> > calcHistogramm(std::string filename,int binsize);


};
}

#endif // TASK1_H
