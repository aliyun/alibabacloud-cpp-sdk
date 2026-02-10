// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHECKPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHECKPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateCheckPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCheckPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DependentPolicyId, dependentPolicyId_);
      DARABONBA_PTR_TO_JSON(PolicyShowName, policyShowName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCheckPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DependentPolicyId, dependentPolicyId_);
      DARABONBA_PTR_FROM_JSON(PolicyShowName, policyShowName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateCheckPolicyRequest() = default ;
    CreateCheckPolicyRequest(const CreateCheckPolicyRequest &) = default ;
    CreateCheckPolicyRequest(CreateCheckPolicyRequest &&) = default ;
    CreateCheckPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCheckPolicyRequest() = default ;
    CreateCheckPolicyRequest& operator=(const CreateCheckPolicyRequest &) = default ;
    CreateCheckPolicyRequest& operator=(CreateCheckPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dependentPolicyId_ == nullptr
        && this->policyShowName_ == nullptr && this->policyType_ == nullptr && this->type_ == nullptr; };
    // dependentPolicyId Field Functions 
    bool hasDependentPolicyId() const { return this->dependentPolicyId_ != nullptr;};
    void deleteDependentPolicyId() { this->dependentPolicyId_ = nullptr;};
    inline int64_t getDependentPolicyId() const { DARABONBA_PTR_GET_DEFAULT(dependentPolicyId_, 0L) };
    inline CreateCheckPolicyRequest& setDependentPolicyId(int64_t dependentPolicyId) { DARABONBA_PTR_SET_VALUE(dependentPolicyId_, dependentPolicyId) };


    // policyShowName Field Functions 
    bool hasPolicyShowName() const { return this->policyShowName_ != nullptr;};
    void deletePolicyShowName() { this->policyShowName_ = nullptr;};
    inline string getPolicyShowName() const { DARABONBA_PTR_GET_DEFAULT(policyShowName_, "") };
    inline CreateCheckPolicyRequest& setPolicyShowName(string policyShowName) { DARABONBA_PTR_SET_VALUE(policyShowName_, policyShowName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreateCheckPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCheckPolicyRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the parent policy.
    //       
    // (The specific dependency order from low to high is Section -> Requirement -> Standard)
    shared_ptr<int64_t> dependentPolicyId_ {};
    // The name of the custom policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyShowName_ {};
    // The policy category type for custom check rules:
    // - **STANDARD**: Add to a standard.
    // - **REQUIREMENT**: Add to a requirement.
    // - **SECTION**: Add to a section.
    // 
    // This parameter is required.
    shared_ptr<string> policyType_ {};
    // The name of the major policy category (required when PolicyType is STANDARD):
    // - **AISPM**: AI Configuration Management (AISPM).
    // - **IDENTITY_PERMISSION**: Identity and Permission Management (CIEM).
    // - **RISK**: Security Risk.
    // - **COMPLIANCE**: Compliance Risk.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
