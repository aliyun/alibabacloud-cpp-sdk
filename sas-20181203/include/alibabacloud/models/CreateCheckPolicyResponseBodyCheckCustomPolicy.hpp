// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHECKPOLICYRESPONSEBODYCHECKCUSTOMPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATECHECKPOLICYRESPONSEBODYCHECKCUSTOMPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateCheckPolicyResponseBodyCheckCustomPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCheckPolicyResponseBodyCheckCustomPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyShowName, policyShowName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCheckPolicyResponseBodyCheckCustomPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyShowName, policyShowName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateCheckPolicyResponseBodyCheckCustomPolicy() = default ;
    CreateCheckPolicyResponseBodyCheckCustomPolicy(const CreateCheckPolicyResponseBodyCheckCustomPolicy &) = default ;
    CreateCheckPolicyResponseBodyCheckCustomPolicy(CreateCheckPolicyResponseBodyCheckCustomPolicy &&) = default ;
    CreateCheckPolicyResponseBodyCheckCustomPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCheckPolicyResponseBodyCheckCustomPolicy() = default ;
    CreateCheckPolicyResponseBodyCheckCustomPolicy& operator=(const CreateCheckPolicyResponseBodyCheckCustomPolicy &) = default ;
    CreateCheckPolicyResponseBodyCheckCustomPolicy& operator=(CreateCheckPolicyResponseBodyCheckCustomPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkType_ == nullptr
        && return this->policyId_ == nullptr && return this->policyShowName_ == nullptr && return this->policyType_ == nullptr && return this->type_ == nullptr; };
    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline CreateCheckPolicyResponseBodyCheckCustomPolicy& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline CreateCheckPolicyResponseBodyCheckCustomPolicy& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyShowName Field Functions 
    bool hasPolicyShowName() const { return this->policyShowName_ != nullptr;};
    void deletePolicyShowName() { this->policyShowName_ = nullptr;};
    inline string policyShowName() const { DARABONBA_PTR_GET_DEFAULT(policyShowName_, "") };
    inline CreateCheckPolicyResponseBodyCheckCustomPolicy& setPolicyShowName(string policyShowName) { DARABONBA_PTR_SET_VALUE(policyShowName_, policyShowName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreateCheckPolicyResponseBodyCheckCustomPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCheckPolicyResponseBodyCheckCustomPolicy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of the policy (indicating whether it is a system or user-defined policy):
    // - **CUSTOM**: User-defined.
    // - **SYSTEM**: System-predefined.
    std::shared_ptr<string> checkType_ = nullptr;
    // The ID of the custom policy.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The name of the custom policy.
    std::shared_ptr<string> policyShowName_ = nullptr;
    // The policy type for custom check rules:
    // - **STANDARD**: Standard policy type.
    // - **REQUIREMENT**: Requirement policy type.
    // - **SECTION**: Section policy type.
    std::shared_ptr<string> policyType_ = nullptr;
    // The name of the associated major policy category:
    // - **AISPM**: AI Configuration Management (AISPM).
    // - **KISPM**: Kubernetes Configuration Management (KSPM).
    // - **IDENTITY_PERMISSION**: Identity and Permission Management (CIEM).
    // - **RISK**: Security Risk.
    // - **COMPLIANCE**: Compliance Risk.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
