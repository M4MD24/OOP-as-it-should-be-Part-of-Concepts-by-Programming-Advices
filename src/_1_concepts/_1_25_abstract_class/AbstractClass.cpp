#include <iostream>
using namespace std;

struct MobileNumber {
    string countryCode, contactNumber;
};

class Mobile {
    virtual void dial(
        const MobileNumber &MOBILE_NUMBER
    );
    virtual void sendSMS();
    virtual void TakePicture();
};

class SamsungMobile : Mobile {
public:
    void dial(
        const MobileNumber &MOBILE_NUMBER
    ) {}

    void sendSMS() {}
    void TakePicture() {}
};

class AsusMobile : Mobile {
public:
    void dial(
        const MobileNumber &MOBILE_NUMBER
    ) {}

    void sendSMS() {}
    void TakePicture() {}
};

int main() {
    SamsungMobile samsungMobile;
    AsusMobile asusMobile;
}