// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDevicesResponseBody() = default ;
    ListDevicesResponseBody(const ListDevicesResponseBody &) = default ;
    ListDevicesResponseBody(ListDevicesResponseBody &&) = default ;
    ListDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDevicesResponseBody() = default ;
    ListDevicesResponseBody& operator=(const ListDevicesResponseBody &) = default ;
    ListDevicesResponseBody& operator=(ListDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CallId, callId_);
        DARABONBA_PTR_TO_JSON(Contact, contact_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_TO_JSON(Expires, expires_);
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CallId, callId_);
        DARABONBA_PTR_FROM_JSON(Contact, contact_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_FROM_JSON(Expires, expires_);
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callId_ == nullptr
        && this->contact_ == nullptr && this->deviceId_ == nullptr && this->deviceType_ == nullptr && this->expires_ == nullptr && this->extension_ == nullptr
        && this->instanceId_ == nullptr && this->userId_ == nullptr; };
      // callId Field Functions 
      bool hasCallId() const { return this->callId_ != nullptr;};
      void deleteCallId() { this->callId_ = nullptr;};
      inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
      inline Data& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


      // contact Field Functions 
      bool hasContact() const { return this->contact_ != nullptr;};
      void deleteContact() { this->contact_ = nullptr;};
      inline string getContact() const { DARABONBA_PTR_GET_DEFAULT(contact_, "") };
      inline Data& setContact(string contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Data& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline Data& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // expires Field Functions 
      bool hasExpires() const { return this->expires_ != nullptr;};
      void deleteExpires() { this->expires_ = nullptr;};
      inline int64_t getExpires() const { DARABONBA_PTR_GET_DEFAULT(expires_, 0L) };
      inline Data& setExpires(int64_t expires) { DARABONBA_PTR_SET_VALUE(expires_, expires) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline Data& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> callId_ {};
      shared_ptr<string> contact_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> deviceType_ {};
      shared_ptr<int64_t> expires_ {};
      shared_ptr<string> extension_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDevicesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDevicesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDevicesResponseBody::Data>) };
    inline vector<ListDevicesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDevicesResponseBody::Data>) };
    inline ListDevicesResponseBody& setData(const vector<ListDevicesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDevicesResponseBody& setData(vector<ListDevicesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDevicesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDevicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListDevicesResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListDevicesResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListDevicesResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
