// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHECKPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECHECKPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateCheckPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCheckPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCustomPolicy, checkCustomPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCheckPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCustomPolicy, checkCustomPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCheckPolicyResponseBody() = default ;
    CreateCheckPolicyResponseBody(const CreateCheckPolicyResponseBody &) = default ;
    CreateCheckPolicyResponseBody(CreateCheckPolicyResponseBody &&) = default ;
    CreateCheckPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCheckPolicyResponseBody() = default ;
    CreateCheckPolicyResponseBody& operator=(const CreateCheckPolicyResponseBody &) = default ;
    CreateCheckPolicyResponseBody& operator=(CreateCheckPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckCustomPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckCustomPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyShowName, policyShowName_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CheckCustomPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyShowName, policyShowName_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      CheckCustomPolicy() = default ;
      CheckCustomPolicy(const CheckCustomPolicy &) = default ;
      CheckCustomPolicy(CheckCustomPolicy &&) = default ;
      CheckCustomPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckCustomPolicy() = default ;
      CheckCustomPolicy& operator=(const CheckCustomPolicy &) = default ;
      CheckCustomPolicy& operator=(CheckCustomPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkType_ == nullptr
        && this->policyId_ == nullptr && this->policyShowName_ == nullptr && this->policyType_ == nullptr && this->type_ == nullptr; };
      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline string getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
      inline CheckCustomPolicy& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
      inline CheckCustomPolicy& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyShowName Field Functions 
      bool hasPolicyShowName() const { return this->policyShowName_ != nullptr;};
      void deletePolicyShowName() { this->policyShowName_ = nullptr;};
      inline string getPolicyShowName() const { DARABONBA_PTR_GET_DEFAULT(policyShowName_, "") };
      inline CheckCustomPolicy& setPolicyShowName(string policyShowName) { DARABONBA_PTR_SET_VALUE(policyShowName_, policyShowName) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline CheckCustomPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CheckCustomPolicy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The type of the policy (indicating whether it is a system or user-defined policy):
      // - **CUSTOM**: User-defined.
      // - **SYSTEM**: System-predefined.
      shared_ptr<string> checkType_ {};
      // The ID of the custom policy.
      shared_ptr<int64_t> policyId_ {};
      // The name of the custom policy.
      shared_ptr<string> policyShowName_ {};
      // The policy type for custom check rules:
      // - **STANDARD**: Standard policy type.
      // - **REQUIREMENT**: Requirement policy type.
      // - **SECTION**: Section policy type.
      shared_ptr<string> policyType_ {};
      // The name of the associated major policy category:
      // - **AISPM**: AI Configuration Management (AISPM).
      // - **KISPM**: Kubernetes Configuration Management (KSPM).
      // - **IDENTITY_PERMISSION**: Identity and Permission Management (CIEM).
      // - **RISK**: Security Risk.
      // - **COMPLIANCE**: Compliance Risk.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->checkCustomPolicy_ == nullptr
        && this->requestId_ == nullptr; };
    // checkCustomPolicy Field Functions 
    bool hasCheckCustomPolicy() const { return this->checkCustomPolicy_ != nullptr;};
    void deleteCheckCustomPolicy() { this->checkCustomPolicy_ = nullptr;};
    inline const CreateCheckPolicyResponseBody::CheckCustomPolicy & getCheckCustomPolicy() const { DARABONBA_PTR_GET_CONST(checkCustomPolicy_, CreateCheckPolicyResponseBody::CheckCustomPolicy) };
    inline CreateCheckPolicyResponseBody::CheckCustomPolicy getCheckCustomPolicy() { DARABONBA_PTR_GET(checkCustomPolicy_, CreateCheckPolicyResponseBody::CheckCustomPolicy) };
    inline CreateCheckPolicyResponseBody& setCheckCustomPolicy(const CreateCheckPolicyResponseBody::CheckCustomPolicy & checkCustomPolicy) { DARABONBA_PTR_SET_VALUE(checkCustomPolicy_, checkCustomPolicy) };
    inline CreateCheckPolicyResponseBody& setCheckCustomPolicy(CreateCheckPolicyResponseBody::CheckCustomPolicy && checkCustomPolicy) { DARABONBA_PTR_SET_RVALUE(checkCustomPolicy_, checkCustomPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCheckPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Specific information about the added policy.
    shared_ptr<CreateCheckPolicyResponseBody::CheckCustomPolicy> checkCustomPolicy_ {};
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
