// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDCDNWAFPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDCDNWAFPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateDcdnWafPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDcdnWafPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDcdnWafPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    CreateDcdnWafPolicyRequest() = default ;
    CreateDcdnWafPolicyRequest(const CreateDcdnWafPolicyRequest &) = default ;
    CreateDcdnWafPolicyRequest(CreateDcdnWafPolicyRequest &&) = default ;
    CreateDcdnWafPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDcdnWafPolicyRequest() = default ;
    CreateDcdnWafPolicyRequest& operator=(const CreateDcdnWafPolicyRequest &) = default ;
    CreateDcdnWafPolicyRequest& operator=(CreateDcdnWafPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defenseScene_ == nullptr
        && this->policyName_ == nullptr && this->policyStatus_ == nullptr && this->policyType_ == nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline CreateDcdnWafPolicyRequest& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreateDcdnWafPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyStatus Field Functions 
    bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
    void deletePolicyStatus() { this->policyStatus_ = nullptr;};
    inline string getPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
    inline CreateDcdnWafPolicyRequest& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreateDcdnWafPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // The type of the WAF protection policy. Valid values:
    // 
    // *   waf_group: basic web protection
    // *   custom_acl: custom protection
    // *   whitelist: IP address whitelist
    // *   ip_blacklist: IP address blacklist
    // *   region_block: region blacklist
    // *   bot: bot management
    // 
    // This parameter is required.
    shared_ptr<string> defenseScene_ {};
    // The name of the protection policy. The name can be up to 64 characters in length and can contain letters, digits, and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> policyName_ {};
    // The status of the protection policy. Valid values:
    // 
    // *   on: The policy is enabled.
    // *   off: The policy is disabled.
    // 
    // This parameter is required.
    shared_ptr<string> policyStatus_ {};
    // Specifies whether to set the current policy as the default policy. Valid values:
    // 
    // *   default: sets the current policy as the default policy.
    // *   custom: does not set the current policy as the default policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
