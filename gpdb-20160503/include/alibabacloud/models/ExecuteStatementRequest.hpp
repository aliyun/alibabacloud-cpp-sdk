// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESTATEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESTATEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExecuteStatementRequestRagWorkspaceCollection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ExecuteStatementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteStatementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RagWorkspaceCollection, ragWorkspaceCollection_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RunType, runType_);
      DARABONBA_PTR_TO_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(Sqls, sqls_);
      DARABONBA_PTR_TO_JSON(StatementName, statementName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteStatementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RagWorkspaceCollection, ragWorkspaceCollection_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RunType, runType_);
      DARABONBA_PTR_FROM_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(Sqls, sqls_);
      DARABONBA_PTR_FROM_JSON(StatementName, statementName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ExecuteStatementRequest() = default ;
    ExecuteStatementRequest(const ExecuteStatementRequest &) = default ;
    ExecuteStatementRequest(ExecuteStatementRequest &&) = default ;
    ExecuteStatementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteStatementRequest() = default ;
    ExecuteStatementRequest& operator=(const ExecuteStatementRequest &) = default ;
    ExecuteStatementRequest& operator=(ExecuteStatementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->database_ != nullptr && this->ownerId_ != nullptr && this->parameters_ != nullptr && this->ragWorkspaceCollection_ != nullptr && this->regionId_ != nullptr
        && this->runType_ != nullptr && this->secretArn_ != nullptr && this->sql_ != nullptr && this->sqls_ != nullptr && this->statementName_ != nullptr
        && this->workspaceId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ExecuteStatementRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline ExecuteStatementRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ExecuteStatementRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Darabonba::Json> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> parameters() { DARABONBA_PTR_GET(parameters_, vector<Darabonba::Json>) };
    inline ExecuteStatementRequest& setParameters(const vector<Darabonba::Json> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ExecuteStatementRequest& setParameters(vector<Darabonba::Json> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // ragWorkspaceCollection Field Functions 
    bool hasRagWorkspaceCollection() const { return this->ragWorkspaceCollection_ != nullptr;};
    void deleteRagWorkspaceCollection() { this->ragWorkspaceCollection_ = nullptr;};
    inline const ExecuteStatementRequestRagWorkspaceCollection & ragWorkspaceCollection() const { DARABONBA_PTR_GET_CONST(ragWorkspaceCollection_, ExecuteStatementRequestRagWorkspaceCollection) };
    inline ExecuteStatementRequestRagWorkspaceCollection ragWorkspaceCollection() { DARABONBA_PTR_GET(ragWorkspaceCollection_, ExecuteStatementRequestRagWorkspaceCollection) };
    inline ExecuteStatementRequest& setRagWorkspaceCollection(const ExecuteStatementRequestRagWorkspaceCollection & ragWorkspaceCollection) { DARABONBA_PTR_SET_VALUE(ragWorkspaceCollection_, ragWorkspaceCollection) };
    inline ExecuteStatementRequest& setRagWorkspaceCollection(ExecuteStatementRequestRagWorkspaceCollection && ragWorkspaceCollection) { DARABONBA_PTR_SET_RVALUE(ragWorkspaceCollection_, ragWorkspaceCollection) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExecuteStatementRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // runType Field Functions 
    bool hasRunType() const { return this->runType_ != nullptr;};
    void deleteRunType() { this->runType_ = nullptr;};
    inline string runType() const { DARABONBA_PTR_GET_DEFAULT(runType_, "") };
    inline ExecuteStatementRequest& setRunType(string runType) { DARABONBA_PTR_SET_VALUE(runType_, runType) };


    // secretArn Field Functions 
    bool hasSecretArn() const { return this->secretArn_ != nullptr;};
    void deleteSecretArn() { this->secretArn_ = nullptr;};
    inline string secretArn() const { DARABONBA_PTR_GET_DEFAULT(secretArn_, "") };
    inline ExecuteStatementRequest& setSecretArn(string secretArn) { DARABONBA_PTR_SET_VALUE(secretArn_, secretArn) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline ExecuteStatementRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // sqls Field Functions 
    bool hasSqls() const { return this->sqls_ != nullptr;};
    void deleteSqls() { this->sqls_ = nullptr;};
    inline const vector<string> & sqls() const { DARABONBA_PTR_GET_CONST(sqls_, vector<string>) };
    inline vector<string> sqls() { DARABONBA_PTR_GET(sqls_, vector<string>) };
    inline ExecuteStatementRequest& setSqls(const vector<string> & sqls) { DARABONBA_PTR_SET_VALUE(sqls_, sqls) };
    inline ExecuteStatementRequest& setSqls(vector<string> && sqls) { DARABONBA_PTR_SET_RVALUE(sqls_, sqls) };


    // statementName Field Functions 
    bool hasStatementName() const { return this->statementName_ != nullptr;};
    void deleteStatementName() { this->statementName_ = nullptr;};
    inline string statementName() const { DARABONBA_PTR_GET_DEFAULT(statementName_, "") };
    inline ExecuteStatementRequest& setStatementName(string statementName) { DARABONBA_PTR_SET_VALUE(statementName_, statementName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ExecuteStatementRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> database_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The configuration parameters.
    std::shared_ptr<vector<Darabonba::Json>> parameters_ = nullptr;
    std::shared_ptr<ExecuteStatementRequestRagWorkspaceCollection> ragWorkspaceCollection_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The execution type. Valid values:
    // 
    // *   synchronous
    // *   asynchronous (not supported)
    std::shared_ptr<string> runType_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the access credential for the created Data API account. You can call the CreateSecret operation to create an access credential.
    // 
    // >  To call the ExecuteStatement operation as a Resource Access Management (RAM) user, the RAM user must have the permissions to call the UseSecret or GetSecretValue operation on the ARN of the access credential.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretArn_ = nullptr;
    // The SQL statements that you want to execute.
    std::shared_ptr<string> sql_ = nullptr;
    // The SQL statements.
    std::shared_ptr<vector<string>> sqls_ = nullptr;
    // The name of the set of SQL statements that you want to execute. This parameter takes effect when the RunType parameter is set to asynchronous.
    std::shared_ptr<string> statementName_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
