// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLUMNARLOGSSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLUMNARLOGSSERESPONSEBODY_HPP_
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
  class QueryColumnarLogSSEResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryColumnarLogSSEResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AppliedOffset, appliedOffset_);
      DARABONBA_PTR_TO_JSON(AppliedRowLimit, appliedRowLimit_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Partial, partial_);
      DARABONBA_PTR_TO_JSON(QueryElapsedTimeMilliseconds, queryElapsedTimeMilliseconds_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RecordsSizeBytes, recordsSizeBytes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Retryable, retryable_);
      DARABONBA_PTR_TO_JSON(ReturnedRowCount, returnedRowCount_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryColumnarLogSSEResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AppliedOffset, appliedOffset_);
      DARABONBA_PTR_FROM_JSON(AppliedRowLimit, appliedRowLimit_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Partial, partial_);
      DARABONBA_PTR_FROM_JSON(QueryElapsedTimeMilliseconds, queryElapsedTimeMilliseconds_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RecordsSizeBytes, recordsSizeBytes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Retryable, retryable_);
      DARABONBA_PTR_FROM_JSON(ReturnedRowCount, returnedRowCount_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryColumnarLogSSEResponseBody() = default ;
    QueryColumnarLogSSEResponseBody(const QueryColumnarLogSSEResponseBody &) = default ;
    QueryColumnarLogSSEResponseBody(QueryColumnarLogSSEResponseBody &&) = default ;
    QueryColumnarLogSSEResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryColumnarLogSSEResponseBody() = default ;
    QueryColumnarLogSSEResponseBody& operator=(const QueryColumnarLogSSEResponseBody &) = default ;
    QueryColumnarLogSSEResponseBody& operator=(QueryColumnarLogSSEResponseBody &&) = default ;
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
      // As described above.
      shared_ptr<string> authAction_ {};
      // The display name of the authentication principal.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authentication principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The identity type used for authentication in the request. Valid values:
      // - SubUser: RAM user.
      // - AssumedRoleUser: RAM role.
      // - Federated: SSO federated identity.
      shared_ptr<string> authPrincipalType_ {};
      // The encoded diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // NoPermissionType
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->appliedOffset_ == nullptr && this->appliedRowLimit_ == nullptr && this->code_ == nullptr && this->hasMore_ == nullptr && this->message_ == nullptr
        && this->partial_ == nullptr && this->queryElapsedTimeMilliseconds_ == nullptr && this->queryId_ == nullptr && this->records_ == nullptr && this->recordsSizeBytes_ == nullptr
        && this->requestId_ == nullptr && this->retryable_ == nullptr && this->returnedRowCount_ == nullptr && this->sequence_ == nullptr && this->type_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const QueryColumnarLogSSEResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, QueryColumnarLogSSEResponseBody::AccessDeniedDetail) };
    inline QueryColumnarLogSSEResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, QueryColumnarLogSSEResponseBody::AccessDeniedDetail) };
    inline QueryColumnarLogSSEResponseBody& setAccessDeniedDetail(const QueryColumnarLogSSEResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline QueryColumnarLogSSEResponseBody& setAccessDeniedDetail(QueryColumnarLogSSEResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // appliedOffset Field Functions 
    bool hasAppliedOffset() const { return this->appliedOffset_ != nullptr;};
    void deleteAppliedOffset() { this->appliedOffset_ = nullptr;};
    inline int64_t getAppliedOffset() const { DARABONBA_PTR_GET_DEFAULT(appliedOffset_, 0L) };
    inline QueryColumnarLogSSEResponseBody& setAppliedOffset(int64_t appliedOffset) { DARABONBA_PTR_SET_VALUE(appliedOffset_, appliedOffset) };


    // appliedRowLimit Field Functions 
    bool hasAppliedRowLimit() const { return this->appliedRowLimit_ != nullptr;};
    void deleteAppliedRowLimit() { this->appliedRowLimit_ = nullptr;};
    inline int64_t getAppliedRowLimit() const { DARABONBA_PTR_GET_DEFAULT(appliedRowLimit_, 0L) };
    inline QueryColumnarLogSSEResponseBody& setAppliedRowLimit(int64_t appliedRowLimit) { DARABONBA_PTR_SET_VALUE(appliedRowLimit_, appliedRowLimit) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryColumnarLogSSEResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline QueryColumnarLogSSEResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryColumnarLogSSEResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // partial Field Functions 
    bool hasPartial() const { return this->partial_ != nullptr;};
    void deletePartial() { this->partial_ = nullptr;};
    inline bool getPartial() const { DARABONBA_PTR_GET_DEFAULT(partial_, false) };
    inline QueryColumnarLogSSEResponseBody& setPartial(bool partial) { DARABONBA_PTR_SET_VALUE(partial_, partial) };


    // queryElapsedTimeMilliseconds Field Functions 
    bool hasQueryElapsedTimeMilliseconds() const { return this->queryElapsedTimeMilliseconds_ != nullptr;};
    void deleteQueryElapsedTimeMilliseconds() { this->queryElapsedTimeMilliseconds_ = nullptr;};
    inline int64_t getQueryElapsedTimeMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(queryElapsedTimeMilliseconds_, 0L) };
    inline QueryColumnarLogSSEResponseBody& setQueryElapsedTimeMilliseconds(int64_t queryElapsedTimeMilliseconds) { DARABONBA_PTR_SET_VALUE(queryElapsedTimeMilliseconds_, queryElapsedTimeMilliseconds) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline QueryColumnarLogSSEResponseBody& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<map<string, string>> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<map<string, string>>) };
    inline vector<map<string, string>> getRecords() { DARABONBA_PTR_GET(records_, vector<map<string, string>>) };
    inline QueryColumnarLogSSEResponseBody& setRecords(const vector<map<string, string>> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline QueryColumnarLogSSEResponseBody& setRecords(vector<map<string, string>> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // recordsSizeBytes Field Functions 
    bool hasRecordsSizeBytes() const { return this->recordsSizeBytes_ != nullptr;};
    void deleteRecordsSizeBytes() { this->recordsSizeBytes_ = nullptr;};
    inline int64_t getRecordsSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(recordsSizeBytes_, 0L) };
    inline QueryColumnarLogSSEResponseBody& setRecordsSizeBytes(int64_t recordsSizeBytes) { DARABONBA_PTR_SET_VALUE(recordsSizeBytes_, recordsSizeBytes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryColumnarLogSSEResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retryable Field Functions 
    bool hasRetryable() const { return this->retryable_ != nullptr;};
    void deleteRetryable() { this->retryable_ = nullptr;};
    inline bool getRetryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
    inline QueryColumnarLogSSEResponseBody& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


    // returnedRowCount Field Functions 
    bool hasReturnedRowCount() const { return this->returnedRowCount_ != nullptr;};
    void deleteReturnedRowCount() { this->returnedRowCount_ = nullptr;};
    inline int64_t getReturnedRowCount() const { DARABONBA_PTR_GET_DEFAULT(returnedRowCount_, 0L) };
    inline QueryColumnarLogSSEResponseBody& setReturnedRowCount(int64_t returnedRowCount) { DARABONBA_PTR_SET_VALUE(returnedRowCount_, returnedRowCount) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int64_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0L) };
    inline QueryColumnarLogSSEResponseBody& setSequence(int64_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryColumnarLogSSEResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The details of the access denial.
    shared_ptr<QueryColumnarLogSSEResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // Returned only when Type is EOF. The top-level SQL LIMIT offset actually applied by the service. The value is 0 if the SQL statement does not specify an offset.
    shared_ptr<int64_t> appliedOffset_ {};
    // Returned only when Type is EOF. The maximum number of rows actually applied by the service after combining the top-level SQL LIMIT, MaxResultRows, and the current service policy. This value does not include the extra row used to detect HasMore.
    shared_ptr<int64_t> appliedRowLimit_ {};
    // The stable error code. This field is returned only when Type is ERROR. Handle errors based on this field instead of relying on the Message text.
    shared_ptr<string> code_ {};
    // Returned only when Type is EOF. Indicates whether the service or API row limit truncated the SQL submitted by the caller. A value of false when the SQL statement has a smaller LIMIT that was fully executed does not indicate that no more data exists in the underlying table.
    shared_ptr<bool> hasMore_ {};
    // The error summary. This field is returned only when Type is ERROR.
    shared_ptr<string> message_ {};
    // Indicates whether at least one RECORD event was sent before the ERROR occurred. A value of true indicates that the results already received by the caller are incomplete and must not be treated as complete query results.
    shared_ptr<bool> partial_ {};
    // Returned only when Type is EOF. The elapsed time from the start of JDBC statement execution to the completion of reading the last result row or probe row. Unit: milliseconds.
    shared_ptr<int64_t> queryElapsedTimeMilliseconds_ {};
    // The unique identifier generated by the service for this JDBC query. All events in the same SSE stream share the same QueryId.
    shared_ptr<string> queryId_ {};
    // Returned only when Type is RECORD. A batch of query results carried by this event. Each row is a JSON key-value object that maps column names to text values. SQL NULL values are encoded as the string null.
    shared_ptr<vector<map<string, string>>> records_ {};
    // Returned only when Type is EOF. The sum of UTF-8 bytes of the JSON objects for all returned rows. This value does not include arrays, SSE frames, or fixed response fields.
    shared_ptr<int64_t> recordsSizeBytes_ {};
    // The request ID. The same ID is used across all stages of the request, including access, authentication, routing, query execution, and all SSE events, to facilitate end-to-end troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the current ERROR is suitable for retry. A value of true indicates that you can retry the request based on the suggestion returned with the error. A value of false indicates that you need to modify the request or contact the service team for troubleshooting.
    shared_ptr<bool> retryable_ {};
    // Returned only when Type is EOF. The total number of result rows actually returned in this SSE stream.
    shared_ptr<int64_t> returnedRowCount_ {};
    // The sequence number of the RECORD event, starting from 1 and incrementing. This field indicates the event order and does not represent the result row offset.
    shared_ptr<int64_t> sequence_ {};
    // The SSE event type. RECORD indicates a batch of query results. EOF indicates that the query has completed. ERROR indicates that the query ended abnormally.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
