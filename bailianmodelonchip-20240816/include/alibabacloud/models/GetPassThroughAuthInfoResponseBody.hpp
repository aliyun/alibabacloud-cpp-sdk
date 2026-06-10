// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSTHROUGHAUTHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPASSTHROUGHAUTHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class GetPassThroughAuthInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPassThroughAuthInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPassThroughAuthInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetPassThroughAuthInfoResponseBody() = default ;
    GetPassThroughAuthInfoResponseBody(const GetPassThroughAuthInfoResponseBody &) = default ;
    GetPassThroughAuthInfoResponseBody(GetPassThroughAuthInfoResponseBody &&) = default ;
    GetPassThroughAuthInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPassThroughAuthInfoResponseBody() = default ;
    GetPassThroughAuthInfoResponseBody& operator=(const GetPassThroughAuthInfoResponseBody &) = default ;
    GetPassThroughAuthInfoResponseBody& operator=(GetPassThroughAuthInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(deviceName, deviceName_);
        DARABONBA_ANY_TO_JSON(passThroughParams, passThroughParams_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(deviceName, deviceName_);
        DARABONBA_ANY_FROM_JSON(passThroughParams, passThroughParams_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->deviceName_ == nullptr && this->passThroughParams_ == nullptr && this->taskId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // deviceName Field Functions 
      bool hasDeviceName() const { return this->deviceName_ != nullptr;};
      void deleteDeviceName() { this->deviceName_ = nullptr;};
      inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
      inline Data& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


      // passThroughParams Field Functions 
      bool hasPassThroughParams() const { return this->passThroughParams_ != nullptr;};
      void deletePassThroughParams() { this->passThroughParams_ = nullptr;};
      inline       const Darabonba::Json & getPassThroughParams() const { DARABONBA_GET(passThroughParams_) };
      Darabonba::Json & getPassThroughParams() { DARABONBA_GET(passThroughParams_) };
      inline Data& setPassThroughParams(const Darabonba::Json & passThroughParams) { DARABONBA_SET_VALUE(passThroughParams_, passThroughParams) };
      inline Data& setPassThroughParams(Darabonba::Json && passThroughParams) { DARABONBA_SET_RVALUE(passThroughParams_, passThroughParams) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> deviceName_ {};
      Darabonba::Json passThroughParams_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPassThroughAuthInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPassThroughAuthInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPassThroughAuthInfoResponseBody::Data) };
    inline GetPassThroughAuthInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPassThroughAuthInfoResponseBody::Data) };
    inline GetPassThroughAuthInfoResponseBody& setData(const GetPassThroughAuthInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPassThroughAuthInfoResponseBody& setData(GetPassThroughAuthInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPassThroughAuthInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPassThroughAuthInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPassThroughAuthInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPassThroughAuthInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetPassThroughAuthInfoResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
