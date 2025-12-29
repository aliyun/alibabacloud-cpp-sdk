// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOTELALARMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOTELALARMRESPONSEBODY_HPP_
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
  class CreateHotelAlarmResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHotelAlarmResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Extentions, extentions_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHotelAlarmResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Extentions, extentions_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    CreateHotelAlarmResponseBody() = default ;
    CreateHotelAlarmResponseBody(const CreateHotelAlarmResponseBody &) = default ;
    CreateHotelAlarmResponseBody(CreateHotelAlarmResponseBody &&) = default ;
    CreateHotelAlarmResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHotelAlarmResponseBody() = default ;
    CreateHotelAlarmResponseBody& operator=(const CreateHotelAlarmResponseBody &) = default ;
    CreateHotelAlarmResponseBody& operator=(CreateHotelAlarmResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_TO_JSON(DeviceOpenId, deviceOpenId_);
        DARABONBA_PTR_TO_JSON(FailMsg, failMsg_);
        DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_TO_JSON(UserOpenId, userOpenId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_FROM_JSON(DeviceOpenId, deviceOpenId_);
        DARABONBA_PTR_FROM_JSON(FailMsg, failMsg_);
        DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_FROM_JSON(UserOpenId, userOpenId_);
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
      virtual bool empty() const override { return this->alarmId_ == nullptr
        && this->deviceOpenId_ == nullptr && this->failMsg_ == nullptr && this->roomNo_ == nullptr && this->userOpenId_ == nullptr; };
      // alarmId Field Functions 
      bool hasAlarmId() const { return this->alarmId_ != nullptr;};
      void deleteAlarmId() { this->alarmId_ = nullptr;};
      inline int64_t getAlarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0L) };
      inline Result& setAlarmId(int64_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


      // deviceOpenId Field Functions 
      bool hasDeviceOpenId() const { return this->deviceOpenId_ != nullptr;};
      void deleteDeviceOpenId() { this->deviceOpenId_ = nullptr;};
      inline string getDeviceOpenId() const { DARABONBA_PTR_GET_DEFAULT(deviceOpenId_, "") };
      inline Result& setDeviceOpenId(string deviceOpenId) { DARABONBA_PTR_SET_VALUE(deviceOpenId_, deviceOpenId) };


      // failMsg Field Functions 
      bool hasFailMsg() const { return this->failMsg_ != nullptr;};
      void deleteFailMsg() { this->failMsg_ = nullptr;};
      inline string getFailMsg() const { DARABONBA_PTR_GET_DEFAULT(failMsg_, "") };
      inline Result& setFailMsg(string failMsg) { DARABONBA_PTR_SET_VALUE(failMsg_, failMsg) };


      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
      inline Result& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


      // userOpenId Field Functions 
      bool hasUserOpenId() const { return this->userOpenId_ != nullptr;};
      void deleteUserOpenId() { this->userOpenId_ = nullptr;};
      inline string getUserOpenId() const { DARABONBA_PTR_GET_DEFAULT(userOpenId_, "") };
      inline Result& setUserOpenId(string userOpenId) { DARABONBA_PTR_SET_VALUE(userOpenId_, userOpenId) };


    protected:
      shared_ptr<int64_t> alarmId_ {};
      shared_ptr<string> deviceOpenId_ {};
      shared_ptr<string> failMsg_ {};
      shared_ptr<string> roomNo_ {};
      shared_ptr<string> userOpenId_ {};
    };

    virtual bool empty() const override { return this->extentions_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // extentions Field Functions 
    bool hasExtentions() const { return this->extentions_ != nullptr;};
    void deleteExtentions() { this->extentions_ = nullptr;};
    inline     const Darabonba::Json & getExtentions() const { DARABONBA_GET(extentions_) };
    Darabonba::Json & getExtentions() { DARABONBA_GET(extentions_) };
    inline CreateHotelAlarmResponseBody& setExtentions(const Darabonba::Json & extentions) { DARABONBA_SET_VALUE(extentions_, extentions) };
    inline CreateHotelAlarmResponseBody& setExtentions(Darabonba::Json && extentions) { DARABONBA_SET_RVALUE(extentions_, extentions) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateHotelAlarmResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHotelAlarmResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<CreateHotelAlarmResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<CreateHotelAlarmResponseBody::Result>) };
    inline vector<CreateHotelAlarmResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<CreateHotelAlarmResponseBody::Result>) };
    inline CreateHotelAlarmResponseBody& setResult(const vector<CreateHotelAlarmResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateHotelAlarmResponseBody& setResult(vector<CreateHotelAlarmResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateHotelAlarmResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    Darabonba::Json extentions_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<CreateHotelAlarmResponseBody::Result>> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
