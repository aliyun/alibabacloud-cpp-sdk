// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateStorageAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    CreateStorageAnalysisTaskRequest() = default ;
    CreateStorageAnalysisTaskRequest(const CreateStorageAnalysisTaskRequest &) = default ;
    CreateStorageAnalysisTaskRequest(CreateStorageAnalysisTaskRequest &&) = default ;
    CreateStorageAnalysisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageAnalysisTaskRequest() = default ;
    CreateStorageAnalysisTaskRequest& operator=(const CreateStorageAnalysisTaskRequest &) = default ;
    CreateStorageAnalysisTaskRequest& operator=(CreateStorageAnalysisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->tableName_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateStorageAnalysisTaskRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateStorageAnalysisTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateStorageAnalysisTaskRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateStorageAnalysisTaskRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The database name. If you specify a database, the operation analyzes the storage usage of the specified database.
    shared_ptr<string> dbName_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The node ID. For ApsaraDB for MongoDB instances, you can use this parameter to specify a node for storage analysis. You can call the [DescribeRoleZoneInfo](https://help.aliyun.com/document_detail/123802.html) operation to query the information about nodes of an ApsaraDB for MongoDB instance.
    // 
    // *   If you set this parameter to a value in the **InsName** format, such as `d-bp1872fa24d5****`, you can call this operation to analyze the hidden node that corresponds to the node ID.
    // *   If you set this parameter to a value in the `InsName#RoleId` format, such as `d-bp1872fa24d5****#299****5`, you can call this operation to analyze the specified node.
    // 
    // >  If you run a storage analysis task on an ApsaraDB for MongoDB replica set instance and you do not specify this parameter, only the hidden node of the instance is analyzed by default. If you run a storage analysis task on an ApsaraDB for MongoDB sharded cluster instance, we recommend that you set this parameter to specify a node.
    shared_ptr<string> nodeId_ {};
    // The table name. If you specify a table in the specified database, the operation analyzes the storage usage of the specified table. If you specify a table, you must also specify the database to which the table belongs by using **DbName**.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
