// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTICSQLEXECUTIONHISTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTICSQLEXECUTIONHISTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListAgenticSqlExecutionHistoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgenticSqlExecutionHistoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgenticSqlExecutionHistoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAgenticSqlExecutionHistoriesResponseBody() = default ;
    ListAgenticSqlExecutionHistoriesResponseBody(const ListAgenticSqlExecutionHistoriesResponseBody &) = default ;
    ListAgenticSqlExecutionHistoriesResponseBody(ListAgenticSqlExecutionHistoriesResponseBody &&) = default ;
    ListAgenticSqlExecutionHistoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgenticSqlExecutionHistoriesResponseBody() = default ;
    ListAgenticSqlExecutionHistoriesResponseBody& operator=(const ListAgenticSqlExecutionHistoriesResponseBody &) = default ;
    ListAgenticSqlExecutionHistoriesResponseBody& operator=(ListAgenticSqlExecutionHistoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActorId, actorId_);
        DARABONBA_PTR_TO_JSON(ActorName, actorName_);
        DARABONBA_PTR_TO_JSON(ActorType, actorType_);
        DARABONBA_PTR_TO_JSON(AffectedRows, affectedRows_);
        DARABONBA_PTR_TO_JSON(AgentOwnerId, agentOwnerId_);
        DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_TO_JSON(Cost, cost_);
        DARABONBA_PTR_TO_JSON(DatabaseSearchName, databaseSearchName_);
        DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(ExecutedSql, executedSql_);
        DARABONBA_PTR_TO_JSON(ExecutionStatus, executionStatus_);
        DARABONBA_PTR_TO_JSON(OriginalSql, originalSql_);
        DARABONBA_PTR_TO_JSON(QueryId, queryId_);
        DARABONBA_PTR_TO_JSON(ReturnedRows, returnedRows_);
        DARABONBA_PTR_TO_JSON(Scenario, scenario_);
        DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActorId, actorId_);
        DARABONBA_PTR_FROM_JSON(ActorName, actorName_);
        DARABONBA_PTR_FROM_JSON(ActorType, actorType_);
        DARABONBA_PTR_FROM_JSON(AffectedRows, affectedRows_);
        DARABONBA_PTR_FROM_JSON(AgentOwnerId, agentOwnerId_);
        DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(Cost, cost_);
        DARABONBA_PTR_FROM_JSON(DatabaseSearchName, databaseSearchName_);
        DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(ExecutedSql, executedSql_);
        DARABONBA_PTR_FROM_JSON(ExecutionStatus, executionStatus_);
        DARABONBA_PTR_FROM_JSON(OriginalSql, originalSql_);
        DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
        DARABONBA_PTR_FROM_JSON(ReturnedRows, returnedRows_);
        DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
        DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
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
      virtual bool empty() const override { return this->actorId_ == nullptr
        && this->actorName_ == nullptr && this->actorType_ == nullptr && this->affectedRows_ == nullptr && this->agentOwnerId_ == nullptr && this->catalogUuid_ == nullptr
        && this->clientIp_ == nullptr && this->cost_ == nullptr && this->databaseSearchName_ == nullptr && this->databaseUuid_ == nullptr && this->error_ == nullptr
        && this->executedSql_ == nullptr && this->executionStatus_ == nullptr && this->originalSql_ == nullptr && this->queryId_ == nullptr && this->returnedRows_ == nullptr
        && this->scenario_ == nullptr && this->sqlType_ == nullptr && this->startTime_ == nullptr && this->workflowId_ == nullptr; };
      // actorId Field Functions 
      bool hasActorId() const { return this->actorId_ != nullptr;};
      void deleteActorId() { this->actorId_ = nullptr;};
      inline string getActorId() const { DARABONBA_PTR_GET_DEFAULT(actorId_, "") };
      inline Data& setActorId(string actorId) { DARABONBA_PTR_SET_VALUE(actorId_, actorId) };


      // actorName Field Functions 
      bool hasActorName() const { return this->actorName_ != nullptr;};
      void deleteActorName() { this->actorName_ = nullptr;};
      inline string getActorName() const { DARABONBA_PTR_GET_DEFAULT(actorName_, "") };
      inline Data& setActorName(string actorName) { DARABONBA_PTR_SET_VALUE(actorName_, actorName) };


      // actorType Field Functions 
      bool hasActorType() const { return this->actorType_ != nullptr;};
      void deleteActorType() { this->actorType_ = nullptr;};
      inline string getActorType() const { DARABONBA_PTR_GET_DEFAULT(actorType_, "") };
      inline Data& setActorType(string actorType) { DARABONBA_PTR_SET_VALUE(actorType_, actorType) };


      // affectedRows Field Functions 
      bool hasAffectedRows() const { return this->affectedRows_ != nullptr;};
      void deleteAffectedRows() { this->affectedRows_ = nullptr;};
      inline int64_t getAffectedRows() const { DARABONBA_PTR_GET_DEFAULT(affectedRows_, 0L) };
      inline Data& setAffectedRows(int64_t affectedRows) { DARABONBA_PTR_SET_VALUE(affectedRows_, affectedRows) };


      // agentOwnerId Field Functions 
      bool hasAgentOwnerId() const { return this->agentOwnerId_ != nullptr;};
      void deleteAgentOwnerId() { this->agentOwnerId_ = nullptr;};
      inline string getAgentOwnerId() const { DARABONBA_PTR_GET_DEFAULT(agentOwnerId_, "") };
      inline Data& setAgentOwnerId(string agentOwnerId) { DARABONBA_PTR_SET_VALUE(agentOwnerId_, agentOwnerId) };


      // catalogUuid Field Functions 
      bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
      void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
      inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
      inline Data& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline Data& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // cost Field Functions 
      bool hasCost() const { return this->cost_ != nullptr;};
      void deleteCost() { this->cost_ = nullptr;};
      inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
      inline Data& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


      // databaseSearchName Field Functions 
      bool hasDatabaseSearchName() const { return this->databaseSearchName_ != nullptr;};
      void deleteDatabaseSearchName() { this->databaseSearchName_ = nullptr;};
      inline string getDatabaseSearchName() const { DARABONBA_PTR_GET_DEFAULT(databaseSearchName_, "") };
      inline Data& setDatabaseSearchName(string databaseSearchName) { DARABONBA_PTR_SET_VALUE(databaseSearchName_, databaseSearchName) };


      // databaseUuid Field Functions 
      bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
      void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
      inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
      inline Data& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Data& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // executedSql Field Functions 
      bool hasExecutedSql() const { return this->executedSql_ != nullptr;};
      void deleteExecutedSql() { this->executedSql_ = nullptr;};
      inline string getExecutedSql() const { DARABONBA_PTR_GET_DEFAULT(executedSql_, "") };
      inline Data& setExecutedSql(string executedSql) { DARABONBA_PTR_SET_VALUE(executedSql_, executedSql) };


      // executionStatus Field Functions 
      bool hasExecutionStatus() const { return this->executionStatus_ != nullptr;};
      void deleteExecutionStatus() { this->executionStatus_ = nullptr;};
      inline string getExecutionStatus() const { DARABONBA_PTR_GET_DEFAULT(executionStatus_, "") };
      inline Data& setExecutionStatus(string executionStatus) { DARABONBA_PTR_SET_VALUE(executionStatus_, executionStatus) };


      // originalSql Field Functions 
      bool hasOriginalSql() const { return this->originalSql_ != nullptr;};
      void deleteOriginalSql() { this->originalSql_ = nullptr;};
      inline string getOriginalSql() const { DARABONBA_PTR_GET_DEFAULT(originalSql_, "") };
      inline Data& setOriginalSql(string originalSql) { DARABONBA_PTR_SET_VALUE(originalSql_, originalSql) };


      // queryId Field Functions 
      bool hasQueryId() const { return this->queryId_ != nullptr;};
      void deleteQueryId() { this->queryId_ = nullptr;};
      inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
      inline Data& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


      // returnedRows Field Functions 
      bool hasReturnedRows() const { return this->returnedRows_ != nullptr;};
      void deleteReturnedRows() { this->returnedRows_ = nullptr;};
      inline int64_t getReturnedRows() const { DARABONBA_PTR_GET_DEFAULT(returnedRows_, 0L) };
      inline Data& setReturnedRows(int64_t returnedRows) { DARABONBA_PTR_SET_VALUE(returnedRows_, returnedRows) };


      // scenario Field Functions 
      bool hasScenario() const { return this->scenario_ != nullptr;};
      void deleteScenario() { this->scenario_ = nullptr;};
      inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
      inline Data& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


      // sqlType Field Functions 
      bool hasSqlType() const { return this->sqlType_ != nullptr;};
      void deleteSqlType() { this->sqlType_ = nullptr;};
      inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
      inline Data& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // workflowId Field Functions 
      bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
      void deleteWorkflowId() { this->workflowId_ = nullptr;};
      inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
      inline Data& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    protected:
      // The ID of the actor. User IDs start with usr_, and agent IDs start with agt_.
      shared_ptr<string> actorId_ {};
      // The name of the actor.
      shared_ptr<string> actorName_ {};
      // The type of the actor. HUMAN indicates a user, and AGENT indicates an agent.
      shared_ptr<string> actorType_ {};
      // The number of affected rows.
      shared_ptr<int64_t> affectedRows_ {};
      // The ID of the user to which the agent belongs. The ID starts with usr_.
      shared_ptr<string> agentOwnerId_ {};
      // The catalog UUID to which the execution belongs.
      shared_ptr<string> catalogUuid_ {};
      // The IP address of the client that initiated the execution, excluding the port. This parameter is empty in workflow scenarios or when the IP address is not recorded.
      shared_ptr<string> clientIp_ {};
      // The execution duration of the SQL statement.
      shared_ptr<int64_t> cost_ {};
      // The search name of the database.
      shared_ptr<string> databaseSearchName_ {};
      // The database UUID to which the execution belongs.
      shared_ptr<string> databaseUuid_ {};
      // The error message returned when the execution fails.
      shared_ptr<string> error_ {};
      // The actual SQL statement that was executed.
      shared_ptr<string> executedSql_ {};
      // The execution status. Valid values:
      // - SUCCESS: The execution succeeded.
      // - FAILED: The execution failed.
      // - BLOCKED: The execution was blocked or not actually executed.
      shared_ptr<string> executionStatus_ {};
      // The original SQL statement.
      shared_ptr<string> originalSql_ {};
      // The query ID of the execution.
      shared_ptr<string> queryId_ {};
      // The number of returned rows.
      shared_ptr<int64_t> returnedRows_ {};
      // The execution scenario. Valid values:
      // - AGENT_QUERY: The agent directly executes the SQL statement.
      // - WORKFLOW_QUERY: The SQL statement is asynchronously executed through a workflow.
      shared_ptr<string> scenario_ {};
      // The SQL type.
      shared_ptr<string> sqlType_ {};
      // The start time of the execution. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> startTime_ {};
      // The workflow ID. This parameter may be empty in non-workflow scenarios.
      shared_ptr<string> workflowId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAgenticSqlExecutionHistoriesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAgenticSqlExecutionHistoriesResponseBody::Data>) };
    inline vector<ListAgenticSqlExecutionHistoriesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAgenticSqlExecutionHistoriesResponseBody::Data>) };
    inline ListAgenticSqlExecutionHistoriesResponseBody& setData(const vector<ListAgenticSqlExecutionHistoriesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAgenticSqlExecutionHistoriesResponseBody& setData(vector<ListAgenticSqlExecutionHistoriesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAgenticSqlExecutionHistoriesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListAgenticSqlExecutionHistoriesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgenticSqlExecutionHistoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAgenticSqlExecutionHistoriesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAgenticSqlExecutionHistoriesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of SQL execution history.
    shared_ptr<vector<ListAgenticSqlExecutionHistoriesResponseBody::Data>> data_ {};
    // The error code. This parameter is empty when the request is successful.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the call fails.
    shared_ptr<string> errorMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries that meet the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
