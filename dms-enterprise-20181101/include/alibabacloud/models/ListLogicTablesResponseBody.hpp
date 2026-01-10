// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICTABLESRESPONSEBODY_HPP_
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
  class ListLogicTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(LogicTableList, logicTableList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogicTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(LogicTableList, logicTableList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLogicTablesResponseBody() = default ;
    ListLogicTablesResponseBody(const ListLogicTablesResponseBody &) = default ;
    ListLogicTablesResponseBody(ListLogicTablesResponseBody &&) = default ;
    ListLogicTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicTablesResponseBody() = default ;
    ListLogicTablesResponseBody& operator=(const ListLogicTablesResponseBody &) = default ;
    ListLogicTablesResponseBody& operator=(ListLogicTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogicTableList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogicTableList& obj) { 
        DARABONBA_PTR_TO_JSON(LogicTable, logicTable_);
      };
      friend void from_json(const Darabonba::Json& j, LogicTableList& obj) { 
        DARABONBA_PTR_FROM_JSON(LogicTable, logicTable_);
      };
      LogicTableList() = default ;
      LogicTableList(const LogicTableList &) = default ;
      LogicTableList(LogicTableList &&) = default ;
      LogicTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogicTableList() = default ;
      LogicTableList& operator=(const LogicTableList &) = default ;
      LogicTableList& operator=(LogicTableList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LogicTable : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogicTable& obj) { 
          DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
          DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
          DARABONBA_PTR_TO_JSON(TableExpr, tableExpr_);
          DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
          DARABONBA_PTR_TO_JSON(TableId, tableId_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, LogicTable& obj) { 
          DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
          DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
          DARABONBA_PTR_FROM_JSON(TableExpr, tableExpr_);
          DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
          DARABONBA_PTR_FROM_JSON(TableId, tableId_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        LogicTable() = default ;
        LogicTable(const LogicTable &) = default ;
        LogicTable(LogicTable &&) = default ;
        LogicTable(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogicTable() = default ;
        LogicTable& operator=(const LogicTable &) = default ;
        LogicTable& operator=(LogicTable &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OwnerNameList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OwnerNameList& obj) { 
            DARABONBA_PTR_TO_JSON(OwnerNames, ownerNames_);
          };
          friend void from_json(const Darabonba::Json& j, OwnerNameList& obj) { 
            DARABONBA_PTR_FROM_JSON(OwnerNames, ownerNames_);
          };
          OwnerNameList() = default ;
          OwnerNameList(const OwnerNameList &) = default ;
          OwnerNameList(OwnerNameList &&) = default ;
          OwnerNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OwnerNameList() = default ;
          OwnerNameList& operator=(const OwnerNameList &) = default ;
          OwnerNameList& operator=(OwnerNameList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ownerNames_ == nullptr; };
          // ownerNames Field Functions 
          bool hasOwnerNames() const { return this->ownerNames_ != nullptr;};
          void deleteOwnerNames() { this->ownerNames_ = nullptr;};
          inline const vector<string> & getOwnerNames() const { DARABONBA_PTR_GET_CONST(ownerNames_, vector<string>) };
          inline vector<string> getOwnerNames() { DARABONBA_PTR_GET(ownerNames_, vector<string>) };
          inline OwnerNameList& setOwnerNames(const vector<string> & ownerNames) { DARABONBA_PTR_SET_VALUE(ownerNames_, ownerNames) };
          inline OwnerNameList& setOwnerNames(vector<string> && ownerNames) { DARABONBA_PTR_SET_RVALUE(ownerNames_, ownerNames) };


        protected:
          shared_ptr<vector<string>> ownerNames_ {};
        };

        class OwnerIdList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OwnerIdList& obj) { 
            DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
          };
          friend void from_json(const Darabonba::Json& j, OwnerIdList& obj) { 
            DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
          };
          OwnerIdList() = default ;
          OwnerIdList(const OwnerIdList &) = default ;
          OwnerIdList(OwnerIdList &&) = default ;
          OwnerIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OwnerIdList() = default ;
          OwnerIdList& operator=(const OwnerIdList &) = default ;
          OwnerIdList& operator=(OwnerIdList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ownerIds_ == nullptr; };
          // ownerIds Field Functions 
          bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
          void deleteOwnerIds() { this->ownerIds_ = nullptr;};
          inline const vector<string> & getOwnerIds() const { DARABONBA_PTR_GET_CONST(ownerIds_, vector<string>) };
          inline vector<string> getOwnerIds() { DARABONBA_PTR_GET(ownerIds_, vector<string>) };
          inline OwnerIdList& setOwnerIds(const vector<string> & ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };
          inline OwnerIdList& setOwnerIds(vector<string> && ownerIds) { DARABONBA_PTR_SET_RVALUE(ownerIds_, ownerIds) };


        protected:
          shared_ptr<vector<string>> ownerIds_ {};
        };

        virtual bool empty() const override { return this->databaseId_ == nullptr
        && this->logic_ == nullptr && this->ownerIdList_ == nullptr && this->ownerNameList_ == nullptr && this->schemaName_ == nullptr && this->tableCount_ == nullptr
        && this->tableExpr_ == nullptr && this->tableGuid_ == nullptr && this->tableId_ == nullptr && this->tableName_ == nullptr; };
        // databaseId Field Functions 
        bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
        void deleteDatabaseId() { this->databaseId_ = nullptr;};
        inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
        inline LogicTable& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline LogicTable& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // ownerIdList Field Functions 
        bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
        void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
        inline const LogicTable::OwnerIdList & getOwnerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, LogicTable::OwnerIdList) };
        inline LogicTable::OwnerIdList getOwnerIdList() { DARABONBA_PTR_GET(ownerIdList_, LogicTable::OwnerIdList) };
        inline LogicTable& setOwnerIdList(const LogicTable::OwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
        inline LogicTable& setOwnerIdList(LogicTable::OwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


        // ownerNameList Field Functions 
        bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
        void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
        inline const LogicTable::OwnerNameList & getOwnerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, LogicTable::OwnerNameList) };
        inline LogicTable::OwnerNameList getOwnerNameList() { DARABONBA_PTR_GET(ownerNameList_, LogicTable::OwnerNameList) };
        inline LogicTable& setOwnerNameList(const LogicTable::OwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
        inline LogicTable& setOwnerNameList(LogicTable::OwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline LogicTable& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // tableCount Field Functions 
        bool hasTableCount() const { return this->tableCount_ != nullptr;};
        void deleteTableCount() { this->tableCount_ = nullptr;};
        inline string getTableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, "") };
        inline LogicTable& setTableCount(string tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


        // tableExpr Field Functions 
        bool hasTableExpr() const { return this->tableExpr_ != nullptr;};
        void deleteTableExpr() { this->tableExpr_ = nullptr;};
        inline string getTableExpr() const { DARABONBA_PTR_GET_DEFAULT(tableExpr_, "") };
        inline LogicTable& setTableExpr(string tableExpr) { DARABONBA_PTR_SET_VALUE(tableExpr_, tableExpr) };


        // tableGuid Field Functions 
        bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
        void deleteTableGuid() { this->tableGuid_ = nullptr;};
        inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
        inline LogicTable& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


        // tableId Field Functions 
        bool hasTableId() const { return this->tableId_ != nullptr;};
        void deleteTableId() { this->tableId_ = nullptr;};
        inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
        inline LogicTable& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline LogicTable& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The ID of the logical database.
        shared_ptr<string> databaseId_ {};
        // Indicates whether the table is a logical table. The value is fixed to true.
        shared_ptr<bool> logic_ {};
        // The IDs of the owners of the logical tables.
        shared_ptr<LogicTable::OwnerIdList> ownerIdList_ {};
        // The nicknames of the owners of the logical tables.
        shared_ptr<LogicTable::OwnerNameList> ownerNameList_ {};
        // The logical database to which the logical table belongs.
        shared_ptr<string> schemaName_ {};
        // The number of logical tables.
        shared_ptr<string> tableCount_ {};
        // The expression of the logical table.
        shared_ptr<string> tableExpr_ {};
        // The GUID of the logical table.
        shared_ptr<string> tableGuid_ {};
        // The ID of the logical table.
        shared_ptr<string> tableId_ {};
        // The name of the logical table.
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->logicTable_ == nullptr; };
      // logicTable Field Functions 
      bool hasLogicTable() const { return this->logicTable_ != nullptr;};
      void deleteLogicTable() { this->logicTable_ = nullptr;};
      inline const vector<LogicTableList::LogicTable> & getLogicTable() const { DARABONBA_PTR_GET_CONST(logicTable_, vector<LogicTableList::LogicTable>) };
      inline vector<LogicTableList::LogicTable> getLogicTable() { DARABONBA_PTR_GET(logicTable_, vector<LogicTableList::LogicTable>) };
      inline LogicTableList& setLogicTable(const vector<LogicTableList::LogicTable> & logicTable) { DARABONBA_PTR_SET_VALUE(logicTable_, logicTable) };
      inline LogicTableList& setLogicTable(vector<LogicTableList::LogicTable> && logicTable) { DARABONBA_PTR_SET_RVALUE(logicTable_, logicTable) };


    protected:
      shared_ptr<vector<LogicTableList::LogicTable>> logicTable_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->logicTableList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListLogicTablesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListLogicTablesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // logicTableList Field Functions 
    bool hasLogicTableList() const { return this->logicTableList_ != nullptr;};
    void deleteLogicTableList() { this->logicTableList_ = nullptr;};
    inline const ListLogicTablesResponseBody::LogicTableList & getLogicTableList() const { DARABONBA_PTR_GET_CONST(logicTableList_, ListLogicTablesResponseBody::LogicTableList) };
    inline ListLogicTablesResponseBody::LogicTableList getLogicTableList() { DARABONBA_PTR_GET(logicTableList_, ListLogicTablesResponseBody::LogicTableList) };
    inline ListLogicTablesResponseBody& setLogicTableList(const ListLogicTablesResponseBody::LogicTableList & logicTableList) { DARABONBA_PTR_SET_VALUE(logicTableList_, logicTableList) };
    inline ListLogicTablesResponseBody& setLogicTableList(ListLogicTablesResponseBody::LogicTableList && logicTableList) { DARABONBA_PTR_SET_RVALUE(logicTableList_, logicTableList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogicTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLogicTablesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLogicTablesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The details of the logical tables.
    shared_ptr<ListLogicTablesResponseBody::LogicTableList> logicTableList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The total number of logical tables that meet the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
