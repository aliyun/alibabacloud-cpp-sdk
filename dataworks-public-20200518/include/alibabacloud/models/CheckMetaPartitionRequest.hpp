// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMETAPARTITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKMETAPARTITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CheckMetaPartitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckMetaPartitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(Partition, partition_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, CheckMetaPartitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(Partition, partition_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    CheckMetaPartitionRequest() = default ;
    CheckMetaPartitionRequest(const CheckMetaPartitionRequest &) = default ;
    CheckMetaPartitionRequest(CheckMetaPartitionRequest &&) = default ;
    CheckMetaPartitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckMetaPartitionRequest() = default ;
    CheckMetaPartitionRequest& operator=(const CheckMetaPartitionRequest &) = default ;
    CheckMetaPartitionRequest& operator=(CheckMetaPartitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dataSourceType_ == nullptr && this->databaseName_ == nullptr && this->partition_ == nullptr && this->tableGuid_ == nullptr && this->tableName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CheckMetaPartitionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline CheckMetaPartitionRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline CheckMetaPartitionRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline string getPartition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
    inline CheckMetaPartitionRequest& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline CheckMetaPartitionRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CheckMetaPartitionRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // This parameter is deprecated.
    shared_ptr<string> clusterId_ {};
    // The type of the data source. Set the value to odps.
    shared_ptr<string> dataSourceType_ {};
    // The name of the metadatabase.
    shared_ptr<string> databaseName_ {};
    // The name of the partition in the MaxCompute metatable.
    // 
    // This parameter is required.
    shared_ptr<string> partition_ {};
    // The GUID of the MaxCompute metatable.
    shared_ptr<string> tableGuid_ {};
    // The name of the metatable.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
