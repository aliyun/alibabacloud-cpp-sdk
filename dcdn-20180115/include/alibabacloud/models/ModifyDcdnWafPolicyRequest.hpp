// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDCDNWAFPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDCDNWAFPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ModifyDcdnWafPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDcdnWafPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDcdnWafPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
    };
    ModifyDcdnWafPolicyRequest() = default ;
    ModifyDcdnWafPolicyRequest(const ModifyDcdnWafPolicyRequest &) = default ;
    ModifyDcdnWafPolicyRequest(ModifyDcdnWafPolicyRequest &&) = default ;
    ModifyDcdnWafPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDcdnWafPolicyRequest() = default ;
    ModifyDcdnWafPolicyRequest& operator=(const ModifyDcdnWafPolicyRequest &) = default ;
    ModifyDcdnWafPolicyRequest& operator=(ModifyDcdnWafPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyId_ != nullptr
        && this->policyName_ != nullptr && this->policyStatus_ != nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline ModifyDcdnWafPolicyRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ModifyDcdnWafPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyStatus Field Functions 
    bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
    void deletePolicyStatus() { this->policyStatus_ = nullptr;};
    inline string policyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
    inline ModifyDcdnWafPolicyRequest& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


  protected:
    // The ID of the protection policy that you want to modify. You can specify only one ID in each request.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The new name of the protection policy.
    // 
    // > You must specify PolicyName or PolicyStatus.
    std::shared_ptr<string> policyName_ = nullptr;
    // The new status of the protection policy. Valid values:
    // 
    // *   **on**
    // *   **off**
    // 
    // > You must specify PolicyName or PolicyStatus.
    std::shared_ptr<string> policyStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
