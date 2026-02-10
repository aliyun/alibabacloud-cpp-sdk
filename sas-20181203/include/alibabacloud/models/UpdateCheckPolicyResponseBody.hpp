// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHECKPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHECKPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateCheckPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCheckPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCustomPolicy, checkCustomPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCheckPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCustomPolicy, checkCustomPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateCheckPolicyResponseBody() = default ;
    UpdateCheckPolicyResponseBody(const UpdateCheckPolicyResponseBody &) = default ;
    UpdateCheckPolicyResponseBody(UpdateCheckPolicyResponseBody &&) = default ;
    UpdateCheckPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCheckPolicyResponseBody() = default ;
    UpdateCheckPolicyResponseBody& operator=(const UpdateCheckPolicyResponseBody &) = default ;
    UpdateCheckPolicyResponseBody& operator=(UpdateCheckPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckCustomPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckCustomPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyShowName, policyShowName_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, CheckCustomPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyShowName, policyShowName_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
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
      virtual bool empty() const override { return this->policyId_ == nullptr
        && this->policyShowName_ == nullptr && this->policyType_ == nullptr; };
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


    protected:
      // ID of the custom policy.
      shared_ptr<int64_t> policyId_ {};
      // Name of the custom policy.
      shared_ptr<string> policyShowName_ {};
      // Policy type of the custom check item rule:
      // - **STANDARD**: Standard policy type.
      // - **REQUIREMENT**: Requirement policy type.
      // - **SECTION**: Section policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->checkCustomPolicy_ == nullptr
        && this->requestId_ == nullptr; };
    // checkCustomPolicy Field Functions 
    bool hasCheckCustomPolicy() const { return this->checkCustomPolicy_ != nullptr;};
    void deleteCheckCustomPolicy() { this->checkCustomPolicy_ = nullptr;};
    inline const UpdateCheckPolicyResponseBody::CheckCustomPolicy & getCheckCustomPolicy() const { DARABONBA_PTR_GET_CONST(checkCustomPolicy_, UpdateCheckPolicyResponseBody::CheckCustomPolicy) };
    inline UpdateCheckPolicyResponseBody::CheckCustomPolicy getCheckCustomPolicy() { DARABONBA_PTR_GET(checkCustomPolicy_, UpdateCheckPolicyResponseBody::CheckCustomPolicy) };
    inline UpdateCheckPolicyResponseBody& setCheckCustomPolicy(const UpdateCheckPolicyResponseBody::CheckCustomPolicy & checkCustomPolicy) { DARABONBA_PTR_SET_VALUE(checkCustomPolicy_, checkCustomPolicy) };
    inline UpdateCheckPolicyResponseBody& setCheckCustomPolicy(UpdateCheckPolicyResponseBody::CheckCustomPolicy && checkCustomPolicy) { DARABONBA_PTR_SET_RVALUE(checkCustomPolicy_, checkCustomPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateCheckPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the custom policy.
    shared_ptr<UpdateCheckPolicyResponseBody::CheckCustomPolicy> checkCustomPolicy_ {};
    // The ID of this request, a unique identifier generated by Alibaba Cloud for this request, which can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
