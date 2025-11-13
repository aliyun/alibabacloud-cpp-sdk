// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKPOLICIESRESPONSEBODYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKPOLICIESRESPONSEBODYPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckPoliciesResponseBodyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckPoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(DependentPolicyId, dependentPolicyId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyShowName, policyShowName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckPoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(DependentPolicyId, dependentPolicyId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyShowName, policyShowName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCheckPoliciesResponseBodyPolicies() = default ;
    ListCheckPoliciesResponseBodyPolicies(const ListCheckPoliciesResponseBodyPolicies &) = default ;
    ListCheckPoliciesResponseBodyPolicies(ListCheckPoliciesResponseBodyPolicies &&) = default ;
    ListCheckPoliciesResponseBodyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckPoliciesResponseBodyPolicies() = default ;
    ListCheckPoliciesResponseBodyPolicies& operator=(const ListCheckPoliciesResponseBodyPolicies &) = default ;
    ListCheckPoliciesResponseBodyPolicies& operator=(ListCheckPoliciesResponseBodyPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkType_ == nullptr
        && return this->dependentPolicyId_ == nullptr && return this->policyId_ == nullptr && return this->policyShowName_ == nullptr && return this->policyType_ == nullptr && return this->type_ == nullptr; };
    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline ListCheckPoliciesResponseBodyPolicies& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // dependentPolicyId Field Functions 
    bool hasDependentPolicyId() const { return this->dependentPolicyId_ != nullptr;};
    void deleteDependentPolicyId() { this->dependentPolicyId_ = nullptr;};
    inline int64_t dependentPolicyId() const { DARABONBA_PTR_GET_DEFAULT(dependentPolicyId_, 0L) };
    inline ListCheckPoliciesResponseBodyPolicies& setDependentPolicyId(int64_t dependentPolicyId) { DARABONBA_PTR_SET_VALUE(dependentPolicyId_, dependentPolicyId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline ListCheckPoliciesResponseBodyPolicies& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyShowName Field Functions 
    bool hasPolicyShowName() const { return this->policyShowName_ != nullptr;};
    void deletePolicyShowName() { this->policyShowName_ = nullptr;};
    inline string policyShowName() const { DARABONBA_PTR_GET_DEFAULT(policyShowName_, "") };
    inline ListCheckPoliciesResponseBodyPolicies& setPolicyShowName(string policyShowName) { DARABONBA_PTR_SET_VALUE(policyShowName_, policyShowName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListCheckPoliciesResponseBodyPolicies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCheckPoliciesResponseBodyPolicies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Source type of the security check item:
    //  - **CUSTOM**: User-defined
    //  - **SYSTEM**: Predefined by the security platform
    std::shared_ptr<string> checkType_ = nullptr;
    // The ID of the associated higher-level policy.
    // 
    // (The specific dependency relationship, from low to high, is Section -> Requirement -> Standard)
    std::shared_ptr<int64_t> dependentPolicyId_ = nullptr;
    // Policy ID.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // Name of the custom policy.
    std::shared_ptr<string> policyShowName_ = nullptr;
    // Policy type of the custom check item rule:
    // - **STANDARD**: Standard policy type
    // - **REQUIREMENT**: Requirement policy type
    // - **SECTION**: Section policy type
    std::shared_ptr<string> policyType_ = nullptr;
    // 关联的策略大类的名称（PolicyType取值为STANDARD时为必填）：
    // - **AISPM**：AI配置管理（AI-SPM）
    // - **KISPM**：Kubernetes配置管理(KSPM)
    // - **IDENTITY_PERMISSION**：身份权限管理(CIEM)
    // - **RISK**：安全风险
    // - **COMPLIANCE**：合规风险
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
