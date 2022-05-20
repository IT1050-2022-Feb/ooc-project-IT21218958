#include <iostream>
#include <cstring>
using namespace std;

class GuestUser : public Person
{
protected:
    int guestID;
    int packageNo;
    Order *odr[5];
    int orderNo;
    int vehicleNo;
    int locationNo;

public:
    GuestUser();
    void setUserID(int gstID);
    void displayDetails();
    void personalizePackage(Package *pkg, Vehicle *vhcl);
    void placeOrder(Order *odr);
    void makePayment(Payment *pmnt);
    ~GuestUser();
};

class SafariLoc
{
private:
    int locationID;
    string locationName;
    string locationAddress;
    string locationType;

public:
    SafariLoc();
    void setLocDetails(int locID, string locName, string locAddress, string locType);
    int getLocID();
    void displayLocDetails();
    ~SafariLoc();
};

GuestUser::GuestUser()
{
    guestID = 0;
    packageNo = 0;
    orderNo = 0;
    vehicleNo = 0;
    locationNo = 0;
}

void GuestUser::setUserID(int gstID)
{
    guestID = gstID;
}

void GuestUser::displayDetails()
{
    cout << "Guest ID: " << guestID << endl;
    cout << "Name: " << personName << endl;
    cout << "Address: " << personAddress << endl;
    cout << "Age: " << peronAge << endl;
    cout << "Email: " << personEmail << endl;
    cout << "Contact No: " << personContact << endl;
}

void GuestUser::personalizePackage(Package *pkg, Vehicle *vhcl, SafariLoc *loc)
{
    packageNo = pkg->getPackageID();
    vehicleNo = vhcl->getVehicleNo();
    locationNo = loc->getLocID();
}

void GuestUser::placeOrder(Order *odr)
{
    orderNo = odr->getOrderID;
}

void GuestUser::makePayment(Payment *pmnt)
{
}

GuestUser::~GuestUser()
{
}

SafariLoc::SafariLoc()
{
    locationID = 0;
    locationName = "";
    locationAddress = "";
    locationType = "";
}

void SafariLoc::setLocDetails(int locID, string locName, string locAddress, string locType)
{
    locationID = locID;
    locationName = locName;
    locationAddress = locAddress;
    locationType = locType;
}

int SafariLoc::getLocID()
{
    return locationID;
}

SafariLoc::~SafariLoc()
{
}