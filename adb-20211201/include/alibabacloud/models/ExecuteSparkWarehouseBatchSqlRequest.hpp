// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESPARKWAREHOUSEBATCHSQLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESPARKWAREHOUSEBATCHSQLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ExecuteSparkWarehouseBatchSQLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteSparkWarehouseBatchSQLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Agency, agency_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ExecuteResultLimit, executeResultLimit_);
      DARABONBA_PTR_TO_JSON(ExecuteTimeLimitInSeconds, executeTimeLimitInSeconds_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(RuntimeConfig, runtimeConfig_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteSparkWarehouseBatchSQLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Agency, agency_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ExecuteResultLimit, executeResultLimit_);
      DARABONBA_PTR_FROM_JSON(ExecuteTimeLimitInSeconds, executeTimeLimitInSeconds_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(RuntimeConfig, runtimeConfig_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
    };
    ExecuteSparkWarehouseBatchSQLRequest() = default ;
    ExecuteSparkWarehouseBatchSQLRequest(const ExecuteSparkWarehouseBatchSQLRequest &) = default ;
    ExecuteSparkWarehouseBatchSQLRequest(ExecuteSparkWarehouseBatchSQLRequest &&) = default ;
    ExecuteSparkWarehouseBatchSQLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteSparkWarehouseBatchSQLRequest() = default ;
    ExecuteSparkWarehouseBatchSQLRequest& operator=(const ExecuteSparkWarehouseBatchSQLRequest &) = default ;
    ExecuteSparkWarehouseBatchSQLRequest& operator=(ExecuteSparkWarehouseBatchSQLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agency_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->executeResultLimit_ == nullptr && return this->executeTimeLimitInSeconds_ == nullptr && return this->query_ == nullptr && return this->resourceGroupName_ == nullptr
        && return this->runtimeConfig_ == nullptr && return this->schema_ == nullptr; };
    // agency Field Functions 
    bool hasAgency() const { return this->agency_ != nullptr;};
    void deleteAgency() { this->agency_ = nullptr;};
    inline string agency() const { DARABONBA_PTR_GET_DEFAULT(agency_, "") };
    inline ExecuteSparkWarehouseBatchSQLRequest& setAgency(string agency) { DARABONBA_PTR_SET_VALUE(agency_, agency) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ExecuteSparkWarehouseBatchSQLRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // executeResultLimit Field Functions 
    bool hasExecuteResultLimit() const { return this->executeResultLimit_ != nullptr;};
    void deleteExecuteResultLimit() { this->executeResultLimit_ = nullptr;};
    inline int64_t executeResultLimit() const { DARABONBA_PTR_GET_DEFAULT(executeResultLimit_, 0L) };
    inline ExecuteSparkWarehouseBatchSQLRequest& setExecuteResultLimit(int64_t executeResultLimit) { DARABONBA_PTR_SET_VALUE(executeResultLimit_, executeResultLimit) };


    // executeTimeLimitInSeconds Field Functions 
    bool hasExecuteTimeLimitInSeconds() const { return this->executeTimeLimitInSeconds_ != nullptr;};
    void deleteExecuteTimeLimitInSeconds() { this->executeTimeLimitInSeconds_ = nullptr;};
    inline int64_t executeTimeLimitInSeconds() const { DARABONBA_PTR_GET_DEFAULT(executeTimeLimitInSeconds_, 0L) };
    inline ExecuteSparkWarehouseBatchSQLRequest& setExecuteTimeLimitInSeconds(int64_t executeTimeLimitInSeconds) { DARABONBA_PTR_SET_VALUE(executeTimeLimitInSeconds_, executeTimeLimitInSeconds) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ExecuteSparkWarehouseBatchSQLRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline ExecuteSparkWarehouseBatchSQLRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // runtimeConfig Field Functions 
    bool hasRuntimeConfig() const { return this->runtimeConfig_ != nullptr;};
    void deleteRuntimeConfig() { this->runtimeConfig_ = nullptr;};
    inline string runtimeConfig() const { DARABONBA_PTR_GET_DEFAULT(runtimeConfig_, "") };
    inline ExecuteSparkWarehouseBatchSQLRequest& setRuntimeConfig(string runtimeConfig) { DARABONBA_PTR_SET_VALUE(runtimeConfig_, runtimeConfig) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline ExecuteSparkWarehouseBatchSQLRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


  protected:
    // The name of the client.
    std::shared_ptr<string> agency_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The maximum amount of execution result data that can be written to Object Storage Service (OSS). Unit: MB. Default value: 4096. The size of compressed objects is difficult to estimate. The data that is actually written to OSS is smaller than the specified value.
    std::shared_ptr<int64_t> executeResultLimit_ = nullptr;
    // The maximum execution duration. Unit: seconds. If a set of SQL statements fail to be executed for the specified period of time after submission, they are marked as a timeout error. The default value is 360000 seconds, which is equivalent to 100 hours.
    std::shared_ptr<int64_t> executeTimeLimitInSeconds_ = nullptr;
    // The SQL statements that you want to execute in batches. Separate multiple SQL statements with semicolons (;). The execution engine executes the SQL statements in sequence in the same session.
    // 
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
    // The name of the resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The additional runtime parameter. Specify the parameter in the JSON format.
    std::shared_ptr<string> runtimeConfig_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
