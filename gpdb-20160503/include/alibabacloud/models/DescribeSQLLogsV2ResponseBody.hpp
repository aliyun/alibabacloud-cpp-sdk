// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGSV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGSV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeSQLLogsV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogsV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogsV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSQLLogsV2ResponseBody() = default ;
    DescribeSQLLogsV2ResponseBody(const DescribeSQLLogsV2ResponseBody &) = default ;
    DescribeSQLLogsV2ResponseBody(DescribeSQLLogsV2ResponseBody &&) = default ;
    DescribeSQLLogsV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogsV2ResponseBody() = default ;
    DescribeSQLLogsV2ResponseBody& operator=(const DescribeSQLLogsV2ResponseBody &) = default ;
    DescribeSQLLogsV2ResponseBody& operator=(DescribeSQLLogsV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(DBName, DBName_);
        DARABONBA_PTR_TO_JSON(DBRole, DBRole_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(ExecuteCost, executeCost_);
        DARABONBA_PTR_TO_JSON(ExecuteState, executeState_);
        DARABONBA_PTR_TO_JSON(OperationClass, operationClass_);
        DARABONBA_PTR_TO_JSON(OperationExecuteTime, operationExecuteTime_);
        DARABONBA_PTR_TO_JSON(OperationType, operationType_);
        DARABONBA_PTR_TO_JSON(QueryId, queryId_);
        DARABONBA_PTR_TO_JSON(ReturnRowCounts, returnRowCounts_);
        DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
        DARABONBA_PTR_TO_JSON(ScanRowCounts, scanRowCounts_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(SourceIP, sourceIP_);
        DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(DBName, DBName_);
        DARABONBA_PTR_FROM_JSON(DBRole, DBRole_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(ExecuteCost, executeCost_);
        DARABONBA_PTR_FROM_JSON(ExecuteState, executeState_);
        DARABONBA_PTR_FROM_JSON(OperationClass, operationClass_);
        DARABONBA_PTR_FROM_JSON(OperationExecuteTime, operationExecuteTime_);
        DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
        DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
        DARABONBA_PTR_FROM_JSON(ReturnRowCounts, returnRowCounts_);
        DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
        DARABONBA_PTR_FROM_JSON(ScanRowCounts, scanRowCounts_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(SourceIP, sourceIP_);
        DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountName_ == nullptr
        && this->DBName_ == nullptr && this->DBRole_ == nullptr && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->executeCost_ == nullptr
        && this->executeState_ == nullptr && this->operationClass_ == nullptr && this->operationExecuteTime_ == nullptr && this->operationType_ == nullptr && this->queryId_ == nullptr
        && this->returnRowCounts_ == nullptr && this->SQLText_ == nullptr && this->scanRowCounts_ == nullptr && this->sessionId_ == nullptr && this->sourceIP_ == nullptr
        && this->sourcePort_ == nullptr; };
      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Items& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // DBName Field Functions 
      bool hasDBName() const { return this->DBName_ != nullptr;};
      void deleteDBName() { this->DBName_ = nullptr;};
      inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
      inline Items& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      // DBRole Field Functions 
      bool hasDBRole() const { return this->DBRole_ != nullptr;};
      void deleteDBRole() { this->DBRole_ = nullptr;};
      inline string getDBRole() const { DARABONBA_PTR_GET_DEFAULT(DBRole_, "") };
      inline Items& setDBRole(string DBRole) { DARABONBA_PTR_SET_VALUE(DBRole_, DBRole) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Items& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Items& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // executeCost Field Functions 
      bool hasExecuteCost() const { return this->executeCost_ != nullptr;};
      void deleteExecuteCost() { this->executeCost_ = nullptr;};
      inline float getExecuteCost() const { DARABONBA_PTR_GET_DEFAULT(executeCost_, 0.0) };
      inline Items& setExecuteCost(float executeCost) { DARABONBA_PTR_SET_VALUE(executeCost_, executeCost) };


      // executeState Field Functions 
      bool hasExecuteState() const { return this->executeState_ != nullptr;};
      void deleteExecuteState() { this->executeState_ = nullptr;};
      inline string getExecuteState() const { DARABONBA_PTR_GET_DEFAULT(executeState_, "") };
      inline Items& setExecuteState(string executeState) { DARABONBA_PTR_SET_VALUE(executeState_, executeState) };


      // operationClass Field Functions 
      bool hasOperationClass() const { return this->operationClass_ != nullptr;};
      void deleteOperationClass() { this->operationClass_ = nullptr;};
      inline string getOperationClass() const { DARABONBA_PTR_GET_DEFAULT(operationClass_, "") };
      inline Items& setOperationClass(string operationClass) { DARABONBA_PTR_SET_VALUE(operationClass_, operationClass) };


      // operationExecuteTime Field Functions 
      bool hasOperationExecuteTime() const { return this->operationExecuteTime_ != nullptr;};
      void deleteOperationExecuteTime() { this->operationExecuteTime_ = nullptr;};
      inline string getOperationExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(operationExecuteTime_, "") };
      inline Items& setOperationExecuteTime(string operationExecuteTime) { DARABONBA_PTR_SET_VALUE(operationExecuteTime_, operationExecuteTime) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline Items& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // queryId Field Functions 
      bool hasQueryId() const { return this->queryId_ != nullptr;};
      void deleteQueryId() { this->queryId_ = nullptr;};
      inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
      inline Items& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


      // returnRowCounts Field Functions 
      bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
      void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
      inline int64_t getReturnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, 0L) };
      inline Items& setReturnRowCounts(int64_t returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


      // SQLText Field Functions 
      bool hasSQLText() const { return this->SQLText_ != nullptr;};
      void deleteSQLText() { this->SQLText_ = nullptr;};
      inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
      inline Items& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


      // scanRowCounts Field Functions 
      bool hasScanRowCounts() const { return this->scanRowCounts_ != nullptr;};
      void deleteScanRowCounts() { this->scanRowCounts_ = nullptr;};
      inline int64_t getScanRowCounts() const { DARABONBA_PTR_GET_DEFAULT(scanRowCounts_, 0L) };
      inline Items& setScanRowCounts(int64_t scanRowCounts) { DARABONBA_PTR_SET_VALUE(scanRowCounts_, scanRowCounts) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Items& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // sourceIP Field Functions 
      bool hasSourceIP() const { return this->sourceIP_ != nullptr;};
      void deleteSourceIP() { this->sourceIP_ = nullptr;};
      inline string getSourceIP() const { DARABONBA_PTR_GET_DEFAULT(sourceIP_, "") };
      inline Items& setSourceIP(string sourceIP) { DARABONBA_PTR_SET_VALUE(sourceIP_, sourceIP) };


      // sourcePort Field Functions 
      bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
      void deleteSourcePort() { this->sourcePort_ = nullptr;};
      inline int32_t getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0) };
      inline Items& setSourcePort(int32_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    protected:
      // The database account that executes the SQL statement.
      shared_ptr<string> accountName_ {};
      // The name of the database.
      shared_ptr<string> DBName_ {};
      // The role of the database.
      shared_ptr<string> DBRole_ {};
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The error message.
      shared_ptr<string> errorMsg_ {};
      // The execution duration of the SQL statement.
      shared_ptr<float> executeCost_ {};
      // The execution status of the SQL statement. Valid values:
      // 
      // *   **success**
      // *   **fail**
      shared_ptr<string> executeState_ {};
      // The type of the query language.
      shared_ptr<string> operationClass_ {};
      // The time when the SQL statement was executed.
      shared_ptr<string> operationExecuteTime_ {};
      // The type of the SQL statement.
      shared_ptr<string> operationType_ {};
      // The query ID.
      shared_ptr<string> queryId_ {};
      // The number of entries returned.
      shared_ptr<int64_t> returnRowCounts_ {};
      // The SQL statement.
      shared_ptr<string> SQLText_ {};
      // The number of entries scanned.
      shared_ptr<int64_t> scanRowCounts_ {};
      // The ID of the session.
      shared_ptr<string> sessionId_ {};
      // The source IP address.
      shared_ptr<string> sourceIP_ {};
      // The number of the source port.
      shared_ptr<int32_t> sourcePort_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeSQLLogsV2ResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeSQLLogsV2ResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeSQLLogsV2ResponseBody::Items>) };
    inline vector<DescribeSQLLogsV2ResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeSQLLogsV2ResponseBody::Items>) };
    inline DescribeSQLLogsV2ResponseBody& setItems(const vector<DescribeSQLLogsV2ResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSQLLogsV2ResponseBody& setItems(vector<DescribeSQLLogsV2ResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSQLLogsV2ResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeSQLLogsV2ResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLLogsV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The queried SQL execution logs.
    shared_ptr<vector<DescribeSQLLogsV2ResponseBody::Items>> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
