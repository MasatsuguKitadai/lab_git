/******************************************************************************
PROGRAM NAME :program_ma.c
AUTHER  : Masatsugu Kitadai
DATE    :
******************************************************************************/

// 移動平均 範囲
int range_ma = 5;

#include "20_moving_average.c"
#include "41_start_ma.c"
#include "51_finish_ma.c"
#include "61_lerp_ma.c"
#include "91_plot_ma.c"
/*********************************   MAIN   *********************************/
int main()
{
    // 2021/8/6
    // ma("C1", "210806");
    // ma("Groove_A", "210806");
    // ma("Groove_B", "210806");
    // ma("Groove_C", "210806");
    // ma("Groove_D", "210806");
    // ma("Normal", "210806");
    // ma("R1_17.9", "210806");
    // ma("R1_18.6", "210806");
    // ma("R1_19.3", "210806");

    start("C1", "210806");
    start("Groove_A", "210806");
    start("Groove_B", "210806");
    start("Groove_C", "210806");
    start("Groove_D", "210806");
    start("Normal", "210806");
    start("R1_17.9", "210806");
    start("R1_18.6", "210806");
    start("R1_19.3", "210806");

    finish("C1", "210806");
    finish("Groove_A", "210806");
    finish("Groove_B", "210806");
    finish("Groove_C", "210806");
    finish("Groove_D", "210806");
    finish("Normal", "210806");
    finish("R1_17.9", "210806");
    finish("R1_18.6", "210806");
    finish("R1_19.3", "210806");

    lerp("C1", "210806");
    lerp("Groove_A", "210806");
    lerp("Groove_B", "210806");
    lerp("Groove_C", "210806");
    lerp("Groove_D", "210806");
    lerp("Normal", "210806");
    lerp("R1_17.9", "210806");
    lerp("R1_18.6", "210806");
    lerp("R1_19.3", "210806");

    plot_ma("C1", "210806", "C1");
    plot_ma("Groove_A", "210806", "Groove A");
    plot_ma("Groove_B", "210806", "Groove B");
    plot_ma("Groove_C", "210806", "Groove C");
    plot_ma("Groove_D", "210806", "Groove D");
    plot_ma("Normal", "210806", "Normal");
    plot_ma("R1_17.9", "210806", "R1 17.9");
    plot_ma("R1_18.6", "210806", "R1 18.6");
    plot_ma("R1_19.3", "210806", "R1 19.3");

    return (0);
}