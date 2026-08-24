// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUERYEXPLAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUERYEXPLAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeQueryExplainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQueryExplainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQueryExplainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
    };
    DescribeQueryExplainRequest() = default ;
    DescribeQueryExplainRequest(const DescribeQueryExplainRequest &) = default ;
    DescribeQueryExplainRequest(DescribeQueryExplainRequest &&) = default ;
    DescribeQueryExplainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQueryExplainRequest() = default ;
    DescribeQueryExplainRequest& operator=(const DescribeQueryExplainRequest &) = default ;
    DescribeQueryExplainRequest& operator=(DescribeQueryExplainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->schema_ == nullptr && this->sql_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeQueryExplainRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeQueryExplainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeQueryExplainRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeQueryExplainRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline DescribeQueryExplainRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


  protected:
    // The name of the database.
    shared_ptr<string> dbName_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the node.
    // 
    // > For PolarDB for MySQL instances, if you specify a node ID, the system queries the execution plan on that node. Otherwise, it queries the execution plan on a secondary node.For high availability ApsaraDB RDS for MySQL instances, if you specify an instance ID, the system queries the execution plan on that node. Otherwise, it queries the execution plan on a secondary node.
    shared_ptr<string> nodeId_ {};
    // Schema information. This is a reserved parameter.
    shared_ptr<string> schema_ {};
    // The SQL statement for which you want to get the execution plan.
    // 
    // This parameter is required.
    shared_ptr<string> sql_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
