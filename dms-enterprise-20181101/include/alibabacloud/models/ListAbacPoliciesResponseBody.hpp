// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABACPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTABACPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAbacPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAbacPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PolicyList, policyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAbacPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PolicyList, policyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAbacPoliciesResponseBody() = default ;
    ListAbacPoliciesResponseBody(const ListAbacPoliciesResponseBody &) = default ;
    ListAbacPoliciesResponseBody(ListAbacPoliciesResponseBody &&) = default ;
    ListAbacPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAbacPoliciesResponseBody() = default ;
    ListAbacPoliciesResponseBody& operator=(const ListAbacPoliciesResponseBody &) = default ;
    ListAbacPoliciesResponseBody& operator=(ListAbacPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyList& obj) { 
        DARABONBA_PTR_TO_JSON(AbacPolicyContent, abacPolicyContent_);
        DARABONBA_PTR_TO_JSON(AbacPolicyDesc, abacPolicyDesc_);
        DARABONBA_PTR_TO_JSON(AbacPolicyId, abacPolicyId_);
        DARABONBA_PTR_TO_JSON(AbacPolicyName, abacPolicyName_);
        DARABONBA_PTR_TO_JSON(AbacPolicySource, abacPolicySource_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyList& obj) { 
        DARABONBA_PTR_FROM_JSON(AbacPolicyContent, abacPolicyContent_);
        DARABONBA_PTR_FROM_JSON(AbacPolicyDesc, abacPolicyDesc_);
        DARABONBA_PTR_FROM_JSON(AbacPolicyId, abacPolicyId_);
        DARABONBA_PTR_FROM_JSON(AbacPolicyName, abacPolicyName_);
        DARABONBA_PTR_FROM_JSON(AbacPolicySource, abacPolicySource_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      };
      PolicyList() = default ;
      PolicyList(const PolicyList &) = default ;
      PolicyList(PolicyList &&) = default ;
      PolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyList() = default ;
      PolicyList& operator=(const PolicyList &) = default ;
      PolicyList& operator=(PolicyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->abacPolicyContent_ == nullptr
        && this->abacPolicyDesc_ == nullptr && this->abacPolicyId_ == nullptr && this->abacPolicyName_ == nullptr && this->abacPolicySource_ == nullptr && this->creatorId_ == nullptr; };
      // abacPolicyContent Field Functions 
      bool hasAbacPolicyContent() const { return this->abacPolicyContent_ != nullptr;};
      void deleteAbacPolicyContent() { this->abacPolicyContent_ = nullptr;};
      inline string getAbacPolicyContent() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyContent_, "") };
      inline PolicyList& setAbacPolicyContent(string abacPolicyContent) { DARABONBA_PTR_SET_VALUE(abacPolicyContent_, abacPolicyContent) };


      // abacPolicyDesc Field Functions 
      bool hasAbacPolicyDesc() const { return this->abacPolicyDesc_ != nullptr;};
      void deleteAbacPolicyDesc() { this->abacPolicyDesc_ = nullptr;};
      inline string getAbacPolicyDesc() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyDesc_, "") };
      inline PolicyList& setAbacPolicyDesc(string abacPolicyDesc) { DARABONBA_PTR_SET_VALUE(abacPolicyDesc_, abacPolicyDesc) };


      // abacPolicyId Field Functions 
      bool hasAbacPolicyId() const { return this->abacPolicyId_ != nullptr;};
      void deleteAbacPolicyId() { this->abacPolicyId_ = nullptr;};
      inline int64_t getAbacPolicyId() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyId_, 0L) };
      inline PolicyList& setAbacPolicyId(int64_t abacPolicyId) { DARABONBA_PTR_SET_VALUE(abacPolicyId_, abacPolicyId) };


      // abacPolicyName Field Functions 
      bool hasAbacPolicyName() const { return this->abacPolicyName_ != nullptr;};
      void deleteAbacPolicyName() { this->abacPolicyName_ = nullptr;};
      inline string getAbacPolicyName() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyName_, "") };
      inline PolicyList& setAbacPolicyName(string abacPolicyName) { DARABONBA_PTR_SET_VALUE(abacPolicyName_, abacPolicyName) };


      // abacPolicySource Field Functions 
      bool hasAbacPolicySource() const { return this->abacPolicySource_ != nullptr;};
      void deleteAbacPolicySource() { this->abacPolicySource_ = nullptr;};
      inline string getAbacPolicySource() const { DARABONBA_PTR_GET_DEFAULT(abacPolicySource_, "") };
      inline PolicyList& setAbacPolicySource(string abacPolicySource) { DARABONBA_PTR_SET_VALUE(abacPolicySource_, abacPolicySource) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline int64_t getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
      inline PolicyList& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    protected:
      // The content of the policy.
      shared_ptr<string> abacPolicyContent_ {};
      // The description of the policy.
      shared_ptr<string> abacPolicyDesc_ {};
      // The ID of the policy.
      shared_ptr<int64_t> abacPolicyId_ {};
      // The name of the policy.
      shared_ptr<string> abacPolicyName_ {};
      // The source of the policy.
      shared_ptr<string> abacPolicySource_ {};
      // The ID of the user who created the policy.
      shared_ptr<int64_t> creatorId_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->policyList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tid_ == nullptr
        && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAbacPoliciesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListAbacPoliciesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // policyList Field Functions 
    bool hasPolicyList() const { return this->policyList_ != nullptr;};
    void deletePolicyList() { this->policyList_ = nullptr;};
    inline const vector<ListAbacPoliciesResponseBody::PolicyList> & getPolicyList() const { DARABONBA_PTR_GET_CONST(policyList_, vector<ListAbacPoliciesResponseBody::PolicyList>) };
    inline vector<ListAbacPoliciesResponseBody::PolicyList> getPolicyList() { DARABONBA_PTR_GET(policyList_, vector<ListAbacPoliciesResponseBody::PolicyList>) };
    inline ListAbacPoliciesResponseBody& setPolicyList(const vector<ListAbacPoliciesResponseBody::PolicyList> & policyList) { DARABONBA_PTR_SET_VALUE(policyList_, policyList) };
    inline ListAbacPoliciesResponseBody& setPolicyList(vector<ListAbacPoliciesResponseBody::PolicyList> && policyList) { DARABONBA_PTR_SET_RVALUE(policyList_, policyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAbacPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAbacPoliciesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListAbacPoliciesResponseBody& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAbacPoliciesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code that is returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The details of the permission policies.
    shared_ptr<vector<ListAbacPoliciesResponseBody::PolicyList>> policyList_ {};
    // The request ID. You can use the request ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The ID of the tenant.
    shared_ptr<int64_t> tid_ {};
    // The total number of policies.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
