// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRACECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetTraceConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetTraceConfigResponseBody() = default ;
    GetTraceConfigResponseBody(const GetTraceConfigResponseBody &) = default ;
    GetTraceConfigResponseBody(GetTraceConfigResponseBody &&) = default ;
    GetTraceConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceConfigResponseBody() = default ;
    GetTraceConfigResponseBody& operator=(const GetTraceConfigResponseBody &) = default ;
    GetTraceConfigResponseBody& operator=(GetTraceConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(sampleRatio, sampleRatio_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(servicePort, servicePort_);
        DARABONBA_PTR_TO_JSON(traceType, traceType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(sampleRatio, sampleRatio_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(servicePort, servicePort_);
        DARABONBA_PTR_FROM_JSON(traceType, traceType_);
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
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->sampleRatio_ == nullptr && this->serviceId_ == nullptr && this->servicePort_ == nullptr && this->traceType_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // sampleRatio Field Functions 
      bool hasSampleRatio() const { return this->sampleRatio_ != nullptr;};
      void deleteSampleRatio() { this->sampleRatio_ = nullptr;};
      inline int32_t getSampleRatio() const { DARABONBA_PTR_GET_DEFAULT(sampleRatio_, 0) };
      inline Data& setSampleRatio(int32_t sampleRatio) { DARABONBA_PTR_SET_VALUE(sampleRatio_, sampleRatio) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Data& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // servicePort Field Functions 
      bool hasServicePort() const { return this->servicePort_ != nullptr;};
      void deleteServicePort() { this->servicePort_ = nullptr;};
      inline string getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
      inline Data& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


      // traceType Field Functions 
      bool hasTraceType() const { return this->traceType_ != nullptr;};
      void deleteTraceType() { this->traceType_ = nullptr;};
      inline string getTraceType() const { DARABONBA_PTR_GET_DEFAULT(traceType_, "") };
      inline Data& setTraceType(string traceType) { DARABONBA_PTR_SET_VALUE(traceType_, traceType) };


    protected:
      // Whether to Enable Tracing:
      // true: Enabled
      // false: Disabled
      shared_ptr<bool> enable_ {};
      // Sampling Rate
      shared_ptr<int32_t> sampleRatio_ {};
      // Service ID, present when the tracing type is SKYWALKING
      shared_ptr<string> serviceId_ {};
      // 服务端口，链路追踪类型为SKYWALKING时存在该参数
      shared_ptr<string> servicePort_ {};
      // Tracing Type:
      // - XTRACE
      // - SKYWALKING
      // - OPENTELEMETRY
      // - OTSKYWALKING
      shared_ptr<string> traceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTraceConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTraceConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTraceConfigResponseBody::Data) };
    inline GetTraceConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTraceConfigResponseBody::Data) };
    inline GetTraceConfigResponseBody& setData(const GetTraceConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTraceConfigResponseBody& setData(GetTraceConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTraceConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTraceConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTraceConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Response Code
    shared_ptr<int32_t> code_ {};
    // Response Data
    shared_ptr<GetTraceConfigResponseBody::Data> data_ {};
    // Error Message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Boolean	Request Result, with the following values:
    // true: Request succeeded.
    // false: Request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
