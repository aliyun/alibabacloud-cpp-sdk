// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLEXECAUDITLOGRESPONSEBODYSQLEXECAUDITLOGLISTSQLEXECAUDITLOG_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLEXECAUDITLOGRESPONSEBODYSQLEXECAUDITLOGLISTSQLEXECAUDITLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& obj) { 
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
    ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog() = default ;
    ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog(const ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog &) = default ;
    ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog(ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog &&) = default ;
    ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog() = default ;
    ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& operator=(const ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog &) = default ;
    ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& operator=(ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affectRows_ == nullptr
        && return this->dbId_ == nullptr && return this->elapsedTime_ == nullptr && return this->execState_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->logic_ == nullptr && return this->opTime_ == nullptr && return this->remark_ == nullptr && return this->SQL_ == nullptr && return this->SQLType_ == nullptr
        && return this->schemaName_ == nullptr && return this->userId_ == nullptr && return this->userName_ == nullptr; };
    // affectRows Field Functions 
    bool hasAffectRows() const { return this->affectRows_ != nullptr;};
    void deleteAffectRows() { this->affectRows_ = nullptr;};
    inline int64_t affectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline int64_t elapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // execState Field Functions 
    bool hasExecState() const { return this->execState_ != nullptr;};
    void deleteExecState() { this->execState_ = nullptr;};
    inline string execState() const { DARABONBA_PTR_GET_DEFAULT(execState_, "") };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setExecState(string execState) { DARABONBA_PTR_SET_VALUE(execState_, execState) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // opTime Field Functions 
    bool hasOpTime() const { return this->opTime_ != nullptr;};
    void deleteOpTime() { this->opTime_ = nullptr;};
    inline string opTime() const { DARABONBA_PTR_GET_DEFAULT(opTime_, "") };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setOpTime(string opTime) { DARABONBA_PTR_SET_VALUE(opTime_, opTime) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // SQL Field Functions 
    bool hasSQL() const { return this->SQL_ != nullptr;};
    void deleteSQL() { this->SQL_ = nullptr;};
    inline string SQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


    // SQLType Field Functions 
    bool hasSQLType() const { return this->SQLType_ != nullptr;};
    void deleteSQLType() { this->SQLType_ = nullptr;};
    inline string SQLType() const { DARABONBA_PTR_GET_DEFAULT(SQLType_, "") };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setSQLType(string SQLType) { DARABONBA_PTR_SET_VALUE(SQLType_, SQLType) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The number of rows affected by the SQL statement. For example, if you execute an SQL statement to query data, the number of retrieved rows is returned.
    std::shared_ptr<int64_t> affectRows_ = nullptr;
    // The ID of the database.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The amount of time consumed by the execution of the SQL statement. Unit: milliseconds.
    std::shared_ptr<int64_t> elapsedTime_ = nullptr;
    // The execution status of the SQL statement. Valid values:
    // 
    // *   **FAIL**: The SQL statement fails to be executed.
    // *   **NOEXE**: The SQL statement has not been executed.
    // *   **RUNNING**: The SQL statement is being executed.
    // *   **CANCEL**: The execution of the SQL statement is canceled.
    // *   **SUCCESS**: The SQL statement is executed.
    std::shared_ptr<string> execState_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The name of the database.
    // 
    // >  If the SQL statement takes effect on an instance, the name of the instance is returned.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Indicates whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: The database is a physical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The time when the operation specified by the SQL statement was performed on the instance or database.
    std::shared_ptr<string> opTime_ = nullptr;
    // The comment on the SQL statement.
    std::shared_ptr<string> remark_ = nullptr;
    // The SQL statement that was written.
    std::shared_ptr<string> SQL_ = nullptr;
    // The type of the SQL statement. Valid values:
    // 
    // *   **SELECT**: the SQL statement that is used to query data.
    // *   **INSERT**: the SQL statement that is used to insert data.
    // *   **DELETE**: the SQL statement that is used to delete data.
    // *   **CREATE_TABLE**: the SQL statement that is used to create tables.
    // 
    // >  To view more types of SQL statements, log on to the DMS console and click Security and Specifications. In the left-side navigation pane, click **Operation Audit**. Then, you can view all supported types of SQL statements from the **SQL type** drop-down list.
    std::shared_ptr<string> SQLType_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The ID of the user who wrote the SQL statement.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The nickname of the user who wrote the SQL statement.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
