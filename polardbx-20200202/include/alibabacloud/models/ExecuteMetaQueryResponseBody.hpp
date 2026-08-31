// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMETAQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMETAQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ExecuteMetaQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteMetaQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteMetaQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ExecuteMetaQueryResponseBody() = default ;
    ExecuteMetaQueryResponseBody(const ExecuteMetaQueryResponseBody &) = default ;
    ExecuteMetaQueryResponseBody(ExecuteMetaQueryResponseBody &&) = default ;
    ExecuteMetaQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteMetaQueryResponseBody() = default ;
    ExecuteMetaQueryResponseBody& operator=(const ExecuteMetaQueryResponseBody &) = default ;
    ExecuteMetaQueryResponseBody& operator=(ExecuteMetaQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppliedOffset, appliedOffset_);
        DARABONBA_PTR_TO_JSON(AppliedRowLimit, appliedRowLimit_);
        DARABONBA_PTR_TO_JSON(Columns, columns_);
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(RecordsSizeBytes, recordsSizeBytes_);
        DARABONBA_PTR_TO_JSON(ReturnedRowCount, returnedRowCount_);
        DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
        DARABONBA_PTR_TO_JSON(Rows, rows_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppliedOffset, appliedOffset_);
        DARABONBA_PTR_FROM_JSON(AppliedRowLimit, appliedRowLimit_);
        DARABONBA_PTR_FROM_JSON(Columns, columns_);
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(RecordsSizeBytes, recordsSizeBytes_);
        DARABONBA_PTR_FROM_JSON(ReturnedRowCount, returnedRowCount_);
        DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
        DARABONBA_PTR_FROM_JSON(Rows, rows_);
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
      virtual bool empty() const override { return this->appliedOffset_ == nullptr
        && this->appliedRowLimit_ == nullptr && this->columns_ == nullptr && this->hasMore_ == nullptr && this->recordsSizeBytes_ == nullptr && this->returnedRowCount_ == nullptr
        && this->rowCount_ == nullptr && this->rows_ == nullptr; };
      // appliedOffset Field Functions 
      bool hasAppliedOffset() const { return this->appliedOffset_ != nullptr;};
      void deleteAppliedOffset() { this->appliedOffset_ = nullptr;};
      inline int64_t getAppliedOffset() const { DARABONBA_PTR_GET_DEFAULT(appliedOffset_, 0L) };
      inline Data& setAppliedOffset(int64_t appliedOffset) { DARABONBA_PTR_SET_VALUE(appliedOffset_, appliedOffset) };


      // appliedRowLimit Field Functions 
      bool hasAppliedRowLimit() const { return this->appliedRowLimit_ != nullptr;};
      void deleteAppliedRowLimit() { this->appliedRowLimit_ = nullptr;};
      inline int64_t getAppliedRowLimit() const { DARABONBA_PTR_GET_DEFAULT(appliedRowLimit_, 0L) };
      inline Data& setAppliedRowLimit(int64_t appliedRowLimit) { DARABONBA_PTR_SET_VALUE(appliedRowLimit_, appliedRowLimit) };


      // columns Field Functions 
      bool hasColumns() const { return this->columns_ != nullptr;};
      void deleteColumns() { this->columns_ = nullptr;};
      inline const vector<string> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
      inline vector<string> getColumns() { DARABONBA_PTR_GET(columns_, vector<string>) };
      inline Data& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
      inline Data& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline Data& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // recordsSizeBytes Field Functions 
      bool hasRecordsSizeBytes() const { return this->recordsSizeBytes_ != nullptr;};
      void deleteRecordsSizeBytes() { this->recordsSizeBytes_ = nullptr;};
      inline int64_t getRecordsSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(recordsSizeBytes_, 0L) };
      inline Data& setRecordsSizeBytes(int64_t recordsSizeBytes) { DARABONBA_PTR_SET_VALUE(recordsSizeBytes_, recordsSizeBytes) };


      // returnedRowCount Field Functions 
      bool hasReturnedRowCount() const { return this->returnedRowCount_ != nullptr;};
      void deleteReturnedRowCount() { this->returnedRowCount_ = nullptr;};
      inline int64_t getReturnedRowCount() const { DARABONBA_PTR_GET_DEFAULT(returnedRowCount_, 0L) };
      inline Data& setReturnedRowCount(int64_t returnedRowCount) { DARABONBA_PTR_SET_VALUE(returnedRowCount_, returnedRowCount) };


      // rowCount Field Functions 
      bool hasRowCount() const { return this->rowCount_ != nullptr;};
      void deleteRowCount() { this->rowCount_ = nullptr;};
      inline int32_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0) };
      inline Data& setRowCount(int32_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


      // rows Field Functions 
      bool hasRows() const { return this->rows_ != nullptr;};
      void deleteRows() { this->rows_ = nullptr;};
      inline const vector<Darabonba::Json> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getRows() { DARABONBA_PTR_GET(rows_, vector<Darabonba::Json>) };
      inline Data& setRows(const vector<Darabonba::Json> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
      inline Data& setRows(vector<Darabonba::Json> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    protected:
      shared_ptr<int64_t> appliedOffset_ {};
      shared_ptr<int64_t> appliedRowLimit_ {};
      // The column names.
      shared_ptr<vector<string>> columns_ {};
      shared_ptr<bool> hasMore_ {};
      shared_ptr<int64_t> recordsSizeBytes_ {};
      shared_ptr<int64_t> returnedRowCount_ {};
      // The total number of data rows.
      shared_ptr<int32_t> rowCount_ {};
      // The number of affected or returned rows. This field is available only for compute nodes (CNs).
      shared_ptr<vector<Darabonba::Json>> rows_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
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
        && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


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
      // The description is the same as above.
      shared_ptr<string> authAction_ {};
      // The description is the same as above.
      shared_ptr<string> authPrincipalType_ {};
      // The diagnostic information.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // NoPermissionType
      shared_ptr<string> noPermissionType_ {};
      // PolicyType
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const ExecuteMetaQueryResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, ExecuteMetaQueryResponseBody::AccessDeniedDetail) };
    inline ExecuteMetaQueryResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, ExecuteMetaQueryResponseBody::AccessDeniedDetail) };
    inline ExecuteMetaQueryResponseBody& setAccessDeniedDetail(const ExecuteMetaQueryResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline ExecuteMetaQueryResponseBody& setAccessDeniedDetail(ExecuteMetaQueryResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExecuteMetaQueryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExecuteMetaQueryResponseBody::Data) };
    inline ExecuteMetaQueryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExecuteMetaQueryResponseBody::Data) };
    inline ExecuteMetaQueryResponseBody& setData(const ExecuteMetaQueryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecuteMetaQueryResponseBody& setData(ExecuteMetaQueryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExecuteMetaQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteMetaQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExecuteMetaQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    shared_ptr<ExecuteMetaQueryResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The list of instance details.
    shared_ptr<ExecuteMetaQueryResponseBody::Data> data_ {};
    // The additional information returned by the operation. success is returned if the request is successful. Otherwise, an error code is returned.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
