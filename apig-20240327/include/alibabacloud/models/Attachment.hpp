// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHMENT_HPP_
#define ALIBABACLOUD_MODELS_ATTACHMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class Attachment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Attachment& obj) { 
      DARABONBA_PTR_TO_JSON(attachResourceIds, attachResourceIds_);
      DARABONBA_PTR_TO_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(policyAttachmentId, policyAttachmentId_);
    };
    friend void from_json(const Darabonba::Json& j, Attachment& obj) { 
      DARABONBA_PTR_FROM_JSON(attachResourceIds, attachResourceIds_);
      DARABONBA_PTR_FROM_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(policyAttachmentId, policyAttachmentId_);
    };
    Attachment() = default ;
    Attachment(const Attachment &) = default ;
    Attachment(Attachment &&) = default ;
    Attachment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Attachment() = default ;
    Attachment& operator=(const Attachment &) = default ;
    Attachment& operator=(Attachment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachResourceIds_ == nullptr
        && this->attachResourceType_ == nullptr && this->environmentId_ == nullptr && this->gatewayId_ == nullptr && this->policyAttachmentId_ == nullptr; };
    // attachResourceIds Field Functions 
    bool hasAttachResourceIds() const { return this->attachResourceIds_ != nullptr;};
    void deleteAttachResourceIds() { this->attachResourceIds_ = nullptr;};
    inline const vector<string> & getAttachResourceIds() const { DARABONBA_PTR_GET_CONST(attachResourceIds_, vector<string>) };
    inline vector<string> getAttachResourceIds() { DARABONBA_PTR_GET(attachResourceIds_, vector<string>) };
    inline Attachment& setAttachResourceIds(const vector<string> & attachResourceIds) { DARABONBA_PTR_SET_VALUE(attachResourceIds_, attachResourceIds) };
    inline Attachment& setAttachResourceIds(vector<string> && attachResourceIds) { DARABONBA_PTR_SET_RVALUE(attachResourceIds_, attachResourceIds) };


    // attachResourceType Field Functions 
    bool hasAttachResourceType() const { return this->attachResourceType_ != nullptr;};
    void deleteAttachResourceType() { this->attachResourceType_ = nullptr;};
    inline string getAttachResourceType() const { DARABONBA_PTR_GET_DEFAULT(attachResourceType_, "") };
    inline Attachment& setAttachResourceType(string attachResourceType) { DARABONBA_PTR_SET_VALUE(attachResourceType_, attachResourceType) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline Attachment& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline Attachment& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // policyAttachmentId Field Functions 
    bool hasPolicyAttachmentId() const { return this->policyAttachmentId_ != nullptr;};
    void deletePolicyAttachmentId() { this->policyAttachmentId_ = nullptr;};
    inline string getPolicyAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(policyAttachmentId_, "") };
    inline Attachment& setPolicyAttachmentId(string policyAttachmentId) { DARABONBA_PTR_SET_VALUE(policyAttachmentId_, policyAttachmentId) };


  protected:
    // The resource IDs.
    shared_ptr<vector<string>> attachResourceIds_ {};
    // The supported mount point type. Valid values:
    // 
    // *   HttpApi: an HTTP API
    // *   Operation: an operation in an HTTP API
    // *   GatewayRoute: a gateway route
    // *   GatewayService: a gateway service
    // *   GatewayServicePort: a gateway service port
    // *   Domain: a gateway domain name
    // *   Gateway: a gateway instance
    shared_ptr<string> attachResourceType_ {};
    // The environment to which the mounted resource belongs. If an asterisk (\\*) is returned as the environment ID, the mounted resource is not related to the environment.
    shared_ptr<string> environmentId_ {};
    // The instance to which the mounted resource belongs.
    shared_ptr<string> gatewayId_ {};
    // The mount ID.
    shared_ptr<string> policyAttachmentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
