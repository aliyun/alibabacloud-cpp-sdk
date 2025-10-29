// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYATTACHMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYATTACHMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetPolicyAttachmentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyAttachmentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(attachResourceId, attachResourceId_);
      DARABONBA_PTR_TO_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(policyAttachmentId, policyAttachmentId_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyAttachmentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(attachResourceId, attachResourceId_);
      DARABONBA_PTR_FROM_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(policyAttachmentId, policyAttachmentId_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
    };
    GetPolicyAttachmentResponseBodyData() = default ;
    GetPolicyAttachmentResponseBodyData(const GetPolicyAttachmentResponseBodyData &) = default ;
    GetPolicyAttachmentResponseBodyData(GetPolicyAttachmentResponseBodyData &&) = default ;
    GetPolicyAttachmentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyAttachmentResponseBodyData() = default ;
    GetPolicyAttachmentResponseBodyData& operator=(const GetPolicyAttachmentResponseBodyData &) = default ;
    GetPolicyAttachmentResponseBodyData& operator=(GetPolicyAttachmentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachResourceId_ == nullptr
        && return this->attachResourceType_ == nullptr && return this->config_ == nullptr && return this->environmentId_ == nullptr && return this->gatewayId_ == nullptr && return this->policyAttachmentId_ == nullptr
        && return this->policyId_ == nullptr; };
    // attachResourceId Field Functions 
    bool hasAttachResourceId() const { return this->attachResourceId_ != nullptr;};
    void deleteAttachResourceId() { this->attachResourceId_ = nullptr;};
    inline string attachResourceId() const { DARABONBA_PTR_GET_DEFAULT(attachResourceId_, "") };
    inline GetPolicyAttachmentResponseBodyData& setAttachResourceId(string attachResourceId) { DARABONBA_PTR_SET_VALUE(attachResourceId_, attachResourceId) };


    // attachResourceType Field Functions 
    bool hasAttachResourceType() const { return this->attachResourceType_ != nullptr;};
    void deleteAttachResourceType() { this->attachResourceType_ = nullptr;};
    inline string attachResourceType() const { DARABONBA_PTR_GET_DEFAULT(attachResourceType_, "") };
    inline GetPolicyAttachmentResponseBodyData& setAttachResourceType(string attachResourceType) { DARABONBA_PTR_SET_VALUE(attachResourceType_, attachResourceType) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetPolicyAttachmentResponseBodyData& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline GetPolicyAttachmentResponseBodyData& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline GetPolicyAttachmentResponseBodyData& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // policyAttachmentId Field Functions 
    bool hasPolicyAttachmentId() const { return this->policyAttachmentId_ != nullptr;};
    void deletePolicyAttachmentId() { this->policyAttachmentId_ = nullptr;};
    inline string policyAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(policyAttachmentId_, "") };
    inline GetPolicyAttachmentResponseBodyData& setPolicyAttachmentId(string policyAttachmentId) { DARABONBA_PTR_SET_VALUE(policyAttachmentId_, policyAttachmentId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline GetPolicyAttachmentResponseBodyData& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // Attached Resource ID
    std::shared_ptr<string> attachResourceId_ = nullptr;
    // Attached resource type, HttpApi, GatewayRoute, Operation, GatewayService, GatewayServicePort, Gateway, Domain
    std::shared_ptr<string> attachResourceType_ = nullptr;
    // Policy attachment configuration
    std::shared_ptr<string> config_ = nullptr;
    // Environment ID
    std::shared_ptr<string> environmentId_ = nullptr;
    // Gateway Instance ID
    std::shared_ptr<string> gatewayId_ = nullptr;
    // Policy Attachment ID
    std::shared_ptr<string> policyAttachmentId_ = nullptr;
    // Policy ID
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
