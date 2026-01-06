// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdatePolicyV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
    };
    UpdatePolicyV2ShrinkRequest() = default ;
    UpdatePolicyV2ShrinkRequest(const UpdatePolicyV2ShrinkRequest &) = default ;
    UpdatePolicyV2ShrinkRequest(UpdatePolicyV2ShrinkRequest &&) = default ;
    UpdatePolicyV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyV2ShrinkRequest() = default ;
    UpdatePolicyV2ShrinkRequest& operator=(const UpdatePolicyV2ShrinkRequest &) = default ;
    UpdatePolicyV2ShrinkRequest& operator=(UpdatePolicyV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyDescription_ == nullptr
        && this->policyId_ == nullptr && this->policyName_ == nullptr && this->rulesShrink_ == nullptr; };
    // policyDescription Field Functions 
    bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
    void deletePolicyDescription() { this->policyDescription_ = nullptr;};
    inline string getPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
    inline UpdatePolicyV2ShrinkRequest& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdatePolicyV2ShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline UpdatePolicyV2ShrinkRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string getRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline UpdatePolicyV2ShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


  protected:
    // The description of the backup policy.
    shared_ptr<string> policyDescription_ {};
    // The ID of the backup policy.
    shared_ptr<string> policyId_ {};
    // The name of the backup policy.
    shared_ptr<string> policyName_ {};
    // The rules in the backup policy.
    shared_ptr<string> rulesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
