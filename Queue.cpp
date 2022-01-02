
//اذا مررت من هنا فادعو الله ان ييسر لي امري
#include<iostream>
using namespace std;
#define maxsize 10000
class queue {
private:
	int floor, rear, arr[maxsize];
public:
	queue() { floor = -1, rear = -1; }
	void enqueue(int value);
	int dequeue();
	bool isEmpty();
	bool isFull();
	void display();
};
int main()
{
	queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.dequeue();
	q.display();//20  30  40  50
	return 0;
}
void queue::enqueue(int value)
{
	if (isFull()) {
		cout << "Queue is Full" << endl;
		exit(-1);
	}
	if (floor == -1 and rear == -1) {
		floor++;
		arr[++rear] = value;
	}
	else {
		arr[++rear] = value;
	}
}
int queue::dequeue()
{
	if (isEmpty()) {
		cout << "Queue is Empty" << endl;
		exit(-1);
	}
	return arr[floor++];
}
// This Expression and is equal  && 
bool queue::isEmpty()
{
	if (floor == -1 && rear == -1 and floor <=rear)return true;
		return false;
}
bool queue::isFull()
{
	if (rear == maxsize - 1)return true;
	return false;
}

void queue::display()
{
	if (isEmpty()) {
		cout << "Queue is Empty" << endl;
		exit(-1);
	}
	for (int i = floor;i <= rear;i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
