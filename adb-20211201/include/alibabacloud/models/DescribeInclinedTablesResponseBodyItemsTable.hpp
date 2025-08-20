// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINCLINEDTABLESRESPONSEBODYITEMSTABLE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINCLINEDTABLESRESPONSEBODYITEMSTABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeInclinedTablesResponseBodyItemsTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInclinedTablesResponseBodyItemsTable& obj) { 
      DARABONBA_PTR_TO_JSON(IsIncline, isIncline_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SpaceRatio, spaceRatio_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInclinedTablesResponseBodyItemsTable& obj) { 
      DARABONBA_PTR_FROM_JSON(IsIncline, isIncline_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SpaceRatio, spaceRatio_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeInclinedTablesResponseBodyItemsTable() = default ;
    DescribeInclinedTablesResponseBodyItemsTable(const DescribeInclinedTablesResponseBodyItemsTable &) = default ;
    DescribeInclinedTablesResponseBodyItemsTable(DescribeInclinedTablesResponseBodyItemsTable &&) = default ;
    DescribeInclinedTablesResponseBodyItemsTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInclinedTablesResponseBodyItemsTable() = default ;
    DescribeInclinedTablesResponseBodyItemsTable& operator=(const DescribeInclinedTablesResponseBodyItemsTable &) = default ;
    DescribeInclinedTablesResponseBodyItemsTable& operator=(DescribeInclinedTablesResponseBodyItemsTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isIncline_ != nullptr
        && this->name_ != nullptr && this->rowCount_ != nullptr && this->schema_ != nullptr && this->size_ != nullptr && this->spaceRatio_ != nullptr
        && this->totalSize_ != nullptr && this->type_ != nullptr; };
    // isIncline Field Functions 
    bool hasIsIncline() const { return this->isIncline_ != nullptr;};
    void deleteIsIncline() { this->isIncline_ = nullptr;};
    inline bool isIncline() const { DARABONBA_PTR_GET_DEFAULT(isIncline_, false) };
    inline DescribeInclinedTablesResponseBodyItemsTable& setIsIncline(bool isIncline) { DARABONBA_PTR_SET_VALUE(isIncline_, isIncline) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInclinedTablesResponseBodyItemsTable& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int64_t rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
    inline DescribeInclinedTablesResponseBodyItemsTable& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeInclinedTablesResponseBodyItemsTable& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeInclinedTablesResponseBodyItemsTable& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // spaceRatio Field Functions 
    bool hasSpaceRatio() const { return this->spaceRatio_ != nullptr;};
    void deleteSpaceRatio() { this->spaceRatio_ = nullptr;};
    inline double spaceRatio() const { DARABONBA_PTR_GET_DEFAULT(spaceRatio_, 0.0) };
    inline DescribeInclinedTablesResponseBodyItemsTable& setSpaceRatio(double spaceRatio) { DARABONBA_PTR_SET_VALUE(spaceRatio_, spaceRatio) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline DescribeInclinedTablesResponseBodyItemsTable& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeInclinedTablesResponseBodyItemsTable& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether data is skewed in the table.
    std::shared_ptr<bool> isIncline_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> name_ = nullptr;
    // The number of rows in the table.
    std::shared_ptr<int64_t> rowCount_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schema_ = nullptr;
    // The number of rows in the table.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The percentage of the table size. Unit: %.
    // 
    // >  Formula: Table storage percentage = Total data size of a table/Total data size of the cluster × 100%.
    std::shared_ptr<double> spaceRatio_ = nullptr;
    // The total data size of the table. Unit: bytes.
    // 
    // >  The following formulas can be used to calculate the total data size:
    // 
    // *   Formula 1: Total data size = Hot data size + Cold data size.
    // *   Formula 2: Total data size = Data size of table records + Data size of regular indexes + Data size of primary key indexes + Data size of other data.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
    // The detection type of the table.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
