// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROTECTIONPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROTECTIONPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class UpdateProtectionPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProtectionPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BoundResourceCategoryIds, boundResourceCategoryIdsShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ProtectionPolicyName, protectionPolicyName_);
      DARABONBA_PTR_TO_JSON(SubProtectionPolicies, subProtectionPoliciesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProtectionPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BoundResourceCategoryIds, boundResourceCategoryIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ProtectionPolicyName, protectionPolicyName_);
      DARABONBA_PTR_FROM_JSON(SubProtectionPolicies, subProtectionPoliciesShrink_);
    };
    UpdateProtectionPolicyShrinkRequest() = default ;
    UpdateProtectionPolicyShrinkRequest(const UpdateProtectionPolicyShrinkRequest &) = default ;
    UpdateProtectionPolicyShrinkRequest(UpdateProtectionPolicyShrinkRequest &&) = default ;
    UpdateProtectionPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProtectionPolicyShrinkRequest() = default ;
    UpdateProtectionPolicyShrinkRequest& operator=(const UpdateProtectionPolicyShrinkRequest &) = default ;
    UpdateProtectionPolicyShrinkRequest& operator=(UpdateProtectionPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->boundResourceCategoryIdsShrink_ == nullptr
        && this->clientToken_ == nullptr && this->protectionPolicyName_ == nullptr && this->subProtectionPoliciesShrink_ == nullptr; };
    // boundResourceCategoryIdsShrink Field Functions 
    bool hasBoundResourceCategoryIdsShrink() const { return this->boundResourceCategoryIdsShrink_ != nullptr;};
    void deleteBoundResourceCategoryIdsShrink() { this->boundResourceCategoryIdsShrink_ = nullptr;};
    inline string getBoundResourceCategoryIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(boundResourceCategoryIdsShrink_, "") };
    inline UpdateProtectionPolicyShrinkRequest& setBoundResourceCategoryIdsShrink(string boundResourceCategoryIdsShrink) { DARABONBA_PTR_SET_VALUE(boundResourceCategoryIdsShrink_, boundResourceCategoryIdsShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateProtectionPolicyShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // protectionPolicyName Field Functions 
    bool hasProtectionPolicyName() const { return this->protectionPolicyName_ != nullptr;};
    void deleteProtectionPolicyName() { this->protectionPolicyName_ = nullptr;};
    inline string getProtectionPolicyName() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyName_, "") };
    inline UpdateProtectionPolicyShrinkRequest& setProtectionPolicyName(string protectionPolicyName) { DARABONBA_PTR_SET_VALUE(protectionPolicyName_, protectionPolicyName) };


    // subProtectionPoliciesShrink Field Functions 
    bool hasSubProtectionPoliciesShrink() const { return this->subProtectionPoliciesShrink_ != nullptr;};
    void deleteSubProtectionPoliciesShrink() { this->subProtectionPoliciesShrink_ = nullptr;};
    inline string getSubProtectionPoliciesShrink() const { DARABONBA_PTR_GET_DEFAULT(subProtectionPoliciesShrink_, "") };
    inline UpdateProtectionPolicyShrinkRequest& setSubProtectionPoliciesShrink(string subProtectionPoliciesShrink) { DARABONBA_PTR_SET_VALUE(subProtectionPoliciesShrink_, subProtectionPoliciesShrink) };


  protected:
    // The list of associated resource category IDs.
    shared_ptr<string> boundResourceCategoryIdsShrink_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters. If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The protection policy name.
    shared_ptr<string> protectionPolicyName_ {};
    // The list of enabled sub-protection policies.
    shared_ptr<string> subProtectionPoliciesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
