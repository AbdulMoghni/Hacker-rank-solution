#include <iostream>
using namespace std;
class Queue(){
	int *arr;
	int f,r,cs,ms;//f-front, r-rear, cs-current size, ms-maximum size

public:
	Queue(int ds=5){//default size;
		arr = new int[ds];
		cs=0;
		ms=ds;
		f=0;
		r=ds-1;
	}

	bool full(){
		return cs==ms;
	}

	bool empty(){
		return cs==0;
	}
	void push(int data){
		if(!full()){
			r=(r+1)%ms;
			arr[r]=data;
			cs++;
		}
	}
	void pop(){
		if(!empty()){
			f=(f+1)%ms;
			cs--
		}
	}
	int front(){
			return arr[f];
	}
	~Queue(){
		if(arr!=NULL){
			delete[] arr;
			arr=NULL;
		}
	}

void printQueue(Queue q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

};
int main(){
	Queue q;
	for(int i=1;i<=6;i++){
		q.push(i);
	}
	printQueue(q);
	return 0;
}

