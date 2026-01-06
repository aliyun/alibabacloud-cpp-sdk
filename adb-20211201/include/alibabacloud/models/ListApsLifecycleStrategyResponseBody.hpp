// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPSLIFECYCLESTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPSLIFECYCLESTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListApsLifecycleStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApsLifecycleStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApsLifecycleStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApsLifecycleStrategyResponseBody() = default ;
    ListApsLifecycleStrategyResponseBody(const ListApsLifecycleStrategyResponseBody &) = default ;
    ListApsLifecycleStrategyResponseBody(ListApsLifecycleStrategyResponseBody &&) = default ;
    ListApsLifecycleStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApsLifecycleStrategyResponseBody() = default ;
    ListApsLifecycleStrategyResponseBody& operator=(const ListApsLifecycleStrategyResponseBody &) = default ;
    ListApsLifecycleStrategyResponseBody& operator=(ListApsLifecycleStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ApsJobId, apsJobId_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(OperationTables, operationTables_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StrategyDatabases, strategyDatabases_);
        DARABONBA_PTR_TO_JSON(StrategyDesc, strategyDesc_);
        DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_TO_JSON(StrategyTables, strategyTables_);
        DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
        DARABONBA_PTR_TO_JSON(StrategyValue, strategyValue_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ApsJobId, apsJobId_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(OperationTables, operationTables_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StrategyDatabases, strategyDatabases_);
        DARABONBA_PTR_FROM_JSON(StrategyDesc, strategyDesc_);
        DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_FROM_JSON(StrategyTables, strategyTables_);
        DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
        DARABONBA_PTR_FROM_JSON(StrategyValue, strategyValue_);
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
      class OperationTables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OperationTables& obj) { 
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(ProcessAll, processAll_);
          DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
        };
        friend void from_json(const Darabonba::Json& j, OperationTables& obj) { 
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(ProcessAll, processAll_);
          DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
        };
        OperationTables() = default ;
        OperationTables(const OperationTables &) = default ;
        OperationTables(OperationTables &&) = default ;
        OperationTables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OperationTables() = default ;
        OperationTables& operator=(const OperationTables &) = default ;
        OperationTables& operator=(OperationTables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->processAll_ == nullptr && this->tableNames_ == nullptr; };
        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline OperationTables& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // processAll Field Functions 
        bool hasProcessAll() const { return this->processAll_ != nullptr;};
        void deleteProcessAll() { this->processAll_ = nullptr;};
        inline string getProcessAll() const { DARABONBA_PTR_GET_DEFAULT(processAll_, "") };
        inline OperationTables& setProcessAll(string processAll) { DARABONBA_PTR_SET_VALUE(processAll_, processAll) };


        // tableNames Field Functions 
        bool hasTableNames() const { return this->tableNames_ != nullptr;};
        void deleteTableNames() { this->tableNames_ = nullptr;};
        inline const vector<string> & getTableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
        inline vector<string> getTableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
        inline OperationTables& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
        inline OperationTables& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


      protected:
        // The name of the database.
        shared_ptr<string> databaseName_ {};
        // Indicates whether all tables in the database are selected.
        shared_ptr<string> processAll_ {};
        // The names of the tables.
        shared_ptr<vector<string>> tableNames_ {};
      };

      virtual bool empty() const override { return this->apsJobId_ == nullptr
        && this->createdTime_ == nullptr && this->DBClusterId_ == nullptr && this->modifiedTime_ == nullptr && this->operationTables_ == nullptr && this->status_ == nullptr
        && this->strategyDatabases_ == nullptr && this->strategyDesc_ == nullptr && this->strategyName_ == nullptr && this->strategyTables_ == nullptr && this->strategyType_ == nullptr
        && this->strategyValue_ == nullptr; };
      // apsJobId Field Functions 
      bool hasApsJobId() const { return this->apsJobId_ != nullptr;};
      void deleteApsJobId() { this->apsJobId_ = nullptr;};
      inline string getApsJobId() const { DARABONBA_PTR_GET_DEFAULT(apsJobId_, "") };
      inline Items& setApsJobId(string apsJobId) { DARABONBA_PTR_SET_VALUE(apsJobId_, apsJobId) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Items& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Items& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Items& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // operationTables Field Functions 
      bool hasOperationTables() const { return this->operationTables_ != nullptr;};
      void deleteOperationTables() { this->operationTables_ = nullptr;};
      inline const vector<Items::OperationTables> & getOperationTables() const { DARABONBA_PTR_GET_CONST(operationTables_, vector<Items::OperationTables>) };
      inline vector<Items::OperationTables> getOperationTables() { DARABONBA_PTR_GET(operationTables_, vector<Items::OperationTables>) };
      inline Items& setOperationTables(const vector<Items::OperationTables> & operationTables) { DARABONBA_PTR_SET_VALUE(operationTables_, operationTables) };
      inline Items& setOperationTables(vector<Items::OperationTables> && operationTables) { DARABONBA_PTR_SET_RVALUE(operationTables_, operationTables) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strategyDatabases Field Functions 
      bool hasStrategyDatabases() const { return this->strategyDatabases_ != nullptr;};
      void deleteStrategyDatabases() { this->strategyDatabases_ = nullptr;};
      inline int64_t getStrategyDatabases() const { DARABONBA_PTR_GET_DEFAULT(strategyDatabases_, 0L) };
      inline Items& setStrategyDatabases(int64_t strategyDatabases) { DARABONBA_PTR_SET_VALUE(strategyDatabases_, strategyDatabases) };


      // strategyDesc Field Functions 
      bool hasStrategyDesc() const { return this->strategyDesc_ != nullptr;};
      void deleteStrategyDesc() { this->strategyDesc_ = nullptr;};
      inline string getStrategyDesc() const { DARABONBA_PTR_GET_DEFAULT(strategyDesc_, "") };
      inline Items& setStrategyDesc(string strategyDesc) { DARABONBA_PTR_SET_VALUE(strategyDesc_, strategyDesc) };


      // strategyName Field Functions 
      bool hasStrategyName() const { return this->strategyName_ != nullptr;};
      void deleteStrategyName() { this->strategyName_ = nullptr;};
      inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
      inline Items& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


      // strategyTables Field Functions 
      bool hasStrategyTables() const { return this->strategyTables_ != nullptr;};
      void deleteStrategyTables() { this->strategyTables_ = nullptr;};
      inline int64_t getStrategyTables() const { DARABONBA_PTR_GET_DEFAULT(strategyTables_, 0L) };
      inline Items& setStrategyTables(int64_t strategyTables) { DARABONBA_PTR_SET_VALUE(strategyTables_, strategyTables) };


      // strategyType Field Functions 
      bool hasStrategyType() const { return this->strategyType_ != nullptr;};
      void deleteStrategyType() { this->strategyType_ = nullptr;};
      inline string getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
      inline Items& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


      // strategyValue Field Functions 
      bool hasStrategyValue() const { return this->strategyValue_ != nullptr;};
      void deleteStrategyValue() { this->strategyValue_ = nullptr;};
      inline string getStrategyValue() const { DARABONBA_PTR_GET_DEFAULT(strategyValue_, "") };
      inline Items& setStrategyValue(string strategyValue) { DARABONBA_PTR_SET_VALUE(strategyValue_, strategyValue) };


    protected:
      // The job ID.
      shared_ptr<string> apsJobId_ {};
      // The time when the policy was created.
      shared_ptr<string> createdTime_ {};
      // The cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The time when the policy was modified.
      shared_ptr<string> modifiedTime_ {};
      // The operation tables.
      shared_ptr<vector<Items::OperationTables>> operationTables_ {};
      // The status of the lifecycle management policy. Valid values:
      // 
      // 1.  on: enables the current policy.
      // 2.  off: disables the current policy.
      shared_ptr<string> status_ {};
      // The number of databases that are managed during the lifecycle management.
      shared_ptr<int64_t> strategyDatabases_ {};
      // The description of the lifecycle management policy.
      shared_ptr<string> strategyDesc_ {};
      // The name of the lifecycle management policy.
      shared_ptr<string> strategyName_ {};
      // The number of tables that are managed during the lifecycle management.
      shared_ptr<int64_t> strategyTables_ {};
      // The type of the lifecycle management policy.
      shared_ptr<string> strategyType_ {};
      // The value of the lifecycle management policy.
      shared_ptr<string> strategyValue_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApsLifecycleStrategyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListApsLifecycleStrategyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListApsLifecycleStrategyResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListApsLifecycleStrategyResponseBody::Items>) };
    inline vector<ListApsLifecycleStrategyResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListApsLifecycleStrategyResponseBody::Items>) };
    inline ListApsLifecycleStrategyResponseBody& setItems(const vector<ListApsLifecycleStrategyResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListApsLifecycleStrategyResponseBody& setItems(vector<ListApsLifecycleStrategyResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApsLifecycleStrategyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListApsLifecycleStrategyResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApsLifecycleStrategyResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApsLifecycleStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApsLifecycleStrategyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApsLifecycleStrategyResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The HTTP status code or the error code.
    shared_ptr<string> code_ {};
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The queried lifecycle management policies.
    shared_ptr<vector<ListApsLifecycleStrategyResponseBody::Items>> items_ {};
    // The returned message. Valid values:
    // 
    // *   If the request was successful, a success message is returned.****
    // *   If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
