// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLECOLUMNRESPONSEBODYDATACOLUMNLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLECOLUMNRESPONSEBODYDATACOLUMNLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableColumnResponseBodyDataColumnList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableColumnResponseBodyDataColumnList& obj) { 
      DARABONBA_PTR_TO_JSON(Caption, caption_);
      DARABONBA_PTR_TO_JSON(ColumnGuid, columnGuid_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(IsForeignKey, isForeignKey_);
      DARABONBA_PTR_TO_JSON(IsPartitionColumn, isPartitionColumn_);
      DARABONBA_PTR_TO_JSON(IsPrimaryKey, isPrimaryKey_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(RelationCount, relationCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableColumnResponseBodyDataColumnList& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(ColumnGuid, columnGuid_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(IsForeignKey, isForeignKey_);
      DARABONBA_PTR_FROM_JSON(IsPartitionColumn, isPartitionColumn_);
      DARABONBA_PTR_FROM_JSON(IsPrimaryKey, isPrimaryKey_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(RelationCount, relationCount_);
    };
    GetMetaTableColumnResponseBodyDataColumnList() = default ;
    GetMetaTableColumnResponseBodyDataColumnList(const GetMetaTableColumnResponseBodyDataColumnList &) = default ;
    GetMetaTableColumnResponseBodyDataColumnList(GetMetaTableColumnResponseBodyDataColumnList &&) = default ;
    GetMetaTableColumnResponseBodyDataColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableColumnResponseBodyDataColumnList() = default ;
    GetMetaTableColumnResponseBodyDataColumnList& operator=(const GetMetaTableColumnResponseBodyDataColumnList &) = default ;
    GetMetaTableColumnResponseBodyDataColumnList& operator=(GetMetaTableColumnResponseBodyDataColumnList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caption_ != nullptr
        && this->columnGuid_ != nullptr && this->columnName_ != nullptr && this->columnType_ != nullptr && this->comment_ != nullptr && this->isForeignKey_ != nullptr
        && this->isPartitionColumn_ != nullptr && this->isPrimaryKey_ != nullptr && this->position_ != nullptr && this->relationCount_ != nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string caption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline GetMetaTableColumnResponseBodyDataColumnList& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // columnGuid Field Functions 
    bool hasColumnGuid() const { return this->columnGuid_ != nullptr;};
    void deleteColumnGuid() { this->columnGuid_ = nullptr;};
    inline string columnGuid() const { DARABONBA_PTR_GET_DEFAULT(columnGuid_, "") };
    inline GetMetaTableColumnResponseBodyDataColumnList& setColumnGuid(string columnGuid) { DARABONBA_PTR_SET_VALUE(columnGuid_, columnGuid) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline GetMetaTableColumnResponseBodyDataColumnList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline GetMetaTableColumnResponseBodyDataColumnList& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetMetaTableColumnResponseBodyDataColumnList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // isForeignKey Field Functions 
    bool hasIsForeignKey() const { return this->isForeignKey_ != nullptr;};
    void deleteIsForeignKey() { this->isForeignKey_ = nullptr;};
    inline bool isForeignKey() const { DARABONBA_PTR_GET_DEFAULT(isForeignKey_, false) };
    inline GetMetaTableColumnResponseBodyDataColumnList& setIsForeignKey(bool isForeignKey) { DARABONBA_PTR_SET_VALUE(isForeignKey_, isForeignKey) };


    // isPartitionColumn Field Functions 
    bool hasIsPartitionColumn() const { return this->isPartitionColumn_ != nullptr;};
    void deleteIsPartitionColumn() { this->isPartitionColumn_ = nullptr;};
    inline bool isPartitionColumn() const { DARABONBA_PTR_GET_DEFAULT(isPartitionColumn_, false) };
    inline GetMetaTableColumnResponseBodyDataColumnList& setIsPartitionColumn(bool isPartitionColumn) { DARABONBA_PTR_SET_VALUE(isPartitionColumn_, isPartitionColumn) };


    // isPrimaryKey Field Functions 
    bool hasIsPrimaryKey() const { return this->isPrimaryKey_ != nullptr;};
    void deleteIsPrimaryKey() { this->isPrimaryKey_ = nullptr;};
    inline bool isPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(isPrimaryKey_, false) };
    inline GetMetaTableColumnResponseBodyDataColumnList& setIsPrimaryKey(bool isPrimaryKey) { DARABONBA_PTR_SET_VALUE(isPrimaryKey_, isPrimaryKey) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int32_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
    inline GetMetaTableColumnResponseBodyDataColumnList& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // relationCount Field Functions 
    bool hasRelationCount() const { return this->relationCount_ != nullptr;};
    void deleteRelationCount() { this->relationCount_ = nullptr;};
    inline int64_t relationCount() const { DARABONBA_PTR_GET_DEFAULT(relationCount_, 0L) };
    inline GetMetaTableColumnResponseBodyDataColumnList& setRelationCount(int64_t relationCount) { DARABONBA_PTR_SET_VALUE(relationCount_, relationCount) };


  protected:
    // The description of the field.
    std::shared_ptr<string> caption_ = nullptr;
    // The GUID of the field.
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
    // The number of times the field is read.
    std::shared_ptr<int64_t> relationCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
