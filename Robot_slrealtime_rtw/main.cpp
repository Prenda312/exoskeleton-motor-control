/* Main generated for Simulink Real-Time model Robot */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "Robot.h"
#include "rte_Robot_parameters.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(Robot_step), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo Robot_Info =
{
    "Robot",
    Robot_initialize,
    Robot_terminate,
    []()->char const*& { return Robot_M->errorStatus; },
    []()->unsigned char& { return Robot_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, Robot_Info);
}
