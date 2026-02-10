// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHECKPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECHECKPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteCheckPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCheckPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policys, policys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCheckPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policys, policys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteCheckPolicyResponseBody() = default ;
    DeleteCheckPolicyResponseBody(const DeleteCheckPolicyResponseBody &) = default ;
    DeleteCheckPolicyResponseBody(DeleteCheckPolicyResponseBody &&) = default ;
    DeleteCheckPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCheckPolicyResponseBody() = default ;
    DeleteCheckPolicyResponseBody& operator=(const DeleteCheckPolicyResponseBody &) = default ;
    DeleteCheckPolicyResponseBody& operator=(DeleteCheckPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policys& obj) { 
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyShowName, policyShowName_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, Policys& obj) { 
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyShowName, policyShowName_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      Policys() = default ;
      Policys(const Policys &) = default ;
      Policys(Policys &&) = default ;
      Policys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policys() = default ;
      Policys& operator=(const Policys &) = default ;
      Policys& operator=(Policys &&) = default ;
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
      inline Policys& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyShowName Field Functions 
      bool hasPolicyShowName() const { return this->policyShowName_ != nullptr;};
      void deletePolicyShowName() { this->policyShowName_ = nullptr;};
      inline string getPolicyShowName() const { DARABONBA_PTR_GET_DEFAULT(policyShowName_, "") };
      inline Policys& setPolicyShowName(string policyShowName) { DARABONBA_PTR_SET_VALUE(policyShowName_, policyShowName) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline Policys& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // Deleted policy ID.
      shared_ptr<int64_t> policyId_ {};
      // The name of the custom policy.
      shared_ptr<string> policyShowName_ {};
      // Policy type for custom check rule:
      // 
      // *   **STANDARD**: Standard-level policy
      // *   **REQUIREMENT**: Requirement-level policy
      // *   **SECTION**: Section-level policy
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->policys_ == nullptr
        && this->requestId_ == nullptr; };
    // policys Field Functions 
    bool hasPolicys() const { return this->policys_ != nullptr;};
    void deletePolicys() { this->policys_ = nullptr;};
    inline const vector<DeleteCheckPolicyResponseBody::Policys> & getPolicys() const { DARABONBA_PTR_GET_CONST(policys_, vector<DeleteCheckPolicyResponseBody::Policys>) };
    inline vector<DeleteCheckPolicyResponseBody::Policys> getPolicys() { DARABONBA_PTR_GET(policys_, vector<DeleteCheckPolicyResponseBody::Policys>) };
    inline DeleteCheckPolicyResponseBody& setPolicys(const vector<DeleteCheckPolicyResponseBody::Policys> & policys) { DARABONBA_PTR_SET_VALUE(policys_, policys) };
    inline DeleteCheckPolicyResponseBody& setPolicys(vector<DeleteCheckPolicyResponseBody::Policys> && policys) { DARABONBA_PTR_SET_RVALUE(policys_, policys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteCheckPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of deleted policy details.
    shared_ptr<vector<DeleteCheckPolicyResponseBody::Policys>> policys_ {};
    // The unique ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
