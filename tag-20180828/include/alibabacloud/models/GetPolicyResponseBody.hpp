// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GetPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPolicyResponseBody() = default ;
    GetPolicyResponseBody(const GetPolicyResponseBody &) = default ;
    GetPolicyResponseBody(GetPolicyResponseBody &&) = default ;
    GetPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBody() = default ;
    GetPolicyResponseBody& operator=(const GetPolicyResponseBody &) = default ;
    GetPolicyResponseBody& operator=(GetPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policy& obj) { 
        DARABONBA_PTR_TO_JSON(PolicyContent, policyContent_);
        DARABONBA_PTR_TO_JSON(PolicyDesc, policyDesc_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(UserType, userType_);
      };
      friend void from_json(const Darabonba::Json& j, Policy& obj) { 
        DARABONBA_PTR_FROM_JSON(PolicyContent, policyContent_);
        DARABONBA_PTR_FROM_JSON(PolicyDesc, policyDesc_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(UserType, userType_);
      };
      Policy() = default ;
      Policy(const Policy &) = default ;
      Policy(Policy &&) = default ;
      Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policy() = default ;
      Policy& operator=(const Policy &) = default ;
      Policy& operator=(Policy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->policyContent_ == nullptr
        && this->policyDesc_ == nullptr && this->policyName_ == nullptr && this->userType_ == nullptr; };
      // policyContent Field Functions 
      bool hasPolicyContent() const { return this->policyContent_ != nullptr;};
      void deletePolicyContent() { this->policyContent_ = nullptr;};
      inline string getPolicyContent() const { DARABONBA_PTR_GET_DEFAULT(policyContent_, "") };
      inline Policy& setPolicyContent(string policyContent) { DARABONBA_PTR_SET_VALUE(policyContent_, policyContent) };


      // policyDesc Field Functions 
      bool hasPolicyDesc() const { return this->policyDesc_ != nullptr;};
      void deletePolicyDesc() { this->policyDesc_ = nullptr;};
      inline string getPolicyDesc() const { DARABONBA_PTR_GET_DEFAULT(policyDesc_, "") };
      inline Policy& setPolicyDesc(string policyDesc) { DARABONBA_PTR_SET_VALUE(policyDesc_, policyDesc) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline Policy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
      inline Policy& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    protected:
      // The document of the tag policy.
      shared_ptr<string> policyContent_ {};
      // The description of the tag policy.
      shared_ptr<string> policyDesc_ {};
      // The name of the tag policy.
      shared_ptr<string> policyName_ {};
      // The mode of the Tag Policy feature. Valid values:
      // 
      // *   USER: single-account mode
      // *   RD: multi-account mode
      // 
      // For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
      shared_ptr<string> userType_ {};
    };

    virtual bool empty() const override { return this->policy_ == nullptr
        && this->requestId_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const GetPolicyResponseBody::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, GetPolicyResponseBody::Policy) };
    inline GetPolicyResponseBody::Policy getPolicy() { DARABONBA_PTR_GET(policy_, GetPolicyResponseBody::Policy) };
    inline GetPolicyResponseBody& setPolicy(const GetPolicyResponseBody::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline GetPolicyResponseBody& setPolicy(GetPolicyResponseBody::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the tag policy.
    shared_ptr<GetPolicyResponseBody::Policy> policy_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
