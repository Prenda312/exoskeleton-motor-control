/* Model wrapper function used by example main program */

void TestStructure_step(int_T tid)
{
  switch (tid) {
   case 0 :
    Periodic_Task_step();
    break;

   case 1 :
    Periodic_Task1_step();
    break;

   default :
    break;
  }
}
