// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPARTITIONCOLUMNSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPARTITIONCOLUMNSTATISTICSREQUEST_HPP_
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
  class DeletePartitionColumnStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePartitionColumnStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(ColumnNames, columnNames_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(PartitionNames, partitionNames_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePartitionColumnStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(ColumnNames, columnNames_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(PartitionNames, partitionNames_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DeletePartitionColumnStatisticsRequest() = default ;
    DeletePartitionColumnStatisticsRequest(const DeletePartitionColumnStatisticsRequest &) = default ;
    DeletePartitionColumnStatisticsRequest(DeletePartitionColumnStatisticsRequest &&) = default ;
    DeletePartitionColumnStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePartitionColumnStatisticsRequest() = default ;
    DeletePartitionColumnStatisticsRequest& operator=(const DeletePartitionColumnStatisticsRequest &) = default ;
    DeletePartitionColumnStatisticsRequest& operator=(DeletePartitionColumnStatisticsRequest &&) = default ;
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
    inline DeletePartitionColumnStatisticsRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // columnNames Field Functions 
    bool hasColumnNames() const { return this->columnNames_ != nullptr;};
    void deleteColumnNames() { this->columnNames_ = nullptr;};
    inline const vector<string> & columnNames() const { DARABONBA_PTR_GET_CONST(columnNames_, vector<string>) };
    inline vector<string> columnNames() { DARABONBA_PTR_GET(columnNames_, vector<string>) };
    inline DeletePartitionColumnStatisticsRequest& setColumnNames(const vector<string> & columnNames) { DARABONBA_PTR_SET_VALUE(columnNames_, columnNames) };
    inline DeletePartitionColumnStatisticsRequest& setColumnNames(vector<string> && columnNames) { DARABONBA_PTR_SET_RVALUE(columnNames_, columnNames) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DeletePartitionColumnStatisticsRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // partitionNames Field Functions 
    bool hasPartitionNames() const { return this->partitionNames_ != nullptr;};
    void deletePartitionNames() { this->partitionNames_ = nullptr;};
    inline const vector<string> & partitionNames() const { DARABONBA_PTR_GET_CONST(partitionNames_, vector<string>) };
    inline vector<string> partitionNames() { DARABONBA_PTR_GET(partitionNames_, vector<string>) };
    inline DeletePartitionColumnStatisticsRequest& setPartitionNames(const vector<string> & partitionNames) { DARABONBA_PTR_SET_VALUE(partitionNames_, partitionNames) };
    inline DeletePartitionColumnStatisticsRequest& setPartitionNames(vector<string> && partitionNames) { DARABONBA_PTR_SET_RVALUE(partitionNames_, partitionNames) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DeletePartitionColumnStatisticsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The ID of the data directory.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The key columns of the partitions.
    std::shared_ptr<vector<string>> columnNames_ = nullptr;
    // The name of a database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The names of the partitions.
    std::shared_ptr<vector<string>> partitionNames_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
