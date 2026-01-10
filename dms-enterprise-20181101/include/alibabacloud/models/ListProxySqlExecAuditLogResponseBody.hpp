// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROXYSQLEXECAUDITLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROXYSQLEXECAUDITLOGRESPONSEBODY_HPP_
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
  class ListProxySQLExecAuditLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProxySQLExecAuditLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ProxySQLExecAuditLogList, proxySQLExecAuditLogList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProxySQLExecAuditLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ProxySQLExecAuditLogList, proxySQLExecAuditLogList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProxySQLExecAuditLogResponseBody() = default ;
    ListProxySQLExecAuditLogResponseBody(const ListProxySQLExecAuditLogResponseBody &) = default ;
    ListProxySQLExecAuditLogResponseBody(ListProxySQLExecAuditLogResponseBody &&) = default ;
    ListProxySQLExecAuditLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProxySQLExecAuditLogResponseBody() = default ;
    ListProxySQLExecAuditLogResponseBody& operator=(const ListProxySQLExecAuditLogResponseBody &) = default ;
    ListProxySQLExecAuditLogResponseBody& operator=(ListProxySQLExecAuditLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProxySQLExecAuditLogList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProxySQLExecAuditLogList& obj) { 
        DARABONBA_PTR_TO_JSON(ProxySQLExecAuditLog, proxySQLExecAuditLog_);
      };
      friend void from_json(const Darabonba::Json& j, ProxySQLExecAuditLogList& obj) { 
        DARABONBA_PTR_FROM_JSON(ProxySQLExecAuditLog, proxySQLExecAuditLog_);
      };
      ProxySQLExecAuditLogList() = default ;
      ProxySQLExecAuditLogList(const ProxySQLExecAuditLogList &) = default ;
      ProxySQLExecAuditLogList(ProxySQLExecAuditLogList &&) = default ;
      ProxySQLExecAuditLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProxySQLExecAuditLogList() = default ;
      ProxySQLExecAuditLogList& operator=(const ProxySQLExecAuditLogList &) = default ;
      ProxySQLExecAuditLogList& operator=(ProxySQLExecAuditLogList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProxySQLExecAuditLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProxySQLExecAuditLog& obj) { 
          DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
          DARABONBA_PTR_TO_JSON(ElapsedTime, elapsedTime_);
          DARABONBA_PTR_TO_JSON(ExecState, execState_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(OpTime, opTime_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(SQL, SQL_);
          DARABONBA_PTR_TO_JSON(SQLType, SQLType_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, ProxySQLExecAuditLog& obj) { 
          DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
          DARABONBA_PTR_FROM_JSON(ElapsedTime, elapsedTime_);
          DARABONBA_PTR_FROM_JSON(ExecState, execState_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(OpTime, opTime_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(SQL, SQL_);
          DARABONBA_PTR_FROM_JSON(SQLType, SQLType_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        ProxySQLExecAuditLog() = default ;
        ProxySQLExecAuditLog(const ProxySQLExecAuditLog &) = default ;
        ProxySQLExecAuditLog(ProxySQLExecAuditLog &&) = default ;
        ProxySQLExecAuditLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProxySQLExecAuditLog() = default ;
        ProxySQLExecAuditLog& operator=(const ProxySQLExecAuditLog &) = default ;
        ProxySQLExecAuditLog& operator=(ProxySQLExecAuditLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->affectRows_ == nullptr
        && this->elapsedTime_ == nullptr && this->execState_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->opTime_ == nullptr
        && this->remark_ == nullptr && this->SQL_ == nullptr && this->SQLType_ == nullptr && this->schemaName_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr; };
        // affectRows Field Functions 
        bool hasAffectRows() const { return this->affectRows_ != nullptr;};
        void deleteAffectRows() { this->affectRows_ = nullptr;};
        inline int64_t getAffectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
        inline ProxySQLExecAuditLog& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


        // elapsedTime Field Functions 
        bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
        void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
        inline int64_t getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
        inline ProxySQLExecAuditLog& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


        // execState Field Functions 
        bool hasExecState() const { return this->execState_ != nullptr;};
        void deleteExecState() { this->execState_ = nullptr;};
        inline string getExecState() const { DARABONBA_PTR_GET_DEFAULT(execState_, "") };
        inline ProxySQLExecAuditLog& setExecState(string execState) { DARABONBA_PTR_SET_VALUE(execState_, execState) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline ProxySQLExecAuditLog& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline ProxySQLExecAuditLog& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // opTime Field Functions 
        bool hasOpTime() const { return this->opTime_ != nullptr;};
        void deleteOpTime() { this->opTime_ = nullptr;};
        inline string getOpTime() const { DARABONBA_PTR_GET_DEFAULT(opTime_, "") };
        inline ProxySQLExecAuditLog& setOpTime(string opTime) { DARABONBA_PTR_SET_VALUE(opTime_, opTime) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline ProxySQLExecAuditLog& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // SQL Field Functions 
        bool hasSQL() const { return this->SQL_ != nullptr;};
        void deleteSQL() { this->SQL_ = nullptr;};
        inline string getSQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
        inline ProxySQLExecAuditLog& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


        // SQLType Field Functions 
        bool hasSQLType() const { return this->SQLType_ != nullptr;};
        void deleteSQLType() { this->SQLType_ = nullptr;};
        inline string getSQLType() const { DARABONBA_PTR_GET_DEFAULT(SQLType_, "") };
        inline ProxySQLExecAuditLog& setSQLType(string SQLType) { DARABONBA_PTR_SET_VALUE(SQLType_, SQLType) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline ProxySQLExecAuditLog& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
        inline ProxySQLExecAuditLog& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline ProxySQLExecAuditLog& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // Indicates the total number of rows returned after the SQL statement was executed. If an SELECT SQL statement is executed, the return value of this parameter indicates the total number of the queried data rows.
        shared_ptr<int64_t> affectRows_ {};
        // The amount of time that is consumed to execute the SQL statement. Unit: milliseconds.
        shared_ptr<int64_t> elapsedTime_ {};
        // The execution status of the SQL statement. Valid values:
        // 
        // *   **FAIL**: The execution of the SQL statement fails.
        // *   **CANCEL**: The execution of the SQL statement is canceled.
        // *   **SUCCESS**: The SQL statement is executed.
        shared_ptr<string> execState_ {};
        // The ID of the database instance.
        shared_ptr<int64_t> instanceId_ {};
        // The name of the database instance.
        shared_ptr<string> instanceName_ {};
        // The time at which the user executes the SQL statement on the database instance. The value of this parameter must be a timestamp that follows the UNIX time format.
        shared_ptr<string> opTime_ {};
        // The description.
        shared_ptr<string> remark_ {};
        // The SQL statement that was executed.
        shared_ptr<string> SQL_ {};
        // The type of the SQL statement. Valid values:
        // 
        // *   **SELECT**
        // *   **INSERT**
        // *   **DELETE**
        // *   **CREATE_TABLE**
        // 
        // >  You can choose Operation Audit > Secure Access Proxy in the top navigation bar of the DMS console to view more types of SQL statements.
        shared_ptr<string> SQLType_ {};
        // The name of the database.
        shared_ptr<string> schemaName_ {};
        // The ID of the user.
        shared_ptr<int64_t> userId_ {};
        // The nickname of the user.
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->proxySQLExecAuditLog_ == nullptr; };
      // proxySQLExecAuditLog Field Functions 
      bool hasProxySQLExecAuditLog() const { return this->proxySQLExecAuditLog_ != nullptr;};
      void deleteProxySQLExecAuditLog() { this->proxySQLExecAuditLog_ = nullptr;};
      inline const vector<ProxySQLExecAuditLogList::ProxySQLExecAuditLog> & getProxySQLExecAuditLog() const { DARABONBA_PTR_GET_CONST(proxySQLExecAuditLog_, vector<ProxySQLExecAuditLogList::ProxySQLExecAuditLog>) };
      inline vector<ProxySQLExecAuditLogList::ProxySQLExecAuditLog> getProxySQLExecAuditLog() { DARABONBA_PTR_GET(proxySQLExecAuditLog_, vector<ProxySQLExecAuditLogList::ProxySQLExecAuditLog>) };
      inline ProxySQLExecAuditLogList& setProxySQLExecAuditLog(const vector<ProxySQLExecAuditLogList::ProxySQLExecAuditLog> & proxySQLExecAuditLog) { DARABONBA_PTR_SET_VALUE(proxySQLExecAuditLog_, proxySQLExecAuditLog) };
      inline ProxySQLExecAuditLogList& setProxySQLExecAuditLog(vector<ProxySQLExecAuditLogList::ProxySQLExecAuditLog> && proxySQLExecAuditLog) { DARABONBA_PTR_SET_RVALUE(proxySQLExecAuditLog_, proxySQLExecAuditLog) };


    protected:
      shared_ptr<vector<ProxySQLExecAuditLogList::ProxySQLExecAuditLog>> proxySQLExecAuditLog_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->proxySQLExecAuditLogList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListProxySQLExecAuditLogResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListProxySQLExecAuditLogResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // proxySQLExecAuditLogList Field Functions 
    bool hasProxySQLExecAuditLogList() const { return this->proxySQLExecAuditLogList_ != nullptr;};
    void deleteProxySQLExecAuditLogList() { this->proxySQLExecAuditLogList_ = nullptr;};
    inline const ListProxySQLExecAuditLogResponseBody::ProxySQLExecAuditLogList & getProxySQLExecAuditLogList() const { DARABONBA_PTR_GET_CONST(proxySQLExecAuditLogList_, ListProxySQLExecAuditLogResponseBody::ProxySQLExecAuditLogList) };
    inline ListProxySQLExecAuditLogResponseBody::ProxySQLExecAuditLogList getProxySQLExecAuditLogList() { DARABONBA_PTR_GET(proxySQLExecAuditLogList_, ListProxySQLExecAuditLogResponseBody::ProxySQLExecAuditLogList) };
    inline ListProxySQLExecAuditLogResponseBody& setProxySQLExecAuditLogList(const ListProxySQLExecAuditLogResponseBody::ProxySQLExecAuditLogList & proxySQLExecAuditLogList) { DARABONBA_PTR_SET_VALUE(proxySQLExecAuditLogList_, proxySQLExecAuditLogList) };
    inline ListProxySQLExecAuditLogResponseBody& setProxySQLExecAuditLogList(ListProxySQLExecAuditLogResponseBody::ProxySQLExecAuditLogList && proxySQLExecAuditLogList) { DARABONBA_PTR_SET_RVALUE(proxySQLExecAuditLogList_, proxySQLExecAuditLogList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProxySQLExecAuditLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListProxySQLExecAuditLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListProxySQLExecAuditLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The audit information about the database instance that is provided by the secure access proxy feature.
    shared_ptr<ListProxySQLExecAuditLogResponseBody::ProxySQLExecAuditLogList> proxySQLExecAuditLogList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
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
