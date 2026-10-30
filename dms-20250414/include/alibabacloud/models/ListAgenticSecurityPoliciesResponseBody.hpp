// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTICSECURITYPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTICSECURITYPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListAgenticSecurityPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgenticSecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgenticSecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAgenticSecurityPoliciesResponseBody() = default ;
    ListAgenticSecurityPoliciesResponseBody(const ListAgenticSecurityPoliciesResponseBody &) = default ;
    ListAgenticSecurityPoliciesResponseBody(ListAgenticSecurityPoliciesResponseBody &&) = default ;
    ListAgenticSecurityPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgenticSecurityPoliciesResponseBody() = default ;
    ListAgenticSecurityPoliciesResponseBody& operator=(const ListAgenticSecurityPoliciesResponseBody &) = default ;
    ListAgenticSecurityPoliciesResponseBody& operator=(ListAgenticSecurityPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunAccountUid, aliyunAccountUid_);
        DARABONBA_PTR_TO_JSON(BasePolicyId, basePolicyId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
        DARABONBA_PTR_TO_JSON(Readonly, readonly_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunAccountUid, aliyunAccountUid_);
        DARABONBA_PTR_FROM_JSON(BasePolicyId, basePolicyId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
        DARABONBA_PTR_FROM_JSON(Readonly, readonly_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliyunAccountUid_ == nullptr
        && this->basePolicyId_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->policyId_ == nullptr
        && this->policyName_ == nullptr && this->policyStatus_ == nullptr && this->readonly_ == nullptr && this->tags_ == nullptr && this->updatedBy_ == nullptr; };
      // aliyunAccountUid Field Functions 
      bool hasAliyunAccountUid() const { return this->aliyunAccountUid_ != nullptr;};
      void deleteAliyunAccountUid() { this->aliyunAccountUid_ = nullptr;};
      inline string getAliyunAccountUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunAccountUid_, "") };
      inline Data& setAliyunAccountUid(string aliyunAccountUid) { DARABONBA_PTR_SET_VALUE(aliyunAccountUid_, aliyunAccountUid) };


      // basePolicyId Field Functions 
      bool hasBasePolicyId() const { return this->basePolicyId_ != nullptr;};
      void deleteBasePolicyId() { this->basePolicyId_ = nullptr;};
      inline string getBasePolicyId() const { DARABONBA_PTR_GET_DEFAULT(basePolicyId_, "") };
      inline Data& setBasePolicyId(string basePolicyId) { DARABONBA_PTR_SET_VALUE(basePolicyId_, basePolicyId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Data& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline Data& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyStatus Field Functions 
      bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
      void deletePolicyStatus() { this->policyStatus_ = nullptr;};
      inline string getPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
      inline Data& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


      // readonly Field Functions 
      bool hasReadonly() const { return this->readonly_ != nullptr;};
      void deleteReadonly() { this->readonly_ = nullptr;};
      inline bool getReadonly() const { DARABONBA_PTR_GET_DEFAULT(readonly_, false) };
      inline Data& setReadonly(bool readonly) { DARABONBA_PTR_SET_VALUE(readonly_, readonly) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline Data& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // updatedBy Field Functions 
      bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
      void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
      inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
      inline Data& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


    protected:
      // The UID of the Alibaba Cloud account to which the user policy belongs. This value is not returned for system default policies.
      shared_ptr<string> aliyunAccountUid_ {};
      // The ID of the system default policy inherited by the user policy. This value is empty if no inheritance relationship is configured. This value is not returned for system default policies.
      shared_ptr<string> basePolicyId_ {};
      // The description of the security policy. The description of a system default policy is returned in the language of the request context.
      shared_ptr<string> description_ {};
      // The time when the security policy was created. The time is in the yyyy-MM-dd HH:mm:ss format and does not contain a time zone offset.
      shared_ptr<string> gmtCreate_ {};
      // The time when the security policy was last modified. The time is in the yyyy-MM-dd HH:mm:ss format and does not contain a time zone offset.
      shared_ptr<string> gmtModified_ {};
      // The business ID of the security policy. A system default policy ID starts with sp-sys-, and a user policy ID starts with sp-usr-.
      shared_ptr<string> policyId_ {};
      // The Policy Name of the security policy. The Policy Name of a system default policy is returned in the language of the request context.
      shared_ptr<string> policyName_ {};
      // The current state of the security policy. Valid values:
      // - ON: Enabled.
      // - OFF: Disabled.
      // - ARCHIVED: Archived.
      // All system default policies returned by this operation are in the ON state.
      shared_ptr<string> policyStatus_ {};
      // Specifies whether the policy is read-only. Valid values:
      // - true: The policy is a system default policy.
      // - false: The policy is a user policy of the current account.
      shared_ptr<bool> readonly_ {};
      // The tags of the system default policy. Multiple tags are separated by commas (,). This value is not returned for user policies.
      shared_ptr<string> tags_ {};
      // The identifier of the operator that last modified the policy. For a user policy, the operator ID is recorded first. If no operator ID is available, the UID of the current Alibaba Cloud account is recorded.
      shared_ptr<string> updatedBy_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAgenticSecurityPoliciesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAgenticSecurityPoliciesResponseBody::Data>) };
    inline vector<ListAgenticSecurityPoliciesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAgenticSecurityPoliciesResponseBody::Data>) };
    inline ListAgenticSecurityPoliciesResponseBody& setData(const vector<ListAgenticSecurityPoliciesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAgenticSecurityPoliciesResponseBody& setData(vector<ListAgenticSecurityPoliciesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAgenticSecurityPoliciesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListAgenticSecurityPoliciesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgenticSecurityPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAgenticSecurityPoliciesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAgenticSecurityPoliciesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of security policies returned by this query. Enabled system default policies are placed at the beginning, followed by the user policies on the current page. You can use Readonly to distinguish between the two types of policies.
    shared_ptr<vector<ListAgenticSecurityPoliciesResponseBody::Data>> data_ {};
    // The error code returned when the request fails. This parameter is empty when the request is successful.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the request fails. This parameter is empty when the request is successful.
    shared_ptr<string> errorMessage_ {};
    // The request ID, which is used to locate and trace this call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // - true: The request is successful.
    // - false: The request fails.
    shared_ptr<bool> success_ {};
    // The total number of policies that meet the query conditions. The value is the sum of the number of all enabled system default policies and the number of user policies of the current account that meet the filter conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
