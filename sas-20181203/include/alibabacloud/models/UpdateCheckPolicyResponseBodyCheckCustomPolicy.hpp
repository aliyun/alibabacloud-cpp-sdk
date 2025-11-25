// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHECKPOLICYRESPONSEBODYCHECKCUSTOMPOLICY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHECKPOLICYRESPONSEBODYCHECKCUSTOMPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateCheckPolicyResponseBodyCheckCustomPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCheckPolicyResponseBodyCheckCustomPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyShowName, policyShowName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCheckPolicyResponseBodyCheckCustomPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyShowName, policyShowName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    UpdateCheckPolicyResponseBodyCheckCustomPolicy() = default ;
    UpdateCheckPolicyResponseBodyCheckCustomPolicy(const UpdateCheckPolicyResponseBodyCheckCustomPolicy &) = default ;
    UpdateCheckPolicyResponseBodyCheckCustomPolicy(UpdateCheckPolicyResponseBodyCheckCustomPolicy &&) = default ;
    UpdateCheckPolicyResponseBodyCheckCustomPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCheckPolicyResponseBodyCheckCustomPolicy() = default ;
    UpdateCheckPolicyResponseBodyCheckCustomPolicy& operator=(const UpdateCheckPolicyResponseBodyCheckCustomPolicy &) = default ;
    UpdateCheckPolicyResponseBodyCheckCustomPolicy& operator=(UpdateCheckPolicyResponseBodyCheckCustomPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr
        && return this->policyShowName_ == nullptr && return this->policyType_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline UpdateCheckPolicyResponseBodyCheckCustomPolicy& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyShowName Field Functions 
    bool hasPolicyShowName() const { return this->policyShowName_ != nullptr;};
    void deletePolicyShowName() { this->policyShowName_ = nullptr;};
    inline string policyShowName() const { DARABONBA_PTR_GET_DEFAULT(policyShowName_, "") };
    inline UpdateCheckPolicyResponseBodyCheckCustomPolicy& setPolicyShowName(string policyShowName) { DARABONBA_PTR_SET_VALUE(policyShowName_, policyShowName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline UpdateCheckPolicyResponseBodyCheckCustomPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // ID of the custom policy.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // Name of the custom policy.
    std::shared_ptr<string> policyShowName_ = nullptr;
    // Policy type of the custom check item rule:
    // - **STANDARD**: Standard policy type.
    // - **REQUIREMENT**: Requirement policy type.
    // - **SECTION**: Section policy type.
    std::shared_ptr<string> policyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
