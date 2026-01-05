// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYATTACHMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYATTACHMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreatePolicyAttachmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyAttachmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attachResourceId, attachResourceId_);
      DARABONBA_PTR_TO_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyAttachmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachResourceId, attachResourceId_);
      DARABONBA_PTR_FROM_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
    };
    CreatePolicyAttachmentRequest() = default ;
    CreatePolicyAttachmentRequest(const CreatePolicyAttachmentRequest &) = default ;
    CreatePolicyAttachmentRequest(CreatePolicyAttachmentRequest &&) = default ;
    CreatePolicyAttachmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyAttachmentRequest() = default ;
    CreatePolicyAttachmentRequest& operator=(const CreatePolicyAttachmentRequest &) = default ;
    CreatePolicyAttachmentRequest& operator=(CreatePolicyAttachmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachResourceId_ == nullptr
        && this->attachResourceType_ == nullptr && this->environmentId_ == nullptr && this->gatewayId_ == nullptr && this->policyId_ == nullptr; };
    // attachResourceId Field Functions 
    bool hasAttachResourceId() const { return this->attachResourceId_ != nullptr;};
    void deleteAttachResourceId() { this->attachResourceId_ = nullptr;};
    inline string getAttachResourceId() const { DARABONBA_PTR_GET_DEFAULT(attachResourceId_, "") };
    inline CreatePolicyAttachmentRequest& setAttachResourceId(string attachResourceId) { DARABONBA_PTR_SET_VALUE(attachResourceId_, attachResourceId) };


    // attachResourceType Field Functions 
    bool hasAttachResourceType() const { return this->attachResourceType_ != nullptr;};
    void deleteAttachResourceType() { this->attachResourceType_ = nullptr;};
    inline string getAttachResourceType() const { DARABONBA_PTR_GET_DEFAULT(attachResourceType_, "") };
    inline CreatePolicyAttachmentRequest& setAttachResourceType(string attachResourceType) { DARABONBA_PTR_SET_VALUE(attachResourceType_, attachResourceType) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline CreatePolicyAttachmentRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreatePolicyAttachmentRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline CreatePolicyAttachmentRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // Attached resource ID
    // 
    // This parameter is required.
    shared_ptr<string> attachResourceId_ {};
    // Attached resource type, such as HttpApi, GatewayRoute, Operation, GatewayService, GatewayServicePort, Gateway, Domain
    // 
    // This parameter is required.
    shared_ptr<string> attachResourceType_ {};
    // Environment ID
    // 
    // This parameter is required.
    shared_ptr<string> environmentId_ {};
    // Gateway instance ID
    // 
    // This parameter is required.
    shared_ptr<string> gatewayId_ {};
    // Policy ID
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
