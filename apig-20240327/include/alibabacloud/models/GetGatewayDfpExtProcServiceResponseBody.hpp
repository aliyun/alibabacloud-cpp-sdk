// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYDFPEXTPROCSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYDFPEXTPROCSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayDfpExtProcServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayDfpExtProcServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayDfpExtProcServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGatewayDfpExtProcServiceResponseBody() = default ;
    GetGatewayDfpExtProcServiceResponseBody(const GetGatewayDfpExtProcServiceResponseBody &) = default ;
    GetGatewayDfpExtProcServiceResponseBody(GetGatewayDfpExtProcServiceResponseBody &&) = default ;
    GetGatewayDfpExtProcServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayDfpExtProcServiceResponseBody() = default ;
    GetGatewayDfpExtProcServiceResponseBody& operator=(const GetGatewayDfpExtProcServiceResponseBody &) = default ;
    GetGatewayDfpExtProcServiceResponseBody& operator=(GetGatewayDfpExtProcServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(bound, bound_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(servicePort, servicePort_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(bound, bound_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(servicePort, servicePort_);
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
      virtual bool empty() const override { return this->bound_ == nullptr
        && this->serviceId_ == nullptr && this->servicePort_ == nullptr; };
      // bound Field Functions 
      bool hasBound() const { return this->bound_ != nullptr;};
      void deleteBound() { this->bound_ = nullptr;};
      inline bool getBound() const { DARABONBA_PTR_GET_DEFAULT(bound_, false) };
      inline Data& setBound(bool bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Data& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // servicePort Field Functions 
      bool hasServicePort() const { return this->servicePort_ != nullptr;};
      void deleteServicePort() { this->servicePort_ = nullptr;};
      inline int32_t getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
      inline Data& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    protected:
      // Indicates whether the gateway is bound to a dynamic forwarding ExtProc service.
      shared_ptr<bool> bound_ {};
      // The ID of the bound ExtProc gRPC service. This parameter is not returned if no service is bound.
      shared_ptr<string> serviceId_ {};
      // The gRPC port of the bound service. This parameter is not returned if no service is bound.
      shared_ptr<int32_t> servicePort_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGatewayDfpExtProcServiceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayDfpExtProcServiceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayDfpExtProcServiceResponseBody::Data) };
    inline GetGatewayDfpExtProcServiceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayDfpExtProcServiceResponseBody::Data) };
    inline GetGatewayDfpExtProcServiceResponseBody& setData(const GetGatewayDfpExtProcServiceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayDfpExtProcServiceResponseBody& setData(GetGatewayDfpExtProcServiceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayDfpExtProcServiceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayDfpExtProcServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result code of the request. The value is Ok if the request is successful.
    shared_ptr<string> code_ {};
    // The binding information of the dynamic forwarding ExtProc service for the gateway.
    shared_ptr<GetGatewayDfpExtProcServiceResponseBody::Data> data_ {};
    // The result message of the request. If the request failed, the message contains the error message of the fault.
    shared_ptr<string> message_ {};
    // The request ID, which is used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
