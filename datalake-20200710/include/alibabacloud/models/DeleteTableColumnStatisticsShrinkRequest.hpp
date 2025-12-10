// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETABLECOLUMNSTATISTICSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETABLECOLUMNSTATISTICSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class DeleteTableColumnStatisticsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTableColumnStatisticsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(ColumnNames, columnNamesShrink_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTableColumnStatisticsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(ColumnNames, columnNamesShrink_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DeleteTableColumnStatisticsShrinkRequest() = default ;
    DeleteTableColumnStatisticsShrinkRequest(const DeleteTableColumnStatisticsShrinkRequest &) = default ;
    DeleteTableColumnStatisticsShrinkRequest(DeleteTableColumnStatisticsShrinkRequest &&) = default ;
    DeleteTableColumnStatisticsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTableColumnStatisticsShrinkRequest() = default ;
    DeleteTableColumnStatisticsShrinkRequest& operator=(const DeleteTableColumnStatisticsShrinkRequest &) = default ;
    DeleteTableColumnStatisticsShrinkRequest& operator=(DeleteTableColumnStatisticsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->columnNamesShrink_ == nullptr && return this->databaseName_ == nullptr && return this->tableName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline DeleteTableColumnStatisticsShrinkRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // columnNamesShrink Field Functions 
    bool hasColumnNamesShrink() const { return this->columnNamesShrink_ != nullptr;};
    void deleteColumnNamesShrink() { this->columnNamesShrink_ = nullptr;};
    inline string columnNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(columnNamesShrink_, "") };
    inline DeleteTableColumnStatisticsShrinkRequest& setColumnNamesShrink(string columnNamesShrink) { DARABONBA_PTR_SET_VALUE(columnNamesShrink_, columnNamesShrink) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DeleteTableColumnStatisticsShrinkRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DeleteTableColumnStatisticsShrinkRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The ID of the data directory.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The list of column names.
    std::shared_ptr<string> columnNamesShrink_ = nullptr;
    // The name of a database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
