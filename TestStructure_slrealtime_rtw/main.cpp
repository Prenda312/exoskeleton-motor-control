/* Main generated for Simulink Real-Time model TestStructure */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "TestStructure.h"
#include "rte_TestStructure_parameters.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(Periodic_Task_step), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 40);
slrealtime::TaskInfo task_2( 0u, std::bind(Periodic_Task1_step), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo TestStructure_Info =
{
    "TestStructure",
    TestStructure_initialize,
    TestStructure_terminate,
    []()->char const*& { return TestStructure_M->errorStatus; },
    []()->unsigned char& { return TestStructure_M->Timing.stopRequestedFlag; },
    { task_1, task_2 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, TestStructure_Info);
}
