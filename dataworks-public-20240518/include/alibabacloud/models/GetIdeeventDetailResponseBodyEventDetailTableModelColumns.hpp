// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILTABLEMODELCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILTABLEMODELCOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetIDEEventDetailResponseBodyEventDetailTableModelColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIDEEventDetailResponseBodyEventDetailTableModelColumns& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(IsPartitionColumn, isPartitionColumn_);
    };
    friend void from_json(const Darabonba::Json& j, GetIDEEventDetailResponseBodyEventDetailTableModelColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(IsPartitionColumn, isPartitionColumn_);
    };
    GetIDEEventDetailResponseBodyEventDetailTableModelColumns() = default ;
    GetIDEEventDetailResponseBodyEventDetailTableModelColumns(const GetIDEEventDetailResponseBodyEventDetailTableModelColumns &) = default ;
    GetIDEEventDetailResponseBodyEventDetailTableModelColumns(GetIDEEventDetailResponseBodyEventDetailTableModelColumns &&) = default ;
    GetIDEEventDetailResponseBodyEventDetailTableModelColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIDEEventDetailResponseBodyEventDetailTableModelColumns() = default ;
    GetIDEEventDetailResponseBodyEventDetailTableModelColumns& operator=(const GetIDEEventDetailResponseBodyEventDetailTableModelColumns &) = default ;
    GetIDEEventDetailResponseBodyEventDetailTableModelColumns& operator=(GetIDEEventDetailResponseBodyEventDetailTableModelColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->columnType_ != nullptr && this->comment_ != nullptr && this->isPartitionColumn_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailTableModelColumns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailTableModelColumns& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailTableModelColumns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // isPartitionColumn Field Functions 
    bool hasIsPartitionColumn() const { return this->isPartitionColumn_ != nullptr;};
    void deleteIsPartitionColumn() { this->isPartitionColumn_ = nullptr;};
    inline bool isPartitionColumn() const { DARABONBA_PTR_GET_DEFAULT(isPartitionColumn_, false) };
    inline GetIDEEventDetailResponseBodyEventDetailTableModelColumns& setIsPartitionColumn(bool isPartitionColumn) { DARABONBA_PTR_SET_VALUE(isPartitionColumn_, isPartitionColumn) };


  protected:
    // The name of the column.
    std::shared_ptr<string> columnName_ = nullptr;
    // The data type of the column.
    std::shared_ptr<string> columnType_ = nullptr;
    // The remarks of the column.
    std::shared_ptr<string> comment_ = nullptr;
    // Indicates whether the column is a partition key column. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isPartitionColumn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
