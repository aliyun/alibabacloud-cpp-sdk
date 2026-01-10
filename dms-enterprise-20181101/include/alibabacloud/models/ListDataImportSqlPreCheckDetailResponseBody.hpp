// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAIMPORTSQLPRECHECKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAIMPORTSQLPRECHECKDETAILRESPONSEBODY_HPP_
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
  class ListDataImportSQLPreCheckDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataImportSQLPreCheckDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PreCheckSQLDetailList, preCheckSQLDetailList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataImportSQLPreCheckDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PreCheckSQLDetailList, preCheckSQLDetailList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataImportSQLPreCheckDetailResponseBody() = default ;
    ListDataImportSQLPreCheckDetailResponseBody(const ListDataImportSQLPreCheckDetailResponseBody &) = default ;
    ListDataImportSQLPreCheckDetailResponseBody(ListDataImportSQLPreCheckDetailResponseBody &&) = default ;
    ListDataImportSQLPreCheckDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataImportSQLPreCheckDetailResponseBody() = default ;
    ListDataImportSQLPreCheckDetailResponseBody& operator=(const ListDataImportSQLPreCheckDetailResponseBody &) = default ;
    ListDataImportSQLPreCheckDetailResponseBody& operator=(ListDataImportSQLPreCheckDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PreCheckSQLDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreCheckSQLDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(Skip, skip_);
        DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
        DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
        DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      };
      friend void from_json(const Darabonba::Json& j, PreCheckSQLDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(Skip, skip_);
        DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
        DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
        DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      };
      PreCheckSQLDetailList() = default ;
      PreCheckSQLDetailList(const PreCheckSQLDetailList &) = default ;
      PreCheckSQLDetailList(PreCheckSQLDetailList &&) = default ;
      PreCheckSQLDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreCheckSQLDetailList() = default ;
      PreCheckSQLDetailList& operator=(const PreCheckSQLDetailList &) = default ;
      PreCheckSQLDetailList& operator=(PreCheckSQLDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->skip_ == nullptr
        && this->sqlId_ == nullptr && this->sqlType_ == nullptr && this->statusCode_ == nullptr; };
      // skip Field Functions 
      bool hasSkip() const { return this->skip_ != nullptr;};
      void deleteSkip() { this->skip_ = nullptr;};
      inline bool getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
      inline PreCheckSQLDetailList& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


      // sqlId Field Functions 
      bool hasSqlId() const { return this->sqlId_ != nullptr;};
      void deleteSqlId() { this->sqlId_ = nullptr;};
      inline int64_t getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, 0L) };
      inline PreCheckSQLDetailList& setSqlId(int64_t sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


      // sqlType Field Functions 
      bool hasSqlType() const { return this->sqlType_ != nullptr;};
      void deleteSqlType() { this->sqlType_ = nullptr;};
      inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
      inline PreCheckSQLDetailList& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
      inline PreCheckSQLDetailList& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    protected:
      // Indicates whether the precheck of the SQL statement was skipped. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> skip_ {};
      // The SQL ID, which indicates the sequence number of the SQL statement. The number starts with 1.
      shared_ptr<int64_t> sqlId_ {};
      // The type of the SQL statement, such as DELETE, UPDATE, or ALTER_TABLE.
      shared_ptr<string> sqlType_ {};
      // The state of the ticket. Valid values:
      // 
      // *   **INIT**: The ticket was being initialized.
      // *   **RUNNING**: The ticket was in progress.
      // *   **SUCCESS**: The ticket was complete.
      // *   **TIMEOUT**: The ticket was skipped due to timeout.
      // *   **FAIL**: The ticket failed.
      shared_ptr<string> statusCode_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->preCheckSQLDetailList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataImportSQLPreCheckDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataImportSQLPreCheckDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // preCheckSQLDetailList Field Functions 
    bool hasPreCheckSQLDetailList() const { return this->preCheckSQLDetailList_ != nullptr;};
    void deletePreCheckSQLDetailList() { this->preCheckSQLDetailList_ = nullptr;};
    inline const vector<ListDataImportSQLPreCheckDetailResponseBody::PreCheckSQLDetailList> & getPreCheckSQLDetailList() const { DARABONBA_PTR_GET_CONST(preCheckSQLDetailList_, vector<ListDataImportSQLPreCheckDetailResponseBody::PreCheckSQLDetailList>) };
    inline vector<ListDataImportSQLPreCheckDetailResponseBody::PreCheckSQLDetailList> getPreCheckSQLDetailList() { DARABONBA_PTR_GET(preCheckSQLDetailList_, vector<ListDataImportSQLPreCheckDetailResponseBody::PreCheckSQLDetailList>) };
    inline ListDataImportSQLPreCheckDetailResponseBody& setPreCheckSQLDetailList(const vector<ListDataImportSQLPreCheckDetailResponseBody::PreCheckSQLDetailList> & preCheckSQLDetailList) { DARABONBA_PTR_SET_VALUE(preCheckSQLDetailList_, preCheckSQLDetailList) };
    inline ListDataImportSQLPreCheckDetailResponseBody& setPreCheckSQLDetailList(vector<ListDataImportSQLPreCheckDetailResponseBody::PreCheckSQLDetailList> && preCheckSQLDetailList) { DARABONBA_PTR_SET_RVALUE(preCheckSQLDetailList_, preCheckSQLDetailList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataImportSQLPreCheckDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataImportSQLPreCheckDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDataImportSQLPreCheckDetailResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The precheck information of SQL statements.
    shared_ptr<vector<ListDataImportSQLPreCheckDetailResponseBody::PreCheckSQLDetailList>> preCheckSQLDetailList_ {};
    // The request ID. You can use the ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The number of SQL statements.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
