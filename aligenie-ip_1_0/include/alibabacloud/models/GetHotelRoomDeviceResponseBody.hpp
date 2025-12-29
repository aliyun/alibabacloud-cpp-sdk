// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELROOMDEVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELROOMDEVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelRoomDeviceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelRoomDeviceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelRoomDeviceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetHotelRoomDeviceResponseBody() = default ;
    GetHotelRoomDeviceResponseBody(const GetHotelRoomDeviceResponseBody &) = default ;
    GetHotelRoomDeviceResponseBody(GetHotelRoomDeviceResponseBody &&) = default ;
    GetHotelRoomDeviceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelRoomDeviceResponseBody() = default ;
    GetHotelRoomDeviceResponseBody& operator=(const GetHotelRoomDeviceResponseBody &) = default ;
    GetHotelRoomDeviceResponseBody& operator=(GetHotelRoomDeviceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(FirmwareVersion, firmwareVersion_);
        DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
        DARABONBA_PTR_TO_JSON(Mac, mac_);
        DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
        DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_TO_JSON(Sn, sn_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(FirmwareVersion, firmwareVersion_);
        DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
        DARABONBA_PTR_FROM_JSON(Mac, mac_);
        DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
        DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_FROM_JSON(Sn, sn_);
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
      virtual bool empty() const override { return this->firmwareVersion_ == nullptr
        && this->hotelId_ == nullptr && this->mac_ == nullptr && this->onlineStatus_ == nullptr && this->roomNo_ == nullptr && this->sn_ == nullptr; };
      // firmwareVersion Field Functions 
      bool hasFirmwareVersion() const { return this->firmwareVersion_ != nullptr;};
      void deleteFirmwareVersion() { this->firmwareVersion_ = nullptr;};
      inline string getFirmwareVersion() const { DARABONBA_PTR_GET_DEFAULT(firmwareVersion_, "") };
      inline Result& setFirmwareVersion(string firmwareVersion) { DARABONBA_PTR_SET_VALUE(firmwareVersion_, firmwareVersion) };


      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
      inline Result& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline Result& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // onlineStatus Field Functions 
      bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
      void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
      inline int32_t getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, 0) };
      inline Result& setOnlineStatus(int32_t onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
      inline Result& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


      // sn Field Functions 
      bool hasSn() const { return this->sn_ != nullptr;};
      void deleteSn() { this->sn_ = nullptr;};
      inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
      inline Result& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    protected:
      shared_ptr<string> firmwareVersion_ {};
      shared_ptr<string> hotelId_ {};
      shared_ptr<string> mac_ {};
      shared_ptr<int32_t> onlineStatus_ {};
      shared_ptr<string> roomNo_ {};
      shared_ptr<string> sn_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetHotelRoomDeviceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotelRoomDeviceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotelRoomDeviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetHotelRoomDeviceResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetHotelRoomDeviceResponseBody::Result>) };
    inline vector<GetHotelRoomDeviceResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetHotelRoomDeviceResponseBody::Result>) };
    inline GetHotelRoomDeviceResponseBody& setResult(const vector<GetHotelRoomDeviceResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetHotelRoomDeviceResponseBody& setResult(vector<GetHotelRoomDeviceResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetHotelRoomDeviceResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
