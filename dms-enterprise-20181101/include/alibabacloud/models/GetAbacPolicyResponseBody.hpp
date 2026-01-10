// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETABACPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETABACPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetAbacPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAbacPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAbacPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAbacPolicyResponseBody() = default ;
    GetAbacPolicyResponseBody(const GetAbacPolicyResponseBody &) = default ;
    GetAbacPolicyResponseBody(GetAbacPolicyResponseBody &&) = default ;
    GetAbacPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAbacPolicyResponseBody() = default ;
    GetAbacPolicyResponseBody& operator=(const GetAbacPolicyResponseBody &) = default ;
    GetAbacPolicyResponseBody& operator=(GetAbacPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policy& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizedQuantity, authorizedQuantity_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(PolicyContent, policyContent_);
        DARABONBA_PTR_TO_JSON(PolicyDesc, policyDesc_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(PolicySource, policySource_);
      };
      friend void from_json(const Darabonba::Json& j, Policy& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizedQuantity, authorizedQuantity_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(PolicyContent, policyContent_);
        DARABONBA_PTR_FROM_JSON(PolicyDesc, policyDesc_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(PolicySource, policySource_);
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
      virtual bool empty() const override { return this->authorizedQuantity_ == nullptr
        && this->creatorId_ == nullptr && this->policyContent_ == nullptr && this->policyDesc_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr
        && this->policySource_ == nullptr; };
      // authorizedQuantity Field Functions 
      bool hasAuthorizedQuantity() const { return this->authorizedQuantity_ != nullptr;};
      void deleteAuthorizedQuantity() { this->authorizedQuantity_ = nullptr;};
      inline string getAuthorizedQuantity() const { DARABONBA_PTR_GET_DEFAULT(authorizedQuantity_, "") };
      inline Policy& setAuthorizedQuantity(string authorizedQuantity) { DARABONBA_PTR_SET_VALUE(authorizedQuantity_, authorizedQuantity) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline int64_t getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
      inline Policy& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


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


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
      inline Policy& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline Policy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policySource Field Functions 
      bool hasPolicySource() const { return this->policySource_ != nullptr;};
      void deletePolicySource() { this->policySource_ = nullptr;};
      inline string getPolicySource() const { DARABONBA_PTR_GET_DEFAULT(policySource_, "") };
      inline Policy& setPolicySource(string policySource) { DARABONBA_PTR_SET_VALUE(policySource_, policySource) };


    protected:
      // The number of users or custom roles to which the policy is attached.
      shared_ptr<string> authorizedQuantity_ {};
      // The ID of the user who create the policy.
      shared_ptr<int64_t> creatorId_ {};
      // The content of the policy.
      shared_ptr<string> policyContent_ {};
      // The description of the policy.
      shared_ptr<string> policyDesc_ {};
      // The ID of the policy.
      shared_ptr<int64_t> policyId_ {};
      // The name of the policy.
      shared_ptr<string> policyName_ {};
      // The source of the policy. Valid values:
      shared_ptr<string> policySource_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->policy_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetAbacPolicyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAbacPolicyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const GetAbacPolicyResponseBody::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, GetAbacPolicyResponseBody::Policy) };
    inline GetAbacPolicyResponseBody::Policy getPolicy() { DARABONBA_PTR_GET(policy_, GetAbacPolicyResponseBody::Policy) };
    inline GetAbacPolicyResponseBody& setPolicy(const GetAbacPolicyResponseBody::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline GetAbacPolicyResponseBody& setPolicy(GetAbacPolicyResponseBody::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAbacPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAbacPolicyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The details of the policy.
    shared_ptr<GetAbacPolicyResponseBody::Policy> policy_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
