// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEFULLINFORESPONSEBODYDATACOLUMNLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEFULLINFORESPONSEBODYDATACOLUMNLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableFullInfoResponseBodyDataColumnList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableFullInfoResponseBodyDataColumnList& obj) { 
      DARABONBA_PTR_TO_JSON(Caption, caption_);
      DARABONBA_PTR_TO_JSON(ColumnGuid, columnGuid_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(IsForeignKey, isForeignKey_);
      DARABONBA_PTR_TO_JSON(IsPartitionColumn, isPartitionColumn_);
      DARABONBA_PTR_TO_JSON(IsPrimaryKey, isPrimaryKey_);
      DARABONBA_PTR_TO_JSON(Position, position_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableFullInfoResponseBodyDataColumnList& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(ColumnGuid, columnGuid_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(IsForeignKey, isForeignKey_);
      DARABONBA_PTR_FROM_JSON(IsPartitionColumn, isPartitionColumn_);
      DARABONBA_PTR_FROM_JSON(IsPrimaryKey, isPrimaryKey_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
    };
    GetMetaTableFullInfoResponseBodyDataColumnList() = default ;
    GetMetaTableFullInfoResponseBodyDataColumnList(const GetMetaTableFullInfoResponseBodyDataColumnList &) = default ;
    GetMetaTableFullInfoResponseBodyDataColumnList(GetMetaTableFullInfoResponseBodyDataColumnList &&) = default ;
    GetMetaTableFullInfoResponseBodyDataColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableFullInfoResponseBodyDataColumnList() = default ;
    GetMetaTableFullInfoResponseBodyDataColumnList& operator=(const GetMetaTableFullInfoResponseBodyDataColumnList &) = default ;
    GetMetaTableFullInfoResponseBodyDataColumnList& operator=(GetMetaTableFullInfoResponseBodyDataColumnList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caption_ != nullptr
        && this->columnGuid_ != nullptr && this->columnName_ != nullptr && this->columnType_ != nullptr && this->comment_ != nullptr && this->isForeignKey_ != nullptr
        && this->isPartitionColumn_ != nullptr && this->isPrimaryKey_ != nullptr && this->position_ != nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string caption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline GetMetaTableFullInfoResponseBodyDataColumnList& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // columnGuid Field Functions 
    bool hasColumnGuid() const { return this->columnGuid_ != nullptr;};
    void deleteColumnGuid() { this->columnGuid_ = nullptr;};
    inline string columnGuid() const { DARABONBA_PTR_GET_DEFAULT(columnGuid_, "") };
    inline GetMetaTableFullInfoResponseBodyDataColumnList& setColumnGuid(string columnGuid) { DARABONBA_PTR_SET_VALUE(columnGuid_, columnGuid) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline GetMetaTableFullInfoResponseBodyDataColumnList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline GetMetaTableFullInfoResponseBodyDataColumnList& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetMetaTableFullInfoResponseBodyDataColumnList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // isForeignKey Field Functions 
    bool hasIsForeignKey() const { return this->isForeignKey_ != nullptr;};
    void deleteIsForeignKey() { this->isForeignKey_ = nullptr;};
    inline bool isForeignKey() const { DARABONBA_PTR_GET_DEFAULT(isForeignKey_, false) };
    inline GetMetaTableFullInfoResponseBodyDataColumnList& setIsForeignKey(bool isForeignKey) { DARABONBA_PTR_SET_VALUE(isForeignKey_, isForeignKey) };


    // isPartitionColumn Field Functions 
    bool hasIsPartitionColumn() const { return this->isPartitionColumn_ != nullptr;};
    void deleteIsPartitionColumn() { this->isPartitionColumn_ = nullptr;};
    inline bool isPartitionColumn() const { DARABONBA_PTR_GET_DEFAULT(isPartitionColumn_, false) };
    inline GetMetaTableFullInfoResponseBodyDataColumnList& setIsPartitionColumn(bool isPartitionColumn) { DARABONBA_PTR_SET_VALUE(isPartitionColumn_, isPartitionColumn) };


    // isPrimaryKey Field Functions 
    bool hasIsPrimaryKey() const { return this->isPrimaryKey_ != nullptr;};
    void deleteIsPrimaryKey() { this->isPrimaryKey_ = nullptr;};
    inline bool isPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(isPrimaryKey_, false) };
    inline GetMetaTableFullInfoResponseBodyDataColumnList& setIsPrimaryKey(bool isPrimaryKey) { DARABONBA_PTR_SET_VALUE(isPrimaryKey_, isPrimaryKey) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int32_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
    inline GetMetaTableFullInfoResponseBodyDataColumnList& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


  protected:
    // The description of the field.
    std::shared_ptr<string> caption_ = nullptr;
    // The unique identifier of the field.
    std::shared_ptr<string> columnGuid_ = nullptr;
    // The name of the field.
    std::shared_ptr<string> columnName_ = nullptr;
    // The data type of the field.
    std::shared_ptr<string> columnType_ = nullptr;
    // The remarks of the field.
    std::shared_ptr<string> comment_ = nullptr;
    // Indicates whether the field is a foreign key. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isForeignKey_ = nullptr;
    // Indicates whether the field is a partition field. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isPartitionColumn_ = nullptr;
    // Indicates whether the field is a primary key. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isPrimaryKey_ = nullptr;
    // The sequence number of the field.
    std::shared_ptr<int32_t> position_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
