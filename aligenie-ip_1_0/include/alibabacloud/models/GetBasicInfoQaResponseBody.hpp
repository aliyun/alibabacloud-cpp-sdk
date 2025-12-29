// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASICINFOQARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBASICINFOQARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetBasicInfoQAResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBasicInfoQAResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetBasicInfoQAResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    GetBasicInfoQAResponseBody() = default ;
    GetBasicInfoQAResponseBody(const GetBasicInfoQAResponseBody &) = default ;
    GetBasicInfoQAResponseBody(GetBasicInfoQAResponseBody &&) = default ;
    GetBasicInfoQAResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBasicInfoQAResponseBody() = default ;
    GetBasicInfoQAResponseBody& operator=(const GetBasicInfoQAResponseBody &) = default ;
    GetBasicInfoQAResponseBody& operator=(GetBasicInfoQAResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CheckInTime, checkInTime_);
        DARABONBA_PTR_TO_JSON(CheckOutTime, checkOutTime_);
        DARABONBA_PTR_TO_JSON(HotelAddress, hotelAddress_);
        DARABONBA_PTR_TO_JSON(HotelIntroduction, hotelIntroduction_);
        DARABONBA_PTR_TO_JSON(HotelMember, hotelMember_);
        DARABONBA_PTR_TO_JSON(HotelService, hotelService_);
        DARABONBA_PTR_TO_JSON(ParkingExpenses, parkingExpenses_);
        DARABONBA_PTR_TO_JSON(ParkingPosition, parkingPosition_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(WifiName, wifiName_);
        DARABONBA_PTR_TO_JSON(WifiPassword, wifiPassword_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckInTime, checkInTime_);
        DARABONBA_PTR_FROM_JSON(CheckOutTime, checkOutTime_);
        DARABONBA_PTR_FROM_JSON(HotelAddress, hotelAddress_);
        DARABONBA_PTR_FROM_JSON(HotelIntroduction, hotelIntroduction_);
        DARABONBA_PTR_FROM_JSON(HotelMember, hotelMember_);
        DARABONBA_PTR_FROM_JSON(HotelService, hotelService_);
        DARABONBA_PTR_FROM_JSON(ParkingExpenses, parkingExpenses_);
        DARABONBA_PTR_FROM_JSON(ParkingPosition, parkingPosition_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(WifiName, wifiName_);
        DARABONBA_PTR_FROM_JSON(WifiPassword, wifiPassword_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkInTime_ == nullptr
        && this->checkOutTime_ == nullptr && this->hotelAddress_ == nullptr && this->hotelIntroduction_ == nullptr && this->hotelMember_ == nullptr && this->hotelService_ == nullptr
        && this->parkingExpenses_ == nullptr && this->parkingPosition_ == nullptr && this->phoneNumber_ == nullptr && this->wifiName_ == nullptr && this->wifiPassword_ == nullptr; };
      // checkInTime Field Functions 
      bool hasCheckInTime() const { return this->checkInTime_ != nullptr;};
      void deleteCheckInTime() { this->checkInTime_ = nullptr;};
      inline string getCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(checkInTime_, "") };
      inline Result& setCheckInTime(string checkInTime) { DARABONBA_PTR_SET_VALUE(checkInTime_, checkInTime) };


      // checkOutTime Field Functions 
      bool hasCheckOutTime() const { return this->checkOutTime_ != nullptr;};
      void deleteCheckOutTime() { this->checkOutTime_ = nullptr;};
      inline string getCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(checkOutTime_, "") };
      inline Result& setCheckOutTime(string checkOutTime) { DARABONBA_PTR_SET_VALUE(checkOutTime_, checkOutTime) };


      // hotelAddress Field Functions 
      bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
      void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
      inline string getHotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
      inline Result& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


      // hotelIntroduction Field Functions 
      bool hasHotelIntroduction() const { return this->hotelIntroduction_ != nullptr;};
      void deleteHotelIntroduction() { this->hotelIntroduction_ = nullptr;};
      inline string getHotelIntroduction() const { DARABONBA_PTR_GET_DEFAULT(hotelIntroduction_, "") };
      inline Result& setHotelIntroduction(string hotelIntroduction) { DARABONBA_PTR_SET_VALUE(hotelIntroduction_, hotelIntroduction) };


      // hotelMember Field Functions 
      bool hasHotelMember() const { return this->hotelMember_ != nullptr;};
      void deleteHotelMember() { this->hotelMember_ = nullptr;};
      inline string getHotelMember() const { DARABONBA_PTR_GET_DEFAULT(hotelMember_, "") };
      inline Result& setHotelMember(string hotelMember) { DARABONBA_PTR_SET_VALUE(hotelMember_, hotelMember) };


      // hotelService Field Functions 
      bool hasHotelService() const { return this->hotelService_ != nullptr;};
      void deleteHotelService() { this->hotelService_ = nullptr;};
      inline string getHotelService() const { DARABONBA_PTR_GET_DEFAULT(hotelService_, "") };
      inline Result& setHotelService(string hotelService) { DARABONBA_PTR_SET_VALUE(hotelService_, hotelService) };


      // parkingExpenses Field Functions 
      bool hasParkingExpenses() const { return this->parkingExpenses_ != nullptr;};
      void deleteParkingExpenses() { this->parkingExpenses_ = nullptr;};
      inline string getParkingExpenses() const { DARABONBA_PTR_GET_DEFAULT(parkingExpenses_, "") };
      inline Result& setParkingExpenses(string parkingExpenses) { DARABONBA_PTR_SET_VALUE(parkingExpenses_, parkingExpenses) };


      // parkingPosition Field Functions 
      bool hasParkingPosition() const { return this->parkingPosition_ != nullptr;};
      void deleteParkingPosition() { this->parkingPosition_ = nullptr;};
      inline string getParkingPosition() const { DARABONBA_PTR_GET_DEFAULT(parkingPosition_, "") };
      inline Result& setParkingPosition(string parkingPosition) { DARABONBA_PTR_SET_VALUE(parkingPosition_, parkingPosition) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Result& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // wifiName Field Functions 
      bool hasWifiName() const { return this->wifiName_ != nullptr;};
      void deleteWifiName() { this->wifiName_ = nullptr;};
      inline string getWifiName() const { DARABONBA_PTR_GET_DEFAULT(wifiName_, "") };
      inline Result& setWifiName(string wifiName) { DARABONBA_PTR_SET_VALUE(wifiName_, wifiName) };


      // wifiPassword Field Functions 
      bool hasWifiPassword() const { return this->wifiPassword_ != nullptr;};
      void deleteWifiPassword() { this->wifiPassword_ = nullptr;};
      inline string getWifiPassword() const { DARABONBA_PTR_GET_DEFAULT(wifiPassword_, "") };
      inline Result& setWifiPassword(string wifiPassword) { DARABONBA_PTR_SET_VALUE(wifiPassword_, wifiPassword) };


    protected:
      shared_ptr<string> checkInTime_ {};
      shared_ptr<string> checkOutTime_ {};
      shared_ptr<string> hotelAddress_ {};
      shared_ptr<string> hotelIntroduction_ {};
      shared_ptr<string> hotelMember_ {};
      shared_ptr<string> hotelService_ {};
      shared_ptr<string> parkingExpenses_ {};
      shared_ptr<string> parkingPosition_ {};
      shared_ptr<string> phoneNumber_ {};
      shared_ptr<string> wifiName_ {};
      shared_ptr<string> wifiPassword_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBasicInfoQAResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBasicInfoQAResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetBasicInfoQAResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetBasicInfoQAResponseBody::Result) };
    inline GetBasicInfoQAResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetBasicInfoQAResponseBody::Result) };
    inline GetBasicInfoQAResponseBody& setResult(const GetBasicInfoQAResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetBasicInfoQAResponseBody& setResult(GetBasicInfoQAResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetBasicInfoQAResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetBasicInfoQAResponseBody::Result> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
