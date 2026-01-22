// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLEXECAUDITLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLEXECAUDITLOGRESPONSEBODY_HPP_
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
  class ListSQLExecAuditLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSQLExecAuditLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQLExecAuditLogList, SQLExecAuditLogList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSQLExecAuditLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQLExecAuditLogList, SQLExecAuditLogList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSQLExecAuditLogResponseBody() = default ;
    ListSQLExecAuditLogResponseBody(const ListSQLExecAuditLogResponseBody &) = default ;
    ListSQLExecAuditLogResponseBody(ListSQLExecAuditLogResponseBody &&) = default ;
    ListSQLExecAuditLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSQLExecAuditLogResponseBody() = default ;
    ListSQLExecAuditLogResponseBody& operator=(const ListSQLExecAuditLogResponseBody &) = default ;
    ListSQLExecAuditLogResponseBody& operator=(ListSQLExecAuditLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SQLExecAuditLogList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SQLExecAuditLogList& obj) { 
        DARABONBA_PTR_TO_JSON(SQLExecAuditLog, SQLExecAuditLog_);
      };
      friend void from_json(const Darabonba::Json& j, SQLExecAuditLogList& obj) { 
        DARABONBA_PTR_FROM_JSON(SQLExecAuditLog, SQLExecAuditLog_);
      };
      SQLExecAuditLogList() = default ;
      SQLExecAuditLogList(const SQLExecAuditLogList &) = default ;
      SQLExecAuditLogList(SQLExecAuditLogList &&) = default ;
      SQLExecAuditLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SQLExecAuditLogList() = default ;
      SQLExecAuditLogList& operator=(const SQLExecAuditLogList &) = default ;
      SQLExecAuditLogList& operator=(SQLExecAuditLogList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SQLExecAuditLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SQLExecAuditLog& obj) { 
          DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(ElapsedTime, elapsedTime_);
          DARABONBA_PTR_TO_JSON(ExecState, execState_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(OpTime, opTime_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(SQL, SQL_);
          DARABONBA_PTR_TO_JSON(SQLType, SQLType_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, SQLExecAuditLog& obj) { 
          DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(ElapsedTime, elapsedTime_);
          DARABONBA_PTR_FROM_JSON(ExecState, execState_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(OpTime, opTime_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(SQL, SQL_);
          DARABONBA_PTR_FROM_JSON(SQLType, SQLType_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        SQLExecAuditLog() = default ;
        SQLExecAuditLog(const SQLExecAuditLog &) = default ;
        SQLExecAuditLog(SQLExecAuditLog &&) = default ;
        SQLExecAuditLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SQLExecAuditLog() = default ;
        SQLExecAuditLog& operator=(const SQLExecAuditLog &) = default ;
        SQLExecAuditLog& operator=(SQLExecAuditLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->affectRows_ == nullptr
        && this->dbId_ == nullptr && this->elapsedTime_ == nullptr && this->execState_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->logic_ == nullptr && this->opTime_ == nullptr && this->remark_ == nullptr && this->SQL_ == nullptr && this->SQLType_ == nullptr
        && this->schemaName_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
        // affectRows Field Functions 
        bool hasAffectRows() const { return this->affectRows_ != nullptr;};
        void deleteAffectRows() { this->affectRows_ = nullptr;};
        inline int64_t getAffectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
        inline SQLExecAuditLog& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline SQLExecAuditLog& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // elapsedTime Field Functions 
        bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
        void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
        inline int64_t getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
        inline SQLExecAuditLog& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


        // execState Field Functions 
        bool hasExecState() const { return this->execState_ != nullptr;};
        void deleteExecState() { this->execState_ = nullptr;};
        inline string getExecState() const { DARABONBA_PTR_GET_DEFAULT(execState_, "") };
        inline SQLExecAuditLog& setExecState(string execState) { DARABONBA_PTR_SET_VALUE(execState_, execState) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline SQLExecAuditLog& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline SQLExecAuditLog& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline SQLExecAuditLog& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // opTime Field Functions 
        bool hasOpTime() const { return this->opTime_ != nullptr;};
        void deleteOpTime() { this->opTime_ = nullptr;};
        inline string getOpTime() const { DARABONBA_PTR_GET_DEFAULT(opTime_, "") };
        inline SQLExecAuditLog& setOpTime(string opTime) { DARABONBA_PTR_SET_VALUE(opTime_, opTime) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline SQLExecAuditLog& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // SQL Field Functions 
        bool hasSQL() const { return this->SQL_ != nullptr;};
        void deleteSQL() { this->SQL_ = nullptr;};
        inline string getSQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
        inline SQLExecAuditLog& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


        // SQLType Field Functions 
        bool hasSQLType() const { return this->SQLType_ != nullptr;};
        void deleteSQLType() { this->SQLType_ = nullptr;};
        inline string getSQLType() const { DARABONBA_PTR_GET_DEFAULT(SQLType_, "") };
        inline SQLExecAuditLog& setSQLType(string SQLType) { DARABONBA_PTR_SET_VALUE(SQLType_, SQLType) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline SQLExecAuditLog& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
        inline SQLExecAuditLog& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline SQLExecAuditLog& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The number of rows affected by the SQL statement. For example, if you execute an SQL statement to query data, the number of retrieved rows is returned.
        shared_ptr<int64_t> affectRows_ {};
        // The ID of the database.
        shared_ptr<int64_t> dbId_ {};
        // The amount of time consumed by the execution of the SQL statement. Unit: milliseconds.
        shared_ptr<int64_t> elapsedTime_ {};
        // The execution status of the SQL statement. Valid values:
        // 
        // *   **FAIL**: The SQL statement fails to be executed.
        // *   **NOEXE**: The SQL statement has not been executed.
        // *   **RUNNING**: The SQL statement is being executed.
        // *   **CANCEL**: The execution of the SQL statement is canceled.
        // *   **SUCCESS**: The SQL statement is executed.
        shared_ptr<string> execState_ {};
        // The ID of the instance.
        shared_ptr<int64_t> instanceId_ {};
        // The name of the database.
        // 
        // >  If the SQL statement takes effect on an instance, the name of the instance is returned.
        shared_ptr<string> instanceName_ {};
        // Indicates whether the database is a logical database. Valid values:
        // 
        // *   **true**: The database is a logical database.
        // *   **false**: The database is a physical database.
        shared_ptr<bool> logic_ {};
        // The time when the operation specified by the SQL statement was performed on the instance or database.
        shared_ptr<string> opTime_ {};
        // The comment on the SQL statement.
        shared_ptr<string> remark_ {};
        // The SQL statement that was written.
        shared_ptr<string> SQL_ {};
        // The type of the SQL statement. Valid values:
        // 
        // *   **SELECT**: the SQL statement that is used to query data.
        // *   **INSERT**: the SQL statement that is used to insert data.
        // *   **DELETE**: the SQL statement that is used to delete data.
        // *   **CREATE_TABLE**: the SQL statement that is used to create tables.
        // 
        // >  To view more types of SQL statements, log on to the DMS console and click Security and Specifications. In the left-side navigation pane, click **Operation Audit**. Then, you can view all supported types of SQL statements from the **SQL type** drop-down list.
        shared_ptr<string> SQLType_ {};
        // The name of the database.
        shared_ptr<string> schemaName_ {};
        // The ID of the user who wrote the SQL statement.
        shared_ptr<int64_t> userId_ {};
        // The nickname of the user who wrote the SQL statement.
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->SQLExecAuditLog_ == nullptr; };
      // SQLExecAuditLog Field Functions 
      bool hasSQLExecAuditLog() const { return this->SQLExecAuditLog_ != nullptr;};
      void deleteSQLExecAuditLog() { this->SQLExecAuditLog_ = nullptr;};
      inline const vector<SQLExecAuditLogList::SQLExecAuditLog> & getSQLExecAuditLog() const { DARABONBA_PTR_GET_CONST(SQLExecAuditLog_, vector<SQLExecAuditLogList::SQLExecAuditLog>) };
      inline vector<SQLExecAuditLogList::SQLExecAuditLog> getSQLExecAuditLog() { DARABONBA_PTR_GET(SQLExecAuditLog_, vector<SQLExecAuditLogList::SQLExecAuditLog>) };
      inline SQLExecAuditLogList& setSQLExecAuditLog(const vector<SQLExecAuditLogList::SQLExecAuditLog> & sQLExecAuditLog) { DARABONBA_PTR_SET_VALUE(SQLExecAuditLog_, sQLExecAuditLog) };
      inline SQLExecAuditLogList& setSQLExecAuditLog(vector<SQLExecAuditLogList::SQLExecAuditLog> && sQLExecAuditLog) { DARABONBA_PTR_SET_RVALUE(SQLExecAuditLog_, sQLExecAuditLog) };


    protected:
      shared_ptr<vector<SQLExecAuditLogList::SQLExecAuditLog>> SQLExecAuditLog_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->SQLExecAuditLogList_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSQLExecAuditLogResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSQLExecAuditLogResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSQLExecAuditLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLExecAuditLogList Field Functions 
    bool hasSQLExecAuditLogList() const { return this->SQLExecAuditLogList_ != nullptr;};
    void deleteSQLExecAuditLogList() { this->SQLExecAuditLogList_ = nullptr;};
    inline const ListSQLExecAuditLogResponseBody::SQLExecAuditLogList & getSQLExecAuditLogList() const { DARABONBA_PTR_GET_CONST(SQLExecAuditLogList_, ListSQLExecAuditLogResponseBody::SQLExecAuditLogList) };
    inline ListSQLExecAuditLogResponseBody::SQLExecAuditLogList getSQLExecAuditLogList() { DARABONBA_PTR_GET(SQLExecAuditLogList_, ListSQLExecAuditLogResponseBody::SQLExecAuditLogList) };
    inline ListSQLExecAuditLogResponseBody& setSQLExecAuditLogList(const ListSQLExecAuditLogResponseBody::SQLExecAuditLogList & sQLExecAuditLogList) { DARABONBA_PTR_SET_VALUE(SQLExecAuditLogList_, sQLExecAuditLogList) };
    inline ListSQLExecAuditLogResponseBody& setSQLExecAuditLogList(ListSQLExecAuditLogResponseBody::SQLExecAuditLogList && sQLExecAuditLogList) { DARABONBA_PTR_SET_RVALUE(SQLExecAuditLogList_, sQLExecAuditLogList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSQLExecAuditLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSQLExecAuditLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The entries returned.
    shared_ptr<ListSQLExecAuditLogResponseBody::SQLExecAuditLogList> SQLExecAuditLogList_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
