// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLUMNARLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLUMNARLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class QueryColumnarLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryColumnarLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AppliedOffset, appliedOffset_);
      DARABONBA_PTR_TO_JSON(AppliedRowLimit, appliedRowLimit_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(QueryElapsedTimeMilliseconds, queryElapsedTimeMilliseconds_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RecordsSizeBytes, recordsSizeBytes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReturnedRowCount, returnedRowCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryColumnarLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AppliedOffset, appliedOffset_);
      DARABONBA_PTR_FROM_JSON(AppliedRowLimit, appliedRowLimit_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(QueryElapsedTimeMilliseconds, queryElapsedTimeMilliseconds_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RecordsSizeBytes, recordsSizeBytes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReturnedRowCount, returnedRowCount_);
    };
    QueryColumnarLogResponseBody() = default ;
    QueryColumnarLogResponseBody(const QueryColumnarLogResponseBody &) = default ;
    QueryColumnarLogResponseBody(QueryColumnarLogResponseBody &&) = default ;
    QueryColumnarLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryColumnarLogResponseBody() = default ;
    QueryColumnarLogResponseBody& operator=(const QueryColumnarLogResponseBody &) = default ;
    QueryColumnarLogResponseBody& operator=(QueryColumnarLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // The authentication action.
      shared_ptr<string> authAction_ {};
      // The display name of the authentication principal.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authentication principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The type of the authentication principal.
      shared_ptr<string> authPrincipalType_ {};
      // The diagnostic information.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // The type of the missing permission.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->appliedOffset_ == nullptr && this->appliedRowLimit_ == nullptr && this->hasMore_ == nullptr && this->queryElapsedTimeMilliseconds_ == nullptr && this->queryId_ == nullptr
        && this->records_ == nullptr && this->recordsSizeBytes_ == nullptr && this->requestId_ == nullptr && this->returnedRowCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const QueryColumnarLogResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, QueryColumnarLogResponseBody::AccessDeniedDetail) };
    inline QueryColumnarLogResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, QueryColumnarLogResponseBody::AccessDeniedDetail) };
    inline QueryColumnarLogResponseBody& setAccessDeniedDetail(const QueryColumnarLogResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline QueryColumnarLogResponseBody& setAccessDeniedDetail(QueryColumnarLogResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // appliedOffset Field Functions 
    bool hasAppliedOffset() const { return this->appliedOffset_ != nullptr;};
    void deleteAppliedOffset() { this->appliedOffset_ = nullptr;};
    inline int64_t getAppliedOffset() const { DARABONBA_PTR_GET_DEFAULT(appliedOffset_, 0L) };
    inline QueryColumnarLogResponseBody& setAppliedOffset(int64_t appliedOffset) { DARABONBA_PTR_SET_VALUE(appliedOffset_, appliedOffset) };


    // appliedRowLimit Field Functions 
    bool hasAppliedRowLimit() const { return this->appliedRowLimit_ != nullptr;};
    void deleteAppliedRowLimit() { this->appliedRowLimit_ = nullptr;};
    inline int64_t getAppliedRowLimit() const { DARABONBA_PTR_GET_DEFAULT(appliedRowLimit_, 0L) };
    inline QueryColumnarLogResponseBody& setAppliedRowLimit(int64_t appliedRowLimit) { DARABONBA_PTR_SET_VALUE(appliedRowLimit_, appliedRowLimit) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline QueryColumnarLogResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // queryElapsedTimeMilliseconds Field Functions 
    bool hasQueryElapsedTimeMilliseconds() const { return this->queryElapsedTimeMilliseconds_ != nullptr;};
    void deleteQueryElapsedTimeMilliseconds() { this->queryElapsedTimeMilliseconds_ = nullptr;};
    inline int64_t getQueryElapsedTimeMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(queryElapsedTimeMilliseconds_, 0L) };
    inline QueryColumnarLogResponseBody& setQueryElapsedTimeMilliseconds(int64_t queryElapsedTimeMilliseconds) { DARABONBA_PTR_SET_VALUE(queryElapsedTimeMilliseconds_, queryElapsedTimeMilliseconds) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline QueryColumnarLogResponseBody& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<map<string, string>> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<map<string, string>>) };
    inline vector<map<string, string>> getRecords() { DARABONBA_PTR_GET(records_, vector<map<string, string>>) };
    inline QueryColumnarLogResponseBody& setRecords(const vector<map<string, string>> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline QueryColumnarLogResponseBody& setRecords(vector<map<string, string>> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // recordsSizeBytes Field Functions 
    bool hasRecordsSizeBytes() const { return this->recordsSizeBytes_ != nullptr;};
    void deleteRecordsSizeBytes() { this->recordsSizeBytes_ = nullptr;};
    inline int64_t getRecordsSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(recordsSizeBytes_, 0L) };
    inline QueryColumnarLogResponseBody& setRecordsSizeBytes(int64_t recordsSizeBytes) { DARABONBA_PTR_SET_VALUE(recordsSizeBytes_, recordsSizeBytes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryColumnarLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // returnedRowCount Field Functions 
    bool hasReturnedRowCount() const { return this->returnedRowCount_ != nullptr;};
    void deleteReturnedRowCount() { this->returnedRowCount_ = nullptr;};
    inline int64_t getReturnedRowCount() const { DARABONBA_PTR_GET_DEFAULT(returnedRowCount_, 0L) };
    inline QueryColumnarLogResponseBody& setReturnedRowCount(int64_t returnedRowCount) { DARABONBA_PTR_SET_VALUE(returnedRowCount_, returnedRowCount) };


  protected:
    // The details about the access denial.
    shared_ptr<QueryColumnarLogResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The top-level SQL LIMIT offset that the service actually applied. The value is 0 if no offset is specified in the SQL statement.
    shared_ptr<int64_t> appliedOffset_ {};
    // The maximum number of rows that the service actually returns after evaluating the top-level SQL LIMIT clause, MaxResultRows, the default value of the synchronous API, and the current service policy. This value does not include the extra row used to detect HasMore.
    shared_ptr<int64_t> appliedRowLimit_ {};
    // Indicates whether the service or API row limit truncated the SQL statement submitted by the caller. The value is false when the SQL statement with a smaller LIMIT clause is fully executed, which does not indicate that no more data exists in the underlying table.
    shared_ptr<bool> hasMore_ {};
    // The elapsed time from the start of the JDBC statement execution to the completion of reading the last returned row or probe row. Unit: milliseconds.
    shared_ptr<int64_t> queryElapsedTimeMilliseconds_ {};
    // The unique identifier generated by the service for this JDBC query.
    shared_ptr<string> queryId_ {};
    // The list of query results. Each row is a JSON key-value object that maps column names to text values. All scalar values are returned as strings. SQL NULL is encoded as the string null, and empty strings remain as empty strings.
    shared_ptr<vector<map<string, string>>> records_ {};
    // The total number of UTF-8 bytes of the JSON objects across all returned rows, excluding the array and fixed response fields. The complete JSON response of the synchronous API is also subject to a 16 MiB upper limit.
    shared_ptr<int64_t> recordsSizeBytes_ {};
    // The request ID. This ID is used throughout the entire process from access, authentication, and routing to query completion, which facilitates end-to-end troubleshooting.
    shared_ptr<string> requestId_ {};
    // The number of result rows actually returned in this synchronous response.
    shared_ptr<int64_t> returnedRowCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
