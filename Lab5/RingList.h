//---------------------------------------------------------------------------

#ifndef RingListH
#define RingListH

#include "DblLinkedList.h"
#include "Node.h"



template<class T>
class RingList: public DLList<T>
{

	Node<T>* current;
    
public:

	RingList();
	~RingList(){}
	void ShowAll(TListBox* LB){this->DLList<T>::Show(LB);}
	void Move(int i);
	void ShowCurrent(TLabel *label);
	void DeleteCurrent();
    
};

template<class T>
RingList<T>::RingList(): DLList<T>()
{

	this->head->prev = this->tail;
	this->tail->next = this->head;
	current = this->head;
    
}

template<class T>
void RingList<T>::Move(int i)
{
	if (!this->size)
		return;

	if (i == 1)
		current = current->next;
	else
		current = current->prev;

	if (current == this->head)
		current = this->tail->prev;
	else if (current == this->tail)
		current = this->head->next;
        
}

template<class T>
void RingList<T>::ShowCurrent(TLabel *label)
{

	if (!this->size)
		label->Caption = "Ничего";
        
	else
        label->Caption = (UnicodeString)current->data;
        
}

template<class T>
void RingList<T>::DeleteCurrent()
{
	if (!this->size)
	{
		ShowMessage("Пусто. Удалять нечего.");
        return;
	}

    current->prev->next = current->next;
	current->next->prev = current->prev;

	this->size--;
    
	Node<T> *tmp = current->prev;
    
	delete current;
    
	current = tmp;

	if (current == this->head){
       	current = this->tail->prev;
    }
	else if (current == this->tail){
         current = this->head->next;
    }
        
}







//---------------------------------------------------------------------------
#endif
