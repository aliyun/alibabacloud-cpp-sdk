// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTECTIONPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTECTIONPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class CreateProtectionPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtectionPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BoundResourceCategoryIds, boundResourceCategoryIdsShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ProtectionPolicyName, protectionPolicyName_);
      DARABONBA_PTR_TO_JSON(ProtectionPolicyRegionId, protectionPolicyRegionId_);
      DARABONBA_PTR_TO_JSON(SubProtectionPolicies, subProtectionPoliciesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtectionPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BoundResourceCategoryIds, boundResourceCategoryIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ProtectionPolicyName, protectionPolicyName_);
      DARABONBA_PTR_FROM_JSON(ProtectionPolicyRegionId, protectionPolicyRegionId_);
      DARABONBA_PTR_FROM_JSON(SubProtectionPolicies, subProtectionPoliciesShrink_);
    };
    CreateProtectionPolicyShrinkRequest() = default ;
    CreateProtectionPolicyShrinkRequest(const CreateProtectionPolicyShrinkRequest &) = default ;
    CreateProtectionPolicyShrinkRequest(CreateProtectionPolicyShrinkRequest &&) = default ;
    CreateProtectionPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtectionPolicyShrinkRequest() = default ;
    CreateProtectionPolicyShrinkRequest& operator=(const CreateProtectionPolicyShrinkRequest &) = default ;
    CreateProtectionPolicyShrinkRequest& operator=(CreateProtectionPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->boundResourceCategoryIdsShrink_ == nullptr
        && this->clientToken_ == nullptr && this->protectionPolicyName_ == nullptr && this->protectionPolicyRegionId_ == nullptr && this->subProtectionPoliciesShrink_ == nullptr; };
    // boundResourceCategoryIdsShrink Field Functions 
    bool hasBoundResourceCategoryIdsShrink() const { return this->boundResourceCategoryIdsShrink_ != nullptr;};
    void deleteBoundResourceCategoryIdsShrink() { this->boundResourceCategoryIdsShrink_ = nullptr;};
    inline string getBoundResourceCategoryIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(boundResourceCategoryIdsShrink_, "") };
    inline CreateProtectionPolicyShrinkRequest& setBoundResourceCategoryIdsShrink(string boundResourceCategoryIdsShrink) { DARABONBA_PTR_SET_VALUE(boundResourceCategoryIdsShrink_, boundResourceCategoryIdsShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateProtectionPolicyShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // protectionPolicyName Field Functions 
    bool hasProtectionPolicyName() const { return this->protectionPolicyName_ != nullptr;};
    void deleteProtectionPolicyName() { this->protectionPolicyName_ = nullptr;};
    inline string getProtectionPolicyName() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyName_, "") };
    inline CreateProtectionPolicyShrinkRequest& setProtectionPolicyName(string protectionPolicyName) { DARABONBA_PTR_SET_VALUE(protectionPolicyName_, protectionPolicyName) };


    // protectionPolicyRegionId Field Functions 
    bool hasProtectionPolicyRegionId() const { return this->protectionPolicyRegionId_ != nullptr;};
    void deleteProtectionPolicyRegionId() { this->protectionPolicyRegionId_ = nullptr;};
    inline string getProtectionPolicyRegionId() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyRegionId_, "") };
    inline CreateProtectionPolicyShrinkRequest& setProtectionPolicyRegionId(string protectionPolicyRegionId) { DARABONBA_PTR_SET_VALUE(protectionPolicyRegionId_, protectionPolicyRegionId) };


    // subProtectionPoliciesShrink Field Functions 
    bool hasSubProtectionPoliciesShrink() const { return this->subProtectionPoliciesShrink_ != nullptr;};
    void deleteSubProtectionPoliciesShrink() { this->subProtectionPoliciesShrink_ = nullptr;};
    inline string getSubProtectionPoliciesShrink() const { DARABONBA_PTR_GET_DEFAULT(subProtectionPoliciesShrink_, "") };
    inline CreateProtectionPolicyShrinkRequest& setSubProtectionPoliciesShrink(string subProtectionPoliciesShrink) { DARABONBA_PTR_SET_VALUE(subProtectionPoliciesShrink_, subProtectionPoliciesShrink) };


  protected:
    // The IDs of associated resource categories.
    shared_ptr<string> boundResourceCategoryIdsShrink_ {};
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The name of the protection policy.
    // 
    // This parameter is required.
    shared_ptr<string> protectionPolicyName_ {};
    // The region ID of the protection policy.
    // 
    // This parameter is required.
    shared_ptr<string> protectionPolicyRegionId_ {};
    // The sub-protection policies.
    // 
    // This parameter is required.
    shared_ptr<string> subProtectionPoliciesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
