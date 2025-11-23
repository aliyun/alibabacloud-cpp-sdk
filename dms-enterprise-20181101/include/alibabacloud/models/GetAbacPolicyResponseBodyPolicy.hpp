// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETABACPOLICYRESPONSEBODYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETABACPOLICYRESPONSEBODYPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetAbacPolicyResponseBodyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAbacPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedQuantity, authorizedQuantity_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(PolicyContent, policyContent_);
      DARABONBA_PTR_TO_JSON(PolicyDesc, policyDesc_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicySource, policySource_);
    };
    friend void from_json(const Darabonba::Json& j, GetAbacPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedQuantity, authorizedQuantity_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(PolicyContent, policyContent_);
      DARABONBA_PTR_FROM_JSON(PolicyDesc, policyDesc_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicySource, policySource_);
    };
    GetAbacPolicyResponseBodyPolicy() = default ;
    GetAbacPolicyResponseBodyPolicy(const GetAbacPolicyResponseBodyPolicy &) = default ;
    GetAbacPolicyResponseBodyPolicy(GetAbacPolicyResponseBodyPolicy &&) = default ;
    GetAbacPolicyResponseBodyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAbacPolicyResponseBodyPolicy() = default ;
    GetAbacPolicyResponseBodyPolicy& operator=(const GetAbacPolicyResponseBodyPolicy &) = default ;
    GetAbacPolicyResponseBodyPolicy& operator=(GetAbacPolicyResponseBodyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedQuantity_ == nullptr
        && return this->creatorId_ == nullptr && return this->policyContent_ == nullptr && return this->policyDesc_ == nullptr && return this->policyId_ == nullptr && return this->policyName_ == nullptr
        && return this->policySource_ == nullptr; };
    // authorizedQuantity Field Functions 
    bool hasAuthorizedQuantity() const { return this->authorizedQuantity_ != nullptr;};
    void deleteAuthorizedQuantity() { this->authorizedQuantity_ = nullptr;};
    inline string authorizedQuantity() const { DARABONBA_PTR_GET_DEFAULT(authorizedQuantity_, "") };
    inline GetAbacPolicyResponseBodyPolicy& setAuthorizedQuantity(string authorizedQuantity) { DARABONBA_PTR_SET_VALUE(authorizedQuantity_, authorizedQuantity) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline GetAbacPolicyResponseBodyPolicy& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // policyContent Field Functions 
    bool hasPolicyContent() const { return this->policyContent_ != nullptr;};
    void deletePolicyContent() { this->policyContent_ = nullptr;};
    inline string policyContent() const { DARABONBA_PTR_GET_DEFAULT(policyContent_, "") };
    inline GetAbacPolicyResponseBodyPolicy& setPolicyContent(string policyContent) { DARABONBA_PTR_SET_VALUE(policyContent_, policyContent) };


    // policyDesc Field Functions 
    bool hasPolicyDesc() const { return this->policyDesc_ != nullptr;};
    void deletePolicyDesc() { this->policyDesc_ = nullptr;};
    inline string policyDesc() const { DARABONBA_PTR_GET_DEFAULT(policyDesc_, "") };
    inline GetAbacPolicyResponseBodyPolicy& setPolicyDesc(string policyDesc) { DARABONBA_PTR_SET_VALUE(policyDesc_, policyDesc) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline GetAbacPolicyResponseBodyPolicy& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline GetAbacPolicyResponseBodyPolicy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policySource Field Functions 
    bool hasPolicySource() const { return this->policySource_ != nullptr;};
    void deletePolicySource() { this->policySource_ = nullptr;};
    inline string policySource() const { DARABONBA_PTR_GET_DEFAULT(policySource_, "") };
    inline GetAbacPolicyResponseBodyPolicy& setPolicySource(string policySource) { DARABONBA_PTR_SET_VALUE(policySource_, policySource) };


  protected:
    // The number of users or custom roles to which the policy is attached.
    std::shared_ptr<string> authorizedQuantity_ = nullptr;
    // The ID of the user who create the policy.
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    // The content of the policy.
    std::shared_ptr<string> policyContent_ = nullptr;
    // The description of the policy.
    std::shared_ptr<string> policyDesc_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The source of the policy. Valid values:
    std::shared_ptr<string> policySource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
