#include <iostream>
#include <cstring>

class FooString {
    char *buf;
public:
    FooString(char *tbuf) {
        buf = tbuf;
    }
    ~FooString() {}

    bool compare(char *str) {

        int strLen = strlen(str);
        if (strLen != strlen(buf)) {
            return false;
        }

        for (int i = 0; i < strLen; i++) {
            if (str[i] != buf[i]) {
                return false;
            }
        }

        return true;
    }

    int length() {
        return strlen(buf);
    }

};

int main() {
    FooString a("123456");
    bool result = a.compare("234567");
    bool expected = false;
    if (result == expected) {
        std::cout << "Test1 completed!" << std::endl;
    }
    FooString b("Angelinochka");
    result = b.compare("Angelinochka");
    expected = true;
    if (result == expected) {
        std::cout << "Test2 completed!" << std::endl;
    }

    FooString d("Angelinochka");
    result = d.compare("Angelinochka1");
    expected = false;
    if (result == expected) {
        std::cout << "Test3 completed!" << std::endl;
    }
    std::cout << "Tests finished!" << std::endl;
    return 0;
}
