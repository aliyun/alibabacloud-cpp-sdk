// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLERESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLERESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeTableResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(IsAllowNull, isAllowNull_);
      DARABONBA_PTR_TO_JSON(IsPk, isPk_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(IsAllowNull, isAllowNull_);
      DARABONBA_PTR_FROM_JSON(IsPk, isPk_);
    };
    DescribeTableResponseBodyDataList() = default ;
    DescribeTableResponseBodyDataList(const DescribeTableResponseBodyDataList &) = default ;
    DescribeTableResponseBodyDataList(DescribeTableResponseBodyDataList &&) = default ;
    DescribeTableResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableResponseBodyDataList() = default ;
    DescribeTableResponseBodyDataList& operator=(const DescribeTableResponseBodyDataList &) = default ;
    DescribeTableResponseBodyDataList& operator=(DescribeTableResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->columnType_ != nullptr && this->extra_ != nullptr && this->index_ != nullptr && this->isAllowNull_ != nullptr && this->isPk_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline DescribeTableResponseBodyDataList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline DescribeTableResponseBodyDataList& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline DescribeTableResponseBodyDataList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline DescribeTableResponseBodyDataList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // isAllowNull Field Functions 
    bool hasIsAllowNull() const { return this->isAllowNull_ != nullptr;};
    void deleteIsAllowNull() { this->isAllowNull_ = nullptr;};
    inline string isAllowNull() const { DARABONBA_PTR_GET_DEFAULT(isAllowNull_, "") };
    inline DescribeTableResponseBodyDataList& setIsAllowNull(string isAllowNull) { DARABONBA_PTR_SET_VALUE(isAllowNull_, isAllowNull) };


    // isPk Field Functions 
    bool hasIsPk() const { return this->isPk_ != nullptr;};
    void deleteIsPk() { this->isPk_ = nullptr;};
    inline string isPk() const { DARABONBA_PTR_GET_DEFAULT(isPk_, "") };
    inline DescribeTableResponseBodyDataList& setIsPk(string isPk) { DARABONBA_PTR_SET_VALUE(isPk_, isPk) };


  protected:
    // Indicates the name of a column.
    std::shared_ptr<string> columnName_ = nullptr;
    // Indicates the type of the column.
    std::shared_ptr<string> columnType_ = nullptr;
    // Extra
    std::shared_ptr<string> extra_ = nullptr;
    // Indicates the primary key of the table.
    std::shared_ptr<string> index_ = nullptr;
    // Indicates whether the column can be empty.
    std::shared_ptr<string> isAllowNull_ = nullptr;
    // Indicates whether the column is the primary key column of the table.
    std::shared_ptr<string> isPk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
