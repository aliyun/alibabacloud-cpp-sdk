// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSMARTACCESSGATEWAYDNSFORWARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDSMARTACCESSGATEWAYDNSFORWARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class AddSmartAccessGatewayDnsForwardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSmartAccessGatewayDnsForwardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddSmartAccessGatewayDnsForwardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddSmartAccessGatewayDnsForwardResponseBody() = default ;
    AddSmartAccessGatewayDnsForwardResponseBody(const AddSmartAccessGatewayDnsForwardResponseBody &) = default ;
    AddSmartAccessGatewayDnsForwardResponseBody(AddSmartAccessGatewayDnsForwardResponseBody &&) = default ;
    AddSmartAccessGatewayDnsForwardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSmartAccessGatewayDnsForwardResponseBody() = default ;
    AddSmartAccessGatewayDnsForwardResponseBody& operator=(const AddSmartAccessGatewayDnsForwardResponseBody &) = default ;
    AddSmartAccessGatewayDnsForwardResponseBody& operator=(AddSmartAccessGatewayDnsForwardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MasterIp, masterIp_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(OutboundPortIndex, outboundPortIndex_);
        DARABONBA_PTR_TO_JSON(OutboundPortName, outboundPortName_);
        DARABONBA_PTR_TO_JSON(OutboundPortType, outboundPortType_);
        DARABONBA_PTR_TO_JSON(SlaveIp, slaveIp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MasterIp, masterIp_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(OutboundPortIndex, outboundPortIndex_);
        DARABONBA_PTR_FROM_JSON(OutboundPortName, outboundPortName_);
        DARABONBA_PTR_FROM_JSON(OutboundPortType, outboundPortType_);
        DARABONBA_PTR_FROM_JSON(SlaveIp, slaveIp_);
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
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->instanceId_ == nullptr && this->masterIp_ == nullptr && this->mode_ == nullptr && this->outboundPortIndex_ == nullptr && this->outboundPortName_ == nullptr
        && this->outboundPortType_ == nullptr && this->slaveIp_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Data& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // masterIp Field Functions 
      bool hasMasterIp() const { return this->masterIp_ != nullptr;};
      void deleteMasterIp() { this->masterIp_ = nullptr;};
      inline string getMasterIp() const { DARABONBA_PTR_GET_DEFAULT(masterIp_, "") };
      inline Data& setMasterIp(string masterIp) { DARABONBA_PTR_SET_VALUE(masterIp_, masterIp) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Data& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // outboundPortIndex Field Functions 
      bool hasOutboundPortIndex() const { return this->outboundPortIndex_ != nullptr;};
      void deleteOutboundPortIndex() { this->outboundPortIndex_ = nullptr;};
      inline int32_t getOutboundPortIndex() const { DARABONBA_PTR_GET_DEFAULT(outboundPortIndex_, 0) };
      inline Data& setOutboundPortIndex(int32_t outboundPortIndex) { DARABONBA_PTR_SET_VALUE(outboundPortIndex_, outboundPortIndex) };


      // outboundPortName Field Functions 
      bool hasOutboundPortName() const { return this->outboundPortName_ != nullptr;};
      void deleteOutboundPortName() { this->outboundPortName_ = nullptr;};
      inline string getOutboundPortName() const { DARABONBA_PTR_GET_DEFAULT(outboundPortName_, "") };
      inline Data& setOutboundPortName(string outboundPortName) { DARABONBA_PTR_SET_VALUE(outboundPortName_, outboundPortName) };


      // outboundPortType Field Functions 
      bool hasOutboundPortType() const { return this->outboundPortType_ != nullptr;};
      void deleteOutboundPortType() { this->outboundPortType_ = nullptr;};
      inline string getOutboundPortType() const { DARABONBA_PTR_GET_DEFAULT(outboundPortType_, "") };
      inline Data& setOutboundPortType(string outboundPortType) { DARABONBA_PTR_SET_VALUE(outboundPortType_, outboundPortType) };


      // slaveIp Field Functions 
      bool hasSlaveIp() const { return this->slaveIp_ != nullptr;};
      void deleteSlaveIp() { this->slaveIp_ = nullptr;};
      inline string getSlaveIp() const { DARABONBA_PTR_GET_DEFAULT(slaveIp_, "") };
      inline Data& setSlaveIp(string slaveIp) { DARABONBA_PTR_SET_VALUE(slaveIp_, slaveIp) };


    protected:
      // The domain name.
      shared_ptr<string> domain_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The primary DNS server.
      shared_ptr<string> masterIp_ {};
      // The forwarding mode.
      shared_ptr<string> mode_ {};
      // The number of the egress port.
      shared_ptr<int32_t> outboundPortIndex_ {};
      // The egress port.
      shared_ptr<string> outboundPortName_ {};
      // The type of the egress port.
      shared_ptr<string> outboundPortType_ {};
      // The secondary DNS server.
      shared_ptr<string> slaveIp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddSmartAccessGatewayDnsForwardResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddSmartAccessGatewayDnsForwardResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddSmartAccessGatewayDnsForwardResponseBody::Data) };
    inline AddSmartAccessGatewayDnsForwardResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddSmartAccessGatewayDnsForwardResponseBody::Data) };
    inline AddSmartAccessGatewayDnsForwardResponseBody& setData(const AddSmartAccessGatewayDnsForwardResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddSmartAccessGatewayDnsForwardResponseBody& setData(AddSmartAccessGatewayDnsForwardResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AddSmartAccessGatewayDnsForwardResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddSmartAccessGatewayDnsForwardResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddSmartAccessGatewayDnsForwardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddSmartAccessGatewayDnsForwardResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. A value of 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The information returned for the request.
    shared_ptr<AddSmartAccessGatewayDnsForwardResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
