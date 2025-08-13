// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GetPolicyResponseBodyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyContent, policyContent_);
      DARABONBA_PTR_TO_JSON(PolicyDesc, policyDesc_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyContent, policyContent_);
      DARABONBA_PTR_FROM_JSON(PolicyDesc, policyDesc_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    GetPolicyResponseBodyPolicy() = default ;
    GetPolicyResponseBodyPolicy(const GetPolicyResponseBodyPolicy &) = default ;
    GetPolicyResponseBodyPolicy(GetPolicyResponseBodyPolicy &&) = default ;
    GetPolicyResponseBodyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBodyPolicy() = default ;
    GetPolicyResponseBodyPolicy& operator=(const GetPolicyResponseBodyPolicy &) = default ;
    GetPolicyResponseBodyPolicy& operator=(GetPolicyResponseBodyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyContent_ != nullptr
        && this->policyDesc_ != nullptr && this->policyName_ != nullptr && this->userType_ != nullptr; };
    // policyContent Field Functions 
    bool hasPolicyContent() const { return this->policyContent_ != nullptr;};
    void deletePolicyContent() { this->policyContent_ = nullptr;};
    inline string policyContent() const { DARABONBA_PTR_GET_DEFAULT(policyContent_, "") };
    inline GetPolicyResponseBodyPolicy& setPolicyContent(string policyContent) { DARABONBA_PTR_SET_VALUE(policyContent_, policyContent) };


    // policyDesc Field Functions 
    bool hasPolicyDesc() const { return this->policyDesc_ != nullptr;};
    void deletePolicyDesc() { this->policyDesc_ = nullptr;};
    inline string policyDesc() const { DARABONBA_PTR_GET_DEFAULT(policyDesc_, "") };
    inline GetPolicyResponseBodyPolicy& setPolicyDesc(string policyDesc) { DARABONBA_PTR_SET_VALUE(policyDesc_, policyDesc) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline GetPolicyResponseBodyPolicy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline GetPolicyResponseBodyPolicy& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The document of the tag policy.
    std::shared_ptr<string> policyContent_ = nullptr;
    // The description of the tag policy.
    std::shared_ptr<string> policyDesc_ = nullptr;
    // The name of the tag policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The mode of the Tag Policy feature. Valid values:
    // 
    // *   USER: single-account mode
    // *   RD: multi-account mode
    // 
    // For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
