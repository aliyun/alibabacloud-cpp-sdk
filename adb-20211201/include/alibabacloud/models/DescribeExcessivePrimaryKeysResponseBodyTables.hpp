// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXCESSIVEPRIMARYKEYSRESPONSEBODYTABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXCESSIVEPRIMARYKEYSRESPONSEBODYTABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeExcessivePrimaryKeysResponseBodyTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExcessivePrimaryKeysResponseBodyTables& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_TO_JSON(PrimaryKeyColumns, primaryKeyColumns_);
      DARABONBA_PTR_TO_JSON(PrimaryKeyCount, primaryKeyCount_);
      DARABONBA_PTR_TO_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SpaceRatio, spaceRatio_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExcessivePrimaryKeysResponseBodyTables& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_FROM_JSON(PrimaryKeyColumns, primaryKeyColumns_);
      DARABONBA_PTR_FROM_JSON(PrimaryKeyCount, primaryKeyCount_);
      DARABONBA_PTR_FROM_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SpaceRatio, spaceRatio_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeExcessivePrimaryKeysResponseBodyTables() = default ;
    DescribeExcessivePrimaryKeysResponseBodyTables(const DescribeExcessivePrimaryKeysResponseBodyTables &) = default ;
    DescribeExcessivePrimaryKeysResponseBodyTables(DescribeExcessivePrimaryKeysResponseBodyTables &&) = default ;
    DescribeExcessivePrimaryKeysResponseBodyTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExcessivePrimaryKeysResponseBodyTables() = default ;
    DescribeExcessivePrimaryKeysResponseBodyTables& operator=(const DescribeExcessivePrimaryKeysResponseBodyTables &) = default ;
    DescribeExcessivePrimaryKeysResponseBodyTables& operator=(DescribeExcessivePrimaryKeysResponseBodyTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnCount_ == nullptr
        && return this->primaryKeyColumns_ == nullptr && return this->primaryKeyCount_ == nullptr && return this->primaryKeyIndexSize_ == nullptr && return this->schemaName_ == nullptr && return this->spaceRatio_ == nullptr
        && return this->tableName_ == nullptr && return this->totalSize_ == nullptr; };
    // columnCount Field Functions 
    bool hasColumnCount() const { return this->columnCount_ != nullptr;};
    void deleteColumnCount() { this->columnCount_ = nullptr;};
    inline int32_t columnCount() const { DARABONBA_PTR_GET_DEFAULT(columnCount_, 0) };
    inline DescribeExcessivePrimaryKeysResponseBodyTables& setColumnCount(int32_t columnCount) { DARABONBA_PTR_SET_VALUE(columnCount_, columnCount) };


    // primaryKeyColumns Field Functions 
    bool hasPrimaryKeyColumns() const { return this->primaryKeyColumns_ != nullptr;};
    void deletePrimaryKeyColumns() { this->primaryKeyColumns_ = nullptr;};
    inline string primaryKeyColumns() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyColumns_, "") };
    inline DescribeExcessivePrimaryKeysResponseBodyTables& setPrimaryKeyColumns(string primaryKeyColumns) { DARABONBA_PTR_SET_VALUE(primaryKeyColumns_, primaryKeyColumns) };


    // primaryKeyCount Field Functions 
    bool hasPrimaryKeyCount() const { return this->primaryKeyCount_ != nullptr;};
    void deletePrimaryKeyCount() { this->primaryKeyCount_ = nullptr;};
    inline int32_t primaryKeyCount() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyCount_, 0) };
    inline DescribeExcessivePrimaryKeysResponseBodyTables& setPrimaryKeyCount(int32_t primaryKeyCount) { DARABONBA_PTR_SET_VALUE(primaryKeyCount_, primaryKeyCount) };


    // primaryKeyIndexSize Field Functions 
    bool hasPrimaryKeyIndexSize() const { return this->primaryKeyIndexSize_ != nullptr;};
    void deletePrimaryKeyIndexSize() { this->primaryKeyIndexSize_ = nullptr;};
    inline int64_t primaryKeyIndexSize() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyIndexSize_, 0L) };
    inline DescribeExcessivePrimaryKeysResponseBodyTables& setPrimaryKeyIndexSize(int64_t primaryKeyIndexSize) { DARABONBA_PTR_SET_VALUE(primaryKeyIndexSize_, primaryKeyIndexSize) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeExcessivePrimaryKeysResponseBodyTables& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // spaceRatio Field Functions 
    bool hasSpaceRatio() const { return this->spaceRatio_ != nullptr;};
    void deleteSpaceRatio() { this->spaceRatio_ = nullptr;};
    inline double spaceRatio() const { DARABONBA_PTR_GET_DEFAULT(spaceRatio_, 0.0) };
    inline DescribeExcessivePrimaryKeysResponseBodyTables& setSpaceRatio(double spaceRatio) { DARABONBA_PTR_SET_VALUE(spaceRatio_, spaceRatio) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeExcessivePrimaryKeysResponseBodyTables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline DescribeExcessivePrimaryKeysResponseBodyTables& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The total number of columns.
    std::shared_ptr<int32_t> columnCount_ = nullptr;
    // The queried primary key fields.
    std::shared_ptr<string> primaryKeyColumns_ = nullptr;
    // The number of primary key fields.
    std::shared_ptr<int32_t> primaryKeyCount_ = nullptr;
    // The data size of primary key indexes. Unit: bytes.
    std::shared_ptr<int64_t> primaryKeyIndexSize_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The percentage of the table size. Unit: %.
    // 
    // >  Formula: Table storage percentage = Total data size of a table/Total data size of the cluster × 100%.
    std::shared_ptr<double> spaceRatio_ = nullptr;
    // The name of the table
    std::shared_ptr<string> tableName_ = nullptr;
    // The cold data size. Unit: bytes.
    // 
    // >  Formula: Cold data size = Data size of table records + Data size of regular indexes + Data size of primary key indexes + Data size of other data.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
