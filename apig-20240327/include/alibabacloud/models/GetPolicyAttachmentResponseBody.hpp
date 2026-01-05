// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYATTACHMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYATTACHMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetPolicyAttachmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyAttachmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyAttachmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPolicyAttachmentResponseBody() = default ;
    GetPolicyAttachmentResponseBody(const GetPolicyAttachmentResponseBody &) = default ;
    GetPolicyAttachmentResponseBody(GetPolicyAttachmentResponseBody &&) = default ;
    GetPolicyAttachmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyAttachmentResponseBody() = default ;
    GetPolicyAttachmentResponseBody& operator=(const GetPolicyAttachmentResponseBody &) = default ;
    GetPolicyAttachmentResponseBody& operator=(GetPolicyAttachmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(attachResourceId, attachResourceId_);
        DARABONBA_PTR_TO_JSON(attachResourceType, attachResourceType_);
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(policyAttachmentId, policyAttachmentId_);
        DARABONBA_PTR_TO_JSON(policyId, policyId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(attachResourceId, attachResourceId_);
        DARABONBA_PTR_FROM_JSON(attachResourceType, attachResourceType_);
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(policyAttachmentId, policyAttachmentId_);
        DARABONBA_PTR_FROM_JSON(policyId, policyId_);
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
      virtual bool empty() const override { return this->attachResourceId_ == nullptr
        && this->attachResourceType_ == nullptr && this->config_ == nullptr && this->environmentId_ == nullptr && this->gatewayId_ == nullptr && this->policyAttachmentId_ == nullptr
        && this->policyId_ == nullptr; };
      // attachResourceId Field Functions 
      bool hasAttachResourceId() const { return this->attachResourceId_ != nullptr;};
      void deleteAttachResourceId() { this->attachResourceId_ = nullptr;};
      inline string getAttachResourceId() const { DARABONBA_PTR_GET_DEFAULT(attachResourceId_, "") };
      inline Data& setAttachResourceId(string attachResourceId) { DARABONBA_PTR_SET_VALUE(attachResourceId_, attachResourceId) };


      // attachResourceType Field Functions 
      bool hasAttachResourceType() const { return this->attachResourceType_ != nullptr;};
      void deleteAttachResourceType() { this->attachResourceType_ = nullptr;};
      inline string getAttachResourceType() const { DARABONBA_PTR_GET_DEFAULT(attachResourceType_, "") };
      inline Data& setAttachResourceType(string attachResourceType) { DARABONBA_PTR_SET_VALUE(attachResourceType_, attachResourceType) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Data& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Data& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // policyAttachmentId Field Functions 
      bool hasPolicyAttachmentId() const { return this->policyAttachmentId_ != nullptr;};
      void deletePolicyAttachmentId() { this->policyAttachmentId_ = nullptr;};
      inline string getPolicyAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(policyAttachmentId_, "") };
      inline Data& setPolicyAttachmentId(string policyAttachmentId) { DARABONBA_PTR_SET_VALUE(policyAttachmentId_, policyAttachmentId) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Data& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    protected:
      // Attached Resource ID
      shared_ptr<string> attachResourceId_ {};
      // Attached resource type, HttpApi, GatewayRoute, Operation, GatewayService, GatewayServicePort, Gateway, Domain
      shared_ptr<string> attachResourceType_ {};
      // Policy attachment configuration
      shared_ptr<string> config_ {};
      // Environment ID
      shared_ptr<string> environmentId_ {};
      // Gateway Instance ID
      shared_ptr<string> gatewayId_ {};
      // Policy Attachment ID
      shared_ptr<string> policyAttachmentId_ {};
      // Policy ID
      shared_ptr<string> policyId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPolicyAttachmentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPolicyAttachmentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPolicyAttachmentResponseBody::Data) };
    inline GetPolicyAttachmentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPolicyAttachmentResponseBody::Data) };
    inline GetPolicyAttachmentResponseBody& setData(const GetPolicyAttachmentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPolicyAttachmentResponseBody& setData(GetPolicyAttachmentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPolicyAttachmentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyAttachmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Response code.
    shared_ptr<string> code_ {};
    // Response data.
    shared_ptr<GetPolicyAttachmentResponseBody::Data> data_ {};
    // Response message.
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
