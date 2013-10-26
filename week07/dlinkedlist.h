#ifndef __FS__DLINKEDLIST_H__
#define __FS__DLINKEDLIST_H__
namespace oop344 {

	class Node {
		Node* _next;
		Node* _prev;
		int _data;
		Node(int data,Node* prev=(Node*)0,Node* next=(Node*)0) : _data(data){
			_next=next;
			_prev=prev;
		}
	};

	class DLinkedlist {
		Node* _head;
		Node* _tail;
		Node* _curr;
	public:
		DLinkedlist();
		void add(int data);
		int visit();
		void del(); //maybe int del(), or even bool del();
		void insertAfter(int data);
		void insertBefore(int data);
		bool goNext();
		bool goPrev();
		bool goHead();
		bool goTail();
		bool isEmpty();
		~DLinkedlist();
	};
}
#endif
