#include <iostream>     // - �Է� & ����� ���� ���
#include <thread>       // - ������ ����� ���� ���

using namespace std;    // - ǥ������ Ŭ���� ���

// - �Լ� ����
void PrintTreadID()
{
    // - ����� ���
    cout << "������ ID : " << this_thread::get_id() << endl;
}

int main()
{
    // - �Լ��� ������� ����
    thread t1(PrintTreadID);

    // - �����尡 ����� �� ���� ���
    t1.join();

    // - ���α׷� ����
    return 0;
}