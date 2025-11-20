// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePolicyV2RequestRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreatePolicyV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    CreatePolicyV2Request() = default ;
    CreatePolicyV2Request(const CreatePolicyV2Request &) = default ;
    CreatePolicyV2Request(CreatePolicyV2Request &&) = default ;
    CreatePolicyV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyV2Request() = default ;
    CreatePolicyV2Request& operator=(const CreatePolicyV2Request &) = default ;
    CreatePolicyV2Request& operator=(CreatePolicyV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyDescription_ == nullptr
        && return this->policyName_ == nullptr && return this->policyType_ == nullptr && return this->rules_ == nullptr; };
    // policyDescription Field Functions 
    bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
    void deletePolicyDescription() { this->policyDescription_ = nullptr;};
    inline string policyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
    inline CreatePolicyV2Request& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreatePolicyV2Request& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreatePolicyV2Request& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<CreatePolicyV2RequestRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CreatePolicyV2RequestRules>) };
    inline vector<CreatePolicyV2RequestRules> rules() { DARABONBA_PTR_GET(rules_, vector<CreatePolicyV2RequestRules>) };
    inline CreatePolicyV2Request& setRules(const vector<CreatePolicyV2RequestRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreatePolicyV2Request& setRules(vector<CreatePolicyV2RequestRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The description of the backup policy.
    std::shared_ptr<string> policyDescription_ = nullptr;
    // The name of the backup policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The policy type. Valid values:
    // 
    // *   **STANDARD**: the general backup policy. This type of policy applies to backups other than Elastic Compute Service (ECS) instance backup.
    // *   **UDM_ECS_ONLY**: This type of policy applies only to ECS instance backup.
    // 
    // If the policy type is not specified, Cloud Backup automatically sets the policy type based on whether the backup vault is specified in the rules of the policy:
    // 
    // *   If the backup vault is specified, Cloud Backup sets the policy type to **STANDARD**.
    // *   If the backup vault is not specified, Cloud Backup sets the policy type to **UDM_ECS_ONLY**.
    std::shared_ptr<string> policyType_ = nullptr;
    // The rules in the backup policy.
    std::shared_ptr<vector<CreatePolicyV2RequestRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
