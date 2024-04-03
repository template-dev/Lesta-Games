#ifndef CCC03DA4_AE12_4E45_AF2A_851C0BA193C4
#define CCC03DA4_AE12_4E45_AF2A_851C0BA193C4

/*
  Достоинства:
    * Простота
    * Читаемость
  Недостатки:
    * Производительность
*/
bool isEven(int value)
{
  return value %2 == 0;
}

bool isEven2(int value)
{
  return (value & 1) == 0;
}

#endif /* CCC03DA4_AE12_4E45_AF2A_851C0BA193C4 */
