// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESTATEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESTATEMENTREQUEST_HPP_
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
    class RagWorkspaceCollection : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RagWorkspaceCollection& obj) { 
        DARABONBA_PTR_TO_JSON(Collection, collection_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      };
      friend void from_json(const Darabonba::Json& j, RagWorkspaceCollection& obj) { 
        DARABONBA_PTR_FROM_JSON(Collection, collection_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      };
      RagWorkspaceCollection() = default ;
      RagWorkspaceCollection(const RagWorkspaceCollection &) = default ;
      RagWorkspaceCollection(RagWorkspaceCollection &&) = default ;
      RagWorkspaceCollection(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RagWorkspaceCollection() = default ;
      RagWorkspaceCollection& operator=(const RagWorkspaceCollection &) = default ;
      RagWorkspaceCollection& operator=(RagWorkspaceCollection &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->collection_ == nullptr
        && this->namespace_ == nullptr; };
      // collection Field Functions 
      bool hasCollection() const { return this->collection_ != nullptr;};
      void deleteCollection() { this->collection_ = nullptr;};
      inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
      inline RagWorkspaceCollection& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline RagWorkspaceCollection& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    protected:
      shared_ptr<string> collection_ {};
      shared_ptr<string> namespace_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->database_ == nullptr && this->ownerId_ == nullptr && this->parameters_ == nullptr && this->ragWorkspaceCollection_ == nullptr && this->regionId_ == nullptr
        && this->runType_ == nullptr && this->secretArn_ == nullptr && this->sql_ == nullptr && this->sqls_ == nullptr && this->statementName_ == nullptr
        && this->workspaceId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ExecuteStatementRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline ExecuteStatementRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ExecuteStatementRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Darabonba::Json> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getParameters() { DARABONBA_PTR_GET(parameters_, vector<Darabonba::Json>) };
    inline ExecuteStatementRequest& setParameters(const vector<Darabonba::Json> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ExecuteStatementRequest& setParameters(vector<Darabonba::Json> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // ragWorkspaceCollection Field Functions 
    bool hasRagWorkspaceCollection() const { return this->ragWorkspaceCollection_ != nullptr;};
    void deleteRagWorkspaceCollection() { this->ragWorkspaceCollection_ = nullptr;};
    inline const ExecuteStatementRequest::RagWorkspaceCollection & getRagWorkspaceCollection() const { DARABONBA_PTR_GET_CONST(ragWorkspaceCollection_, ExecuteStatementRequest::RagWorkspaceCollection) };
    inline ExecuteStatementRequest::RagWorkspaceCollection getRagWorkspaceCollection() { DARABONBA_PTR_GET(ragWorkspaceCollection_, ExecuteStatementRequest::RagWorkspaceCollection) };
    inline ExecuteStatementRequest& setRagWorkspaceCollection(const ExecuteStatementRequest::RagWorkspaceCollection & ragWorkspaceCollection) { DARABONBA_PTR_SET_VALUE(ragWorkspaceCollection_, ragWorkspaceCollection) };
    inline ExecuteStatementRequest& setRagWorkspaceCollection(ExecuteStatementRequest::RagWorkspaceCollection && ragWorkspaceCollection) { DARABONBA_PTR_SET_RVALUE(ragWorkspaceCollection_, ragWorkspaceCollection) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExecuteStatementRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // runType Field Functions 
    bool hasRunType() const { return this->runType_ != nullptr;};
    void deleteRunType() { this->runType_ = nullptr;};
    inline string getRunType() const { DARABONBA_PTR_GET_DEFAULT(runType_, "") };
    inline ExecuteStatementRequest& setRunType(string runType) { DARABONBA_PTR_SET_VALUE(runType_, runType) };


    // secretArn Field Functions 
    bool hasSecretArn() const { return this->secretArn_ != nullptr;};
    void deleteSecretArn() { this->secretArn_ = nullptr;};
    inline string getSecretArn() const { DARABONBA_PTR_GET_DEFAULT(secretArn_, "") };
    inline ExecuteStatementRequest& setSecretArn(string secretArn) { DARABONBA_PTR_SET_VALUE(secretArn_, secretArn) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline ExecuteStatementRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // sqls Field Functions 
    bool hasSqls() const { return this->sqls_ != nullptr;};
    void deleteSqls() { this->sqls_ = nullptr;};
    inline const vector<string> & getSqls() const { DARABONBA_PTR_GET_CONST(sqls_, vector<string>) };
    inline vector<string> getSqls() { DARABONBA_PTR_GET(sqls_, vector<string>) };
    inline ExecuteStatementRequest& setSqls(const vector<string> & sqls) { DARABONBA_PTR_SET_VALUE(sqls_, sqls) };
    inline ExecuteStatementRequest& setSqls(vector<string> && sqls) { DARABONBA_PTR_SET_RVALUE(sqls_, sqls) };


    // statementName Field Functions 
    bool hasStatementName() const { return this->statementName_ != nullptr;};
    void deleteStatementName() { this->statementName_ = nullptr;};
    inline string getStatementName() const { DARABONBA_PTR_GET_DEFAULT(statementName_, "") };
    inline ExecuteStatementRequest& setStatementName(string statementName) { DARABONBA_PTR_SET_VALUE(statementName_, statementName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ExecuteStatementRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database.
    // 
    // This parameter is required.
    shared_ptr<string> database_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The configuration parameters.
    shared_ptr<vector<Darabonba::Json>> parameters_ {};
    shared_ptr<ExecuteStatementRequest::RagWorkspaceCollection> ragWorkspaceCollection_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The execution type. Valid values:
    // 
    // *   synchronous
    // *   asynchronous (not supported)
    shared_ptr<string> runType_ {};
    // The Alibaba Cloud Resource Name (ARN) of the access credential for the created Data API account. You can call the CreateSecret operation to create an access credential.
    // 
    // >  To call the ExecuteStatement operation as a Resource Access Management (RAM) user, the RAM user must have the permissions to call the UseSecret or GetSecretValue operation on the ARN of the access credential.
    // 
    // This parameter is required.
    shared_ptr<string> secretArn_ {};
    // The SQL statements that you want to execute.
    shared_ptr<string> sql_ {};
    // The SQL statements.
    shared_ptr<vector<string>> sqls_ {};
    // The name of the set of SQL statements that you want to execute. This parameter takes effect when the RunType parameter is set to asynchronous.
    shared_ptr<string> statementName_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
