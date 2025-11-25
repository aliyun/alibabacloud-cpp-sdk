// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHECKPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHECKPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateCheckPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCheckPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DependentPolicyId, dependentPolicyId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyShowName, policyShowName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCheckPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DependentPolicyId, dependentPolicyId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyShowName, policyShowName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateCheckPolicyRequest() = default ;
    UpdateCheckPolicyRequest(const UpdateCheckPolicyRequest &) = default ;
    UpdateCheckPolicyRequest(UpdateCheckPolicyRequest &&) = default ;
    UpdateCheckPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCheckPolicyRequest() = default ;
    UpdateCheckPolicyRequest& operator=(const UpdateCheckPolicyRequest &) = default ;
    UpdateCheckPolicyRequest& operator=(UpdateCheckPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dependentPolicyId_ == nullptr
        && return this->policyId_ == nullptr && return this->policyShowName_ == nullptr && return this->policyType_ == nullptr && return this->type_ == nullptr; };
    // dependentPolicyId Field Functions 
    bool hasDependentPolicyId() const { return this->dependentPolicyId_ != nullptr;};
    void deleteDependentPolicyId() { this->dependentPolicyId_ = nullptr;};
    inline int64_t dependentPolicyId() const { DARABONBA_PTR_GET_DEFAULT(dependentPolicyId_, 0L) };
    inline UpdateCheckPolicyRequest& setDependentPolicyId(int64_t dependentPolicyId) { DARABONBA_PTR_SET_VALUE(dependentPolicyId_, dependentPolicyId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline UpdateCheckPolicyRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyShowName Field Functions 
    bool hasPolicyShowName() const { return this->policyShowName_ != nullptr;};
    void deletePolicyShowName() { this->policyShowName_ = nullptr;};
    inline string policyShowName() const { DARABONBA_PTR_GET_DEFAULT(policyShowName_, "") };
    inline UpdateCheckPolicyRequest& setPolicyShowName(string policyShowName) { DARABONBA_PTR_SET_VALUE(policyShowName_, policyShowName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline UpdateCheckPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateCheckPolicyRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // ID of the associated parent policy.
    // 
    // (The specific dependency hierarchy, from low to high, is Section -> Requirement -> Standard).
    std::shared_ptr<int64_t> dependentPolicyId_ = nullptr;
    // ID of the custom policy.
    // > You can obtain this parameter by calling the [ListCheckPolicies](~~ListCheckPolicies~~) API.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // Name of the custom classification.
    std::shared_ptr<string> policyShowName_ = nullptr;
    // Classification type of the custom check item rule:
    // - **STANDARD**: Add to standard.
    // - **REQUIREMENT**: Add to requirement.
    // - **SECTION**: Add to section.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyType_ = nullptr;
    // Name of the associated major policy category (required when PolicyType is STANDARD):
    // - **AISPM**: AI Configuration Management (AISPM).
    // - **RISK**: Security Risk.
    // - **COMPLIANCE**: Compliance Risk.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
