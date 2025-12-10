// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETPARTITIONCOLUMNSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETPARTITIONCOLUMNSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class BatchGetPartitionColumnStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetPartitionColumnStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(ColumnNames, columnNames_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(PartitionNames, partitionNames_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetPartitionColumnStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(ColumnNames, columnNames_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(PartitionNames, partitionNames_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    BatchGetPartitionColumnStatisticsRequest() = default ;
    BatchGetPartitionColumnStatisticsRequest(const BatchGetPartitionColumnStatisticsRequest &) = default ;
    BatchGetPartitionColumnStatisticsRequest(BatchGetPartitionColumnStatisticsRequest &&) = default ;
    BatchGetPartitionColumnStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetPartitionColumnStatisticsRequest() = default ;
    BatchGetPartitionColumnStatisticsRequest& operator=(const BatchGetPartitionColumnStatisticsRequest &) = default ;
    BatchGetPartitionColumnStatisticsRequest& operator=(BatchGetPartitionColumnStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->columnNames_ == nullptr && return this->databaseName_ == nullptr && return this->partitionNames_ == nullptr && return this->tableName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline BatchGetPartitionColumnStatisticsRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // columnNames Field Functions 
    bool hasColumnNames() const { return this->columnNames_ != nullptr;};
    void deleteColumnNames() { this->columnNames_ = nullptr;};
    inline const vector<string> & columnNames() const { DARABONBA_PTR_GET_CONST(columnNames_, vector<string>) };
    inline vector<string> columnNames() { DARABONBA_PTR_GET(columnNames_, vector<string>) };
    inline BatchGetPartitionColumnStatisticsRequest& setColumnNames(const vector<string> & columnNames) { DARABONBA_PTR_SET_VALUE(columnNames_, columnNames) };
    inline BatchGetPartitionColumnStatisticsRequest& setColumnNames(vector<string> && columnNames) { DARABONBA_PTR_SET_RVALUE(columnNames_, columnNames) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline BatchGetPartitionColumnStatisticsRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // partitionNames Field Functions 
    bool hasPartitionNames() const { return this->partitionNames_ != nullptr;};
    void deletePartitionNames() { this->partitionNames_ = nullptr;};
    inline const vector<string> & partitionNames() const { DARABONBA_PTR_GET_CONST(partitionNames_, vector<string>) };
    inline vector<string> partitionNames() { DARABONBA_PTR_GET(partitionNames_, vector<string>) };
    inline BatchGetPartitionColumnStatisticsRequest& setPartitionNames(const vector<string> & partitionNames) { DARABONBA_PTR_SET_VALUE(partitionNames_, partitionNames) };
    inline BatchGetPartitionColumnStatisticsRequest& setPartitionNames(vector<string> && partitionNames) { DARABONBA_PTR_SET_RVALUE(partitionNames_, partitionNames) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline BatchGetPartitionColumnStatisticsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The names of the columns in the data table.
    std::shared_ptr<vector<string>> columnNames_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The names of the partitions in the data table.
    std::shared_ptr<vector<string>> partitionNames_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
