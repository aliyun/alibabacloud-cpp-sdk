// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTICGLOBALSQLEXECUTIONHISTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTICGLOBALSQLEXECUTIONHISTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListAgenticGlobalSqlExecutionHistoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgenticGlobalSqlExecutionHistoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActorId, actorId_);
      DARABONBA_PTR_TO_JSON(ActorName, actorName_);
      DARABONBA_PTR_TO_JSON(ActorType, actorType_);
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SqlKeyword, sqlKeyword_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgenticGlobalSqlExecutionHistoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActorId, actorId_);
      DARABONBA_PTR_FROM_JSON(ActorName, actorName_);
      DARABONBA_PTR_FROM_JSON(ActorType, actorType_);
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SqlKeyword, sqlKeyword_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListAgenticGlobalSqlExecutionHistoriesRequest() = default ;
    ListAgenticGlobalSqlExecutionHistoriesRequest(const ListAgenticGlobalSqlExecutionHistoriesRequest &) = default ;
    ListAgenticGlobalSqlExecutionHistoriesRequest(ListAgenticGlobalSqlExecutionHistoriesRequest &&) = default ;
    ListAgenticGlobalSqlExecutionHistoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgenticGlobalSqlExecutionHistoriesRequest() = default ;
    ListAgenticGlobalSqlExecutionHistoriesRequest& operator=(const ListAgenticGlobalSqlExecutionHistoriesRequest &) = default ;
    ListAgenticGlobalSqlExecutionHistoriesRequest& operator=(ListAgenticGlobalSqlExecutionHistoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actorId_ == nullptr
        && this->actorName_ == nullptr && this->actorType_ == nullptr && this->catalogUuid_ == nullptr && this->databaseUuid_ == nullptr && this->endTime_ == nullptr
        && this->page_ == nullptr && this->scenario_ == nullptr && this->size_ == nullptr && this->sqlKeyword_ == nullptr && this->sqlType_ == nullptr
        && this->startTime_ == nullptr; };
    // actorId Field Functions 
    bool hasActorId() const { return this->actorId_ != nullptr;};
    void deleteActorId() { this->actorId_ = nullptr;};
    inline string getActorId() const { DARABONBA_PTR_GET_DEFAULT(actorId_, "") };
    inline ListAgenticGlobalSqlExecutionHistoriesRequest& setActorId(string actorId) { DARABONBA_PTR_SET_VALUE(actorId_, actorId) };


    // actorName Field Functions 
    bool hasActorName() const { return this->actorName_ != nullptr;};
    void deleteActorName() { this->actorName_ = nullptr;};
    inline string getActorName() const { DARABONBA_PTR_GET_DEFAULT(actorName_, "") };
    inline ListAgenticGlobalSqlExecutionHistoriesRequest& setActorName(string actorName) { DARABONBA_PTR_SET_VALUE(actorName_, actorName) };


    // actorType Field Functions 
    bool hasActorType() const { return this->actorType_ != nullptr;};
    void deleteActorType() { this->actorType_ = nullptr;};
    inline string getActorType() const { DARABONBA_PTR_GET_DEFAULT(actorType_, "") };
    inline ListAgenticGlobalSqlExecutionHistoriesRequest& setActorType(string actorType) { DARABONBA_PTR_SET_VALUE(actorType_, actorType) };


    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline ListAgenticGlobalSqlExecutionHistoriesRequest& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline ListAgenticGlobalSqlExecutionHistoriesRequest& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListAgenticGlobalSqlExecutionHistoriesRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListAgenticGlobalSqlExecutionHistoriesRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ListAgenticGlobalSqlExecutionHistoriesRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListAgenticGlobalSqlExecutionHistoriesRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sqlKeyword Field Functions 
    bool hasSqlKeyword() const { return this->sqlKeyword_ != nullptr;};
    void deleteSqlKeyword() { this->sqlKeyword_ = nullptr;};
    inline string getSqlKeyword() const { DARABONBA_PTR_GET_DEFAULT(sqlKeyword_, "") };
    inline ListAgenticGlobalSqlExecutionHistoriesRequest& setSqlKeyword(string sqlKeyword) { DARABONBA_PTR_SET_VALUE(sqlKeyword_, sqlKeyword) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline ListAgenticGlobalSqlExecutionHistoriesRequest& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListAgenticGlobalSqlExecutionHistoriesRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the actor. A user ID starts with usr_, and an agent ID starts with agt_. If you do not specify this parameter, all records within the current tenant are queried. If you specify a user ID, the records of the user and the agents under the user are included. If you specify an agent ID, only the records of the agent are matched. The actor must belong to the current tenant.
    shared_ptr<string> actorId_ {};
    // The name of the actor for exact match.
    shared_ptr<string> actorName_ {};
    // The type of the actor for exact match. Valid values: HUMAN and AGENT.
    shared_ptr<string> actorType_ {};
    // The catalog UUID for exact match. You can obtain this value by calling ListAgenticCatalog or SearchAgenticCatalog.
    shared_ptr<string> catalogUuid_ {};
    // The database UUID for exact match. You can obtain this value by calling ListAgenticDatabase or SearchAgenticDatabase.
    shared_ptr<string> databaseUuid_ {};
    // The end time of the query. Specify the time in the yyyy-MM-dd HH:mm:ss format. If you do not specify this parameter, the default end time is the current time. If the format cannot be parsed or the end time is earlier than the start time, the request fails.
    shared_ptr<string> endTime_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> page_ {};
    // The execution scenario for exact match. Valid values:
    // - AGENT_QUERY: The agent directly executes the SQL statement.
    // - WORKFLOW_QUERY: The SQL statement is asynchronously executed through a workflow.
    // If you do not specify this parameter, both scenarios are queried.
    shared_ptr<string> scenario_ {};
    // The number of entries per page. Default value: 20. Maximum value: 100.
    shared_ptr<int32_t> size_ {};
    // The keyword for fuzzy match based on the original SQL statement.
    shared_ptr<string> sqlKeyword_ {};
    // The SQL type for exact match.
    shared_ptr<string> sqlType_ {};
    // The start time of the query. Specify the time in the yyyy-MM-dd HH:mm:ss format. If you do not specify this parameter, the default time range is the last 7 days. If the specified time is earlier than 730 days ago or the format cannot be parsed, the query starts from 730 days ago.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
