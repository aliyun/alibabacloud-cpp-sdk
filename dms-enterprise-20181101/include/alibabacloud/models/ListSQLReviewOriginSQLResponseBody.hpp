// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLRESPONSEBODY_HPP_
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
  class ListSQLReviewOriginSQLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSQLReviewOriginSQLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OriginSQLList, originSQLList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSQLReviewOriginSQLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OriginSQLList, originSQLList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSQLReviewOriginSQLResponseBody() = default ;
    ListSQLReviewOriginSQLResponseBody(const ListSQLReviewOriginSQLResponseBody &) = default ;
    ListSQLReviewOriginSQLResponseBody(ListSQLReviewOriginSQLResponseBody &&) = default ;
    ListSQLReviewOriginSQLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSQLReviewOriginSQLResponseBody() = default ;
    ListSQLReviewOriginSQLResponseBody& operator=(const ListSQLReviewOriginSQLResponseBody &) = default ;
    ListSQLReviewOriginSQLResponseBody& operator=(ListSQLReviewOriginSQLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OriginSQLList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OriginSQLList& obj) { 
        DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
        DARABONBA_PTR_TO_JSON(CheckedTime, checkedTime_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(ReviewSummary, reviewSummary_);
        DARABONBA_PTR_TO_JSON(SQLContent, SQLContent_);
        DARABONBA_PTR_TO_JSON(SQLId, SQLId_);
        DARABONBA_PTR_TO_JSON(SQLName, SQLName_);
        DARABONBA_PTR_TO_JSON(SQLReviewQueryKey, SQLReviewQueryKey_);
        DARABONBA_PTR_TO_JSON(SqlHash, sqlHash_);
        DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      };
      friend void from_json(const Darabonba::Json& j, OriginSQLList& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
        DARABONBA_PTR_FROM_JSON(CheckedTime, checkedTime_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(ReviewSummary, reviewSummary_);
        DARABONBA_PTR_FROM_JSON(SQLContent, SQLContent_);
        DARABONBA_PTR_FROM_JSON(SQLId, SQLId_);
        DARABONBA_PTR_FROM_JSON(SQLName, SQLName_);
        DARABONBA_PTR_FROM_JSON(SQLReviewQueryKey, SQLReviewQueryKey_);
        DARABONBA_PTR_FROM_JSON(SqlHash, sqlHash_);
        DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      };
      OriginSQLList() = default ;
      OriginSQLList(const OriginSQLList &) = default ;
      OriginSQLList(OriginSQLList &&) = default ;
      OriginSQLList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OriginSQLList() = default ;
      OriginSQLList& operator=(const OriginSQLList &) = default ;
      OriginSQLList& operator=(OriginSQLList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkStatus_ == nullptr
        && this->checkedTime_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr && this->reviewSummary_ == nullptr && this->SQLContent_ == nullptr
        && this->SQLId_ == nullptr && this->SQLName_ == nullptr && this->SQLReviewQueryKey_ == nullptr && this->sqlHash_ == nullptr && this->statusDesc_ == nullptr; };
      // checkStatus Field Functions 
      bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
      void deleteCheckStatus() { this->checkStatus_ = nullptr;};
      inline string getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
      inline OriginSQLList& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


      // checkedTime Field Functions 
      bool hasCheckedTime() const { return this->checkedTime_ != nullptr;};
      void deleteCheckedTime() { this->checkedTime_ = nullptr;};
      inline string getCheckedTime() const { DARABONBA_PTR_GET_DEFAULT(checkedTime_, "") };
      inline OriginSQLList& setCheckedTime(string checkedTime) { DARABONBA_PTR_SET_VALUE(checkedTime_, checkedTime) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
      inline OriginSQLList& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline OriginSQLList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // reviewSummary Field Functions 
      bool hasReviewSummary() const { return this->reviewSummary_ != nullptr;};
      void deleteReviewSummary() { this->reviewSummary_ = nullptr;};
      inline string getReviewSummary() const { DARABONBA_PTR_GET_DEFAULT(reviewSummary_, "") };
      inline OriginSQLList& setReviewSummary(string reviewSummary) { DARABONBA_PTR_SET_VALUE(reviewSummary_, reviewSummary) };


      // SQLContent Field Functions 
      bool hasSQLContent() const { return this->SQLContent_ != nullptr;};
      void deleteSQLContent() { this->SQLContent_ = nullptr;};
      inline string getSQLContent() const { DARABONBA_PTR_GET_DEFAULT(SQLContent_, "") };
      inline OriginSQLList& setSQLContent(string SQLContent) { DARABONBA_PTR_SET_VALUE(SQLContent_, SQLContent) };


      // SQLId Field Functions 
      bool hasSQLId() const { return this->SQLId_ != nullptr;};
      void deleteSQLId() { this->SQLId_ = nullptr;};
      inline int64_t getSQLId() const { DARABONBA_PTR_GET_DEFAULT(SQLId_, 0L) };
      inline OriginSQLList& setSQLId(int64_t SQLId) { DARABONBA_PTR_SET_VALUE(SQLId_, SQLId) };


      // SQLName Field Functions 
      bool hasSQLName() const { return this->SQLName_ != nullptr;};
      void deleteSQLName() { this->SQLName_ = nullptr;};
      inline string getSQLName() const { DARABONBA_PTR_GET_DEFAULT(SQLName_, "") };
      inline OriginSQLList& setSQLName(string SQLName) { DARABONBA_PTR_SET_VALUE(SQLName_, SQLName) };


      // SQLReviewQueryKey Field Functions 
      bool hasSQLReviewQueryKey() const { return this->SQLReviewQueryKey_ != nullptr;};
      void deleteSQLReviewQueryKey() { this->SQLReviewQueryKey_ = nullptr;};
      inline string getSQLReviewQueryKey() const { DARABONBA_PTR_GET_DEFAULT(SQLReviewQueryKey_, "") };
      inline OriginSQLList& setSQLReviewQueryKey(string SQLReviewQueryKey) { DARABONBA_PTR_SET_VALUE(SQLReviewQueryKey_, SQLReviewQueryKey) };


      // sqlHash Field Functions 
      bool hasSqlHash() const { return this->sqlHash_ != nullptr;};
      void deleteSqlHash() { this->sqlHash_ = nullptr;};
      inline string getSqlHash() const { DARABONBA_PTR_GET_DEFAULT(sqlHash_, "") };
      inline OriginSQLList& setSqlHash(string sqlHash) { DARABONBA_PTR_SET_VALUE(sqlHash_, sqlHash) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline OriginSQLList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    protected:
      // The review status of the SQL statement. Valid values:
      // 
      // *   **new**: The SQL statement was waiting to be reviewed.
      // *   **unknown**: The SQL statement cannot be parsed.
      // *   **check_not_pass**: The SQL statement failed to pass the review.
      // *   **check_pass**: The SQL statement passed the review.
      // *   **force_pass**: The SQL statement passed the manual review.
      // *   **force_not_pass**: The SQL statement failed to pass the manual review.
      shared_ptr<string> checkStatus_ {};
      // The time when the SQL statement was reviewed.
      shared_ptr<string> checkedTime_ {};
      // The file ID.
      shared_ptr<int64_t> fileId_ {};
      // The name of the file.
      shared_ptr<string> fileName_ {};
      // The statistics on the optimization suggestions for SQL statements. The value is a JSON string. Valid values:
      // 
      // *   **MUST_IMPROVE**: The SQL statements must be optimized.
      // *   **POTENTIAL_ISSUE**: The SQL statements contain potential issues.
      // *   **SUGGEST_IMPROVE**: We recommend that you optimize the SQL statements.
      // *   **USEDMSTOOLKIT**: We recommend that you change schemas without locking tables.
      // *   **USEDMSDML_UNLOCK**: We recommend that you change data without locking tables.
      // *   **TABLEINDEXSUGGEST**: We recommend that you optimize indexes for the SQL statements.
      shared_ptr<string> reviewSummary_ {};
      // The SQL statement in the file.
      shared_ptr<string> SQLContent_ {};
      // The ID of the SQL statement.
      shared_ptr<int64_t> SQLId_ {};
      // The name of the SQL statement.
      shared_ptr<string> SQLName_ {};
      // The key that is used to query the information about optimization suggestions. You can call the [GetSQLReviewOptimizeDetail](https://help.aliyun.com/document_detail/465919.html) operation to query the details based on this key.
      shared_ptr<string> SQLReviewQueryKey_ {};
      // The MD5 hash value that is obtained after the SQL statement is calculated by using a hash algorithm.
      shared_ptr<string> sqlHash_ {};
      // The description of the review status.
      shared_ptr<string> statusDesc_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->originSQLList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSQLReviewOriginSQLResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSQLReviewOriginSQLResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // originSQLList Field Functions 
    bool hasOriginSQLList() const { return this->originSQLList_ != nullptr;};
    void deleteOriginSQLList() { this->originSQLList_ = nullptr;};
    inline const vector<ListSQLReviewOriginSQLResponseBody::OriginSQLList> & getOriginSQLList() const { DARABONBA_PTR_GET_CONST(originSQLList_, vector<ListSQLReviewOriginSQLResponseBody::OriginSQLList>) };
    inline vector<ListSQLReviewOriginSQLResponseBody::OriginSQLList> getOriginSQLList() { DARABONBA_PTR_GET(originSQLList_, vector<ListSQLReviewOriginSQLResponseBody::OriginSQLList>) };
    inline ListSQLReviewOriginSQLResponseBody& setOriginSQLList(const vector<ListSQLReviewOriginSQLResponseBody::OriginSQLList> & originSQLList) { DARABONBA_PTR_SET_VALUE(originSQLList_, originSQLList) };
    inline ListSQLReviewOriginSQLResponseBody& setOriginSQLList(vector<ListSQLReviewOriginSQLResponseBody::OriginSQLList> && originSQLList) { DARABONBA_PTR_SET_RVALUE(originSQLList_, originSQLList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSQLReviewOriginSQLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSQLReviewOriginSQLResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSQLReviewOriginSQLResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code that is returned.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The information about the parsed SQL statements.
    shared_ptr<vector<ListSQLReviewOriginSQLResponseBody::OriginSQLList>> originSQLList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The number of SQL statements in the file.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
