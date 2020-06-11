//---------------------------------------------------------------------------

#ifndef ExtentionHashTableH
#define ExtentionHashTableH
//---------------------------------------------------------------------------

#include "MyHashTable.h"

class ExtHT: private HashTable
{

 public:
	void ShowMostRepKeys(TLabel* l)
	{
        l->Caption = _T("");
		int max = 0;
        
		for (int i = 0; i < size; i++)
			if (max < table[i].Size())
				max = table[i].Size();
		for (int i = 0; i < size; i++)
			if (table[i].Size() == max)
				l->Caption += IntToStr(i + 1) + "; ";
	}
};

#endif
