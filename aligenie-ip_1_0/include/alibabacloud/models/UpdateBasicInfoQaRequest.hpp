// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBASICINFOQAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBASICINFOQAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class UpdateBasicInfoQARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBasicInfoQARequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckInTime, checkInTime_);
      DARABONBA_PTR_TO_JSON(CheckOutTime, checkOutTime_);
      DARABONBA_PTR_TO_JSON(HotelAddress, hotelAddress_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(HotelIntroduction, hotelIntroduction_);
      DARABONBA_PTR_TO_JSON(HotelMember, hotelMember_);
      DARABONBA_PTR_TO_JSON(HotelService, hotelService_);
      DARABONBA_PTR_TO_JSON(ParkingExpenses, parkingExpenses_);
      DARABONBA_PTR_TO_JSON(ParkingPosition, parkingPosition_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(WifiName, wifiName_);
      DARABONBA_PTR_TO_JSON(WifiPassword, wifiPassword_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBasicInfoQARequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckInTime, checkInTime_);
      DARABONBA_PTR_FROM_JSON(CheckOutTime, checkOutTime_);
      DARABONBA_PTR_FROM_JSON(HotelAddress, hotelAddress_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(HotelIntroduction, hotelIntroduction_);
      DARABONBA_PTR_FROM_JSON(HotelMember, hotelMember_);
      DARABONBA_PTR_FROM_JSON(HotelService, hotelService_);
      DARABONBA_PTR_FROM_JSON(ParkingExpenses, parkingExpenses_);
      DARABONBA_PTR_FROM_JSON(ParkingPosition, parkingPosition_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(WifiName, wifiName_);
      DARABONBA_PTR_FROM_JSON(WifiPassword, wifiPassword_);
    };
    UpdateBasicInfoQARequest() = default ;
    UpdateBasicInfoQARequest(const UpdateBasicInfoQARequest &) = default ;
    UpdateBasicInfoQARequest(UpdateBasicInfoQARequest &&) = default ;
    UpdateBasicInfoQARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBasicInfoQARequest() = default ;
    UpdateBasicInfoQARequest& operator=(const UpdateBasicInfoQARequest &) = default ;
    UpdateBasicInfoQARequest& operator=(UpdateBasicInfoQARequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkInTime_ == nullptr
        && this->checkOutTime_ == nullptr && this->hotelAddress_ == nullptr && this->hotelId_ == nullptr && this->hotelIntroduction_ == nullptr && this->hotelMember_ == nullptr
        && this->hotelService_ == nullptr && this->parkingExpenses_ == nullptr && this->parkingPosition_ == nullptr && this->phoneNumber_ == nullptr && this->wifiName_ == nullptr
        && this->wifiPassword_ == nullptr; };
    // checkInTime Field Functions 
    bool hasCheckInTime() const { return this->checkInTime_ != nullptr;};
    void deleteCheckInTime() { this->checkInTime_ = nullptr;};
    inline string getCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(checkInTime_, "") };
    inline UpdateBasicInfoQARequest& setCheckInTime(string checkInTime) { DARABONBA_PTR_SET_VALUE(checkInTime_, checkInTime) };


    // checkOutTime Field Functions 
    bool hasCheckOutTime() const { return this->checkOutTime_ != nullptr;};
    void deleteCheckOutTime() { this->checkOutTime_ = nullptr;};
    inline string getCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(checkOutTime_, "") };
    inline UpdateBasicInfoQARequest& setCheckOutTime(string checkOutTime) { DARABONBA_PTR_SET_VALUE(checkOutTime_, checkOutTime) };


    // hotelAddress Field Functions 
    bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
    void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
    inline string getHotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
    inline UpdateBasicInfoQARequest& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline UpdateBasicInfoQARequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // hotelIntroduction Field Functions 
    bool hasHotelIntroduction() const { return this->hotelIntroduction_ != nullptr;};
    void deleteHotelIntroduction() { this->hotelIntroduction_ = nullptr;};
    inline string getHotelIntroduction() const { DARABONBA_PTR_GET_DEFAULT(hotelIntroduction_, "") };
    inline UpdateBasicInfoQARequest& setHotelIntroduction(string hotelIntroduction) { DARABONBA_PTR_SET_VALUE(hotelIntroduction_, hotelIntroduction) };


    // hotelMember Field Functions 
    bool hasHotelMember() const { return this->hotelMember_ != nullptr;};
    void deleteHotelMember() { this->hotelMember_ = nullptr;};
    inline string getHotelMember() const { DARABONBA_PTR_GET_DEFAULT(hotelMember_, "") };
    inline UpdateBasicInfoQARequest& setHotelMember(string hotelMember) { DARABONBA_PTR_SET_VALUE(hotelMember_, hotelMember) };


    // hotelService Field Functions 
    bool hasHotelService() const { return this->hotelService_ != nullptr;};
    void deleteHotelService() { this->hotelService_ = nullptr;};
    inline string getHotelService() const { DARABONBA_PTR_GET_DEFAULT(hotelService_, "") };
    inline UpdateBasicInfoQARequest& setHotelService(string hotelService) { DARABONBA_PTR_SET_VALUE(hotelService_, hotelService) };


    // parkingExpenses Field Functions 
    bool hasParkingExpenses() const { return this->parkingExpenses_ != nullptr;};
    void deleteParkingExpenses() { this->parkingExpenses_ = nullptr;};
    inline string getParkingExpenses() const { DARABONBA_PTR_GET_DEFAULT(parkingExpenses_, "") };
    inline UpdateBasicInfoQARequest& setParkingExpenses(string parkingExpenses) { DARABONBA_PTR_SET_VALUE(parkingExpenses_, parkingExpenses) };


    // parkingPosition Field Functions 
    bool hasParkingPosition() const { return this->parkingPosition_ != nullptr;};
    void deleteParkingPosition() { this->parkingPosition_ = nullptr;};
    inline string getParkingPosition() const { DARABONBA_PTR_GET_DEFAULT(parkingPosition_, "") };
    inline UpdateBasicInfoQARequest& setParkingPosition(string parkingPosition) { DARABONBA_PTR_SET_VALUE(parkingPosition_, parkingPosition) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline UpdateBasicInfoQARequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // wifiName Field Functions 
    bool hasWifiName() const { return this->wifiName_ != nullptr;};
    void deleteWifiName() { this->wifiName_ = nullptr;};
    inline string getWifiName() const { DARABONBA_PTR_GET_DEFAULT(wifiName_, "") };
    inline UpdateBasicInfoQARequest& setWifiName(string wifiName) { DARABONBA_PTR_SET_VALUE(wifiName_, wifiName) };


    // wifiPassword Field Functions 
    bool hasWifiPassword() const { return this->wifiPassword_ != nullptr;};
    void deleteWifiPassword() { this->wifiPassword_ = nullptr;};
    inline string getWifiPassword() const { DARABONBA_PTR_GET_DEFAULT(wifiPassword_, "") };
    inline UpdateBasicInfoQARequest& setWifiPassword(string wifiPassword) { DARABONBA_PTR_SET_VALUE(wifiPassword_, wifiPassword) };


  protected:
    // This parameter is required.
    shared_ptr<string> checkInTime_ {};
    // This parameter is required.
    shared_ptr<string> checkOutTime_ {};
    // This parameter is required.
    shared_ptr<string> hotelAddress_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> hotelIntroduction_ {};
    shared_ptr<string> hotelMember_ {};
    shared_ptr<string> hotelService_ {};
    // This parameter is required.
    shared_ptr<string> parkingExpenses_ {};
    // This parameter is required.
    shared_ptr<string> parkingPosition_ {};
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    // This parameter is required.
    shared_ptr<string> wifiName_ {};
    // This parameter is required.
    shared_ptr<string> wifiPassword_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
