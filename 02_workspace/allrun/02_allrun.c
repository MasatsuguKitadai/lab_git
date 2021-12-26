/******************************************************************************
PROGRAM NAME :allrun_testdata.c
AUTHER  : Masatsugu Kitadai
DATE    :
******************************************************************************/

#include <sys/stat.h>
#include "../programs/00_fft.c"
#include "../programs/01_reverse.c"
#include "../programs/02_drift.c"
#include "../programs/03_average.c"
#include "../programs/04_linear.c"
#include "../programs/05_summary.c"
#include "../programs/06_evaluation.c"
#include "../programs/07-1_fft_drag.c"
#include "../programs/07-2_fft_lift.c"
#include "../programs/08-1_phase-angle_drag.c"
#include "../programs/08-2_phase-angle_lift.c"
// #include "../programs/09_net-voltage.c"
#include "../programs/09_net-voltage_ver2.c"
#include "../programs/20_wave-adjuster.c"
#include "../programs/21_wave-adjuster_ver2.c"
#include "../programs/27-1_wave_fft_drag.c"
#include "../programs/27-2_wave_fft_lift.c"
#include "../programs/28-1_wave_phase-angle_drag.c"
#include "../programs/28-2_wave_phase-angle_lift.c"

/*********************************   MAIN   *********************************/
int directory(char date[])
{
    // ディレクトリの作成
    char directoryname[100];
    sprintf(directoryname, "../result/%s", date);
    mkdir(directoryname, S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IWGRP | S_IXGRP | S_IROTH | S_IXOTH | S_IXOTH);
}

int main()
{
    // make directory
    directory("test-fft");

    printf("\n---------------------------------------------------------------------------\n\n");

    // 01_reverse
    reverse("test-fft", "0");
    reverse("test-fft", "225");
    reverse("test-fft", "450");
    reverse("test-fft", "675");
    reverse("test-fft", "900");
    reverse("test-fft", "1125");
    reverse("test-fft", "1350");
    reverse("test-fft", "1575");
    reverse("test-fft", "1800");
    reverse("test-fft", "2025");
    reverse("test-fft", "2250");
    reverse("test-fft", "2475");
    reverse("test-fft", "2700");
    reverse("test-fft", "2925");
    reverse("test-fft", "3150");
    reverse("test-fft", "3375");

    printf("\n---------------------------------------------------------------------------\n\n");

    // 02_drift
    drift("test-fft", "0");
    drift("test-fft", "225");
    drift("test-fft", "450");
    drift("test-fft", "675");
    drift("test-fft", "900");
    drift("test-fft", "1125");
    drift("test-fft", "1350");
    drift("test-fft", "1575");
    drift("test-fft", "1800");
    drift("test-fft", "2025");
    drift("test-fft", "2250");
    drift("test-fft", "2475");
    drift("test-fft", "2700");
    drift("test-fft", "2925");
    drift("test-fft", "3150");
    drift("test-fft", "3375");

    printf("\n---------------------------------------------------------------------------\n\n");

    // 03_average
    average("test-fft", "0");
    average("test-fft", "225");
    average("test-fft", "450");
    average("test-fft", "675");
    average("test-fft", "900");
    average("test-fft", "1125");
    average("test-fft", "1350");
    average("test-fft", "1575");
    average("test-fft", "1800");
    average("test-fft", "2025");
    average("test-fft", "2250");
    average("test-fft", "2475");
    average("test-fft", "2700");
    average("test-fft", "2925");
    average("test-fft", "3150");
    average("test-fft", "3375");

    printf("\n---------------------------------------------------------------------------\n\n");

    // 04_linear
    linear("test-fft", "0");
    linear("test-fft", "225");
    linear("test-fft", "450");
    linear("test-fft", "675");
    linear("test-fft", "900");
    linear("test-fft", "1125");
    linear("test-fft", "1350");
    linear("test-fft", "1575");
    linear("test-fft", "1800");
    linear("test-fft", "2025");
    linear("test-fft", "2250");
    linear("test-fft", "2475");
    linear("test-fft", "2700");
    linear("test-fft", "2925");
    linear("test-fft", "3150");
    linear("test-fft", "3375");

    printf("\n---------------------------------------------------------------------------\n\n");

    // 05_summary
    summary("test-fft", 225);

    printf("\n---------------------------------------------------------------------------\n\n");

    // 06_evaluation
    evaluation("test-fft", 16);

    printf("\n---------------------------------------------------------------------------\n\n");

    // 07-1_fft_drag
    calculate_drag("test-fft", 16);

    printf("\n---------------------------------------------------------------------------\n\n");

    // 08-1_phase-angle_drag
    phase_angle_drag("test-fft");

    printf("\n---------------------------------------------------------------------------\n\n");

    // 07-2_fft_lift
    calculate_lift("test-fft", 16);

    printf("\n---------------------------------------------------------------------------\n\n");

    // 08-2_phase-angle_lift
    phase_angle_lift("test-fft");

    printf("\n---------------------------------------------------------------------------\n\n");

    // 09_net-voltage
    netvoltage("test-fft", 225);

    printf("\n---------------------------------------------------------------------------\n\n");

    // 20_wave-adjuster
    waveadjuster("test-fft");

    printf("\n---------------------------------------------------------------------------\n\n");

    // 21_wave-adjuster_ver2
    waveadjuster_ver2("test-fft");

    printf("\n---------------------------------------------------------------------------\n\n");

    // 27-1_wave_fft_drag
    calculate_drag_theory("test-fft", 16);

    printf("\n---------------------------------------------------------------------------\n\n");

    // 28-1_wave_phase-angle_drag
    phase_angle_drag_theory("test-fft");

    printf("\n---------------------------------------------------------------------------\n\n");

    // 27-2_wave_fft_lift
    calculate_lift_theory("test-fft", 16);

    printf("\n---------------------------------------------------------------------------\n\n");

    // 28-2_wave_phase-angle_lift
    phase_angle_lift_theory("test-fft");

    printf("\n---------------------------------------------------------------------------\n\n");

    return (0);
}