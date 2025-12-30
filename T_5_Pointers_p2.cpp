#include <iostream>
using namespace std;
typedef struct {
    const int* current;
    const int* end;
} ArrayIterator;

void show(ArrayIterator* lines);

int main() {
    int numbers[] = { 10, 25, 40, 55, 70 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    ArrayIterator it;
    it.current = numbers;
    it.end = numbers+size;

    cout << "Before func it.current: " << it.current << "\tand it.end: " << it.end << endl;
    cout<<"Elements of array:\n";
    show(&it);

    cout << "\nAfter func it.current: "<<it.current<<"\tand it.end: "<<it.end<<endl;
    return 0;
}

void show(ArrayIterator* lines) {
    while (lines->current < lines->end) {
        cout << *lines->current<<endl;
        lines->current++;
    }
}