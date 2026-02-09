// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHQUERYDEVICESTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUSHQUERYDEVICESTATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class PushQueryDeviceStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushQueryDeviceStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PushQueryDeviceStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PushQueryDeviceStateResponseBody() = default ;
    PushQueryDeviceStateResponseBody(const PushQueryDeviceStateResponseBody &) = default ;
    PushQueryDeviceStateResponseBody(PushQueryDeviceStateResponseBody &&) = default ;
    PushQueryDeviceStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushQueryDeviceStateResponseBody() = default ;
    PushQueryDeviceStateResponseBody& operator=(const PushQueryDeviceStateResponseBody &) = default ;
    PushQueryDeviceStateResponseBody& operator=(PushQueryDeviceStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeliveryToken, deliveryToken_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(Manufacturer, manufacturer_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(Statue, statue_);
        DARABONBA_PTR_TO_JSON(ThirdToken, thirdToken_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeliveryToken, deliveryToken_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(Manufacturer, manufacturer_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(Statue, statue_);
        DARABONBA_PTR_FROM_JSON(ThirdToken, thirdToken_);
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
      virtual bool empty() const override { return this->deliveryToken_ == nullptr
        && this->deviceId_ == nullptr && this->manufacturer_ == nullptr && this->platform_ == nullptr && this->statue_ == nullptr && this->thirdToken_ == nullptr
        && this->userId_ == nullptr; };
      // deliveryToken Field Functions 
      bool hasDeliveryToken() const { return this->deliveryToken_ != nullptr;};
      void deleteDeliveryToken() { this->deliveryToken_ = nullptr;};
      inline string getDeliveryToken() const { DARABONBA_PTR_GET_DEFAULT(deliveryToken_, "") };
      inline Data& setDeliveryToken(string deliveryToken) { DARABONBA_PTR_SET_VALUE(deliveryToken_, deliveryToken) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Data& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // manufacturer Field Functions 
      bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
      void deleteManufacturer() { this->manufacturer_ = nullptr;};
      inline string getManufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
      inline Data& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Data& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // statue Field Functions 
      bool hasStatue() const { return this->statue_ != nullptr;};
      void deleteStatue() { this->statue_ = nullptr;};
      inline string getStatue() const { DARABONBA_PTR_GET_DEFAULT(statue_, "") };
      inline Data& setStatue(string statue) { DARABONBA_PTR_SET_VALUE(statue_, statue) };


      // thirdToken Field Functions 
      bool hasThirdToken() const { return this->thirdToken_ != nullptr;};
      void deleteThirdToken() { this->thirdToken_ = nullptr;};
      inline string getThirdToken() const { DARABONBA_PTR_GET_DEFAULT(thirdToken_, "") };
      inline Data& setThirdToken(string thirdToken) { DARABONBA_PTR_SET_VALUE(thirdToken_, thirdToken) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> deliveryToken_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> manufacturer_ {};
      shared_ptr<string> platform_ {};
      shared_ptr<string> statue_ {};
      shared_ptr<string> thirdToken_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PushQueryDeviceStateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PushQueryDeviceStateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PushQueryDeviceStateResponseBody::Data) };
    inline PushQueryDeviceStateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PushQueryDeviceStateResponseBody::Data) };
    inline PushQueryDeviceStateResponseBody& setData(const PushQueryDeviceStateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PushQueryDeviceStateResponseBody& setData(PushQueryDeviceStateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PushQueryDeviceStateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PushQueryDeviceStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PushQueryDeviceStateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<PushQueryDeviceStateResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
