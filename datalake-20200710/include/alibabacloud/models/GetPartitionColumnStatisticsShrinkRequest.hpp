// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARTITIONCOLUMNSTATISTICSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPARTITIONCOLUMNSTATISTICSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class GetPartitionColumnStatisticsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPartitionColumnStatisticsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(ColumnNames, columnNamesShrink_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(PartitionNames, partitionNamesShrink_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPartitionColumnStatisticsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(ColumnNames, columnNamesShrink_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(PartitionNames, partitionNamesShrink_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetPartitionColumnStatisticsShrinkRequest() = default ;
    GetPartitionColumnStatisticsShrinkRequest(const GetPartitionColumnStatisticsShrinkRequest &) = default ;
    GetPartitionColumnStatisticsShrinkRequest(GetPartitionColumnStatisticsShrinkRequest &&) = default ;
    GetPartitionColumnStatisticsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPartitionColumnStatisticsShrinkRequest() = default ;
    GetPartitionColumnStatisticsShrinkRequest& operator=(const GetPartitionColumnStatisticsShrinkRequest &) = default ;
    GetPartitionColumnStatisticsShrinkRequest& operator=(GetPartitionColumnStatisticsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->columnNamesShrink_ == nullptr && return this->databaseName_ == nullptr && return this->partitionNamesShrink_ == nullptr && return this->tableName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline GetPartitionColumnStatisticsShrinkRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // columnNamesShrink Field Functions 
    bool hasColumnNamesShrink() const { return this->columnNamesShrink_ != nullptr;};
    void deleteColumnNamesShrink() { this->columnNamesShrink_ = nullptr;};
    inline string columnNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(columnNamesShrink_, "") };
    inline GetPartitionColumnStatisticsShrinkRequest& setColumnNamesShrink(string columnNamesShrink) { DARABONBA_PTR_SET_VALUE(columnNamesShrink_, columnNamesShrink) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetPartitionColumnStatisticsShrinkRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // partitionNamesShrink Field Functions 
    bool hasPartitionNamesShrink() const { return this->partitionNamesShrink_ != nullptr;};
    void deletePartitionNamesShrink() { this->partitionNamesShrink_ = nullptr;};
    inline string partitionNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(partitionNamesShrink_, "") };
    inline GetPartitionColumnStatisticsShrinkRequest& setPartitionNamesShrink(string partitionNamesShrink) { DARABONBA_PTR_SET_VALUE(partitionNamesShrink_, partitionNamesShrink) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetPartitionColumnStatisticsShrinkRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The ID of the data directory.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The names of the fields in the data table.
    std::shared_ptr<string> columnNamesShrink_ = nullptr;
    // The name of a database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The names of the partitions in the data table.
    std::shared_ptr<string> partitionNamesShrink_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
