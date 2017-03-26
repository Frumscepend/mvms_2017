#ifndef TASK4_H
#define TASK4_H

#include "commun_task.h"
/*!
 * Пространство имен, соответсвующее этому году
 */
namespace mvms_2017
{
class Task4 : public Commun_Task
{
public:
    Task4(bool verbose);

    /*!
     * \brief Harris Реализовать детектор особых точек Харриса
     * \param grayimage серое изображение
     * \param window_size размер окна
     * \return значение
     */
    cv::Mat Harris(cv::Mat grayimage,int window_size);

    /*!
     * \brief LoG Реализовать  многомасштабный детектор пятен
     * \param grayimage серое изображение
     * \param minscale минимальный масштаб
     * \param maxscale максимальный масштаб
     * \return карта откликов на Лапласиан гауссиана на разных масштабах
     */
    cv::Mat LoG(cv::Mat grayimage,int minscale,int maxscale);
    //
    /*!
     * \brief HoG Построение гистограммы ориентированных градиентов
     * \param grayimage ерое изображение
     * \param nbins количество карманов гистограммы
     * \param orientation выравниевание по ориентации true - включено, false - выключено.
     * \return гистограмму
     */
    std::vector<float> HoG(cv::Mat grayimage,int nbins,bool orientation);
    /*!
     * \brief Surf Алгоритм построение SURF дескриптора для области
     * \param grayimage серое изображение
     * \return
     */
    cv::Mat Surf(cv::Mat grayimage);
    //
    /*!
     * \brief brief Построение бинарного дескриптора
     * \param grayimage серое изображение
     * \param pts точки в котором расчитываемся бинарный дескриптор
     * \param pattern шаблон
     * \return
     */
    cv::Mat brief(cv::Mat grayimage,std::vector<cv::Point2i> pts,std::vector<std::pair<cv::Point2i,cv::Point2i> > pattern);
    /*!
     * \brief bruteForceHamming Реализовать свой Brute-Force Matcher в метрике L2
     * \param query матрица дескрипторов по строкам.
     * \param train матрица дескрипторов по строкам.
     * \return пары с наименьшим попарным растоянием
     */
    std::vector<cv::DMatch> bruteForceL2(cv::Mat query,cv::Mat train);
    /*!
     * \brief bruteForceHamming Реализовать свой Brute-Force Matcher в метрике Hamming
     * \param query матрица дескрипторов по строкам.
     * \param train матрица дескрипторов по строкам.
     * \return пары с наименьшим попарным растоянием
     */
    std::vector<cv::DMatch> bruteForceHamming(cv::Mat query,cv::Mat train);
};
}

#endif // TASK4_H
