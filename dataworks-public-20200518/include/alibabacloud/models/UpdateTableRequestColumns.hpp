// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEREQUESTCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEREQUESTCOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateTableRequestColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableRequestColumns& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnNameCn, columnNameCn_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(IsPartitionCol, isPartitionCol_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(SeqNumber, seqNumber_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableRequestColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnNameCn, columnNameCn_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(IsPartitionCol, isPartitionCol_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(SeqNumber, seqNumber_);
    };
    UpdateTableRequestColumns() = default ;
    UpdateTableRequestColumns(const UpdateTableRequestColumns &) = default ;
    UpdateTableRequestColumns(UpdateTableRequestColumns &&) = default ;
    UpdateTableRequestColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableRequestColumns() = default ;
    UpdateTableRequestColumns& operator=(const UpdateTableRequestColumns &) = default ;
    UpdateTableRequestColumns& operator=(UpdateTableRequestColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->columnNameCn_ != nullptr && this->columnType_ != nullptr && this->comment_ != nullptr && this->isPartitionCol_ != nullptr && this->length_ != nullptr
        && this->seqNumber_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline UpdateTableRequestColumns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnNameCn Field Functions 
    bool hasColumnNameCn() const { return this->columnNameCn_ != nullptr;};
    void deleteColumnNameCn() { this->columnNameCn_ = nullptr;};
    inline string columnNameCn() const { DARABONBA_PTR_GET_DEFAULT(columnNameCn_, "") };
    inline UpdateTableRequestColumns& setColumnNameCn(string columnNameCn) { DARABONBA_PTR_SET_VALUE(columnNameCn_, columnNameCn) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline UpdateTableRequestColumns& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateTableRequestColumns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // isPartitionCol Field Functions 
    bool hasIsPartitionCol() const { return this->isPartitionCol_ != nullptr;};
    void deleteIsPartitionCol() { this->isPartitionCol_ = nullptr;};
    inline bool isPartitionCol() const { DARABONBA_PTR_GET_DEFAULT(isPartitionCol_, false) };
    inline UpdateTableRequestColumns& setIsPartitionCol(bool isPartitionCol) { DARABONBA_PTR_SET_VALUE(isPartitionCol_, isPartitionCol) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline UpdateTableRequestColumns& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // seqNumber Field Functions 
    bool hasSeqNumber() const { return this->seqNumber_ != nullptr;};
    void deleteSeqNumber() { this->seqNumber_ = nullptr;};
    inline int32_t seqNumber() const { DARABONBA_PTR_GET_DEFAULT(seqNumber_, 0) };
    inline UpdateTableRequestColumns& setSeqNumber(int32_t seqNumber) { DARABONBA_PTR_SET_VALUE(seqNumber_, seqNumber) };


  protected:
    // The name of the field.
    // 
    // This parameter is required.
    std::shared_ptr<string> columnName_ = nullptr;
    // The display name of the field.
    std::shared_ptr<string> columnNameCn_ = nullptr;
    // The type of the field. For more information, see MaxCompute field types.
    // 
    // This parameter is required.
    std::shared_ptr<string> columnType_ = nullptr;
    // The comment of the field.
    std::shared_ptr<string> comment_ = nullptr;
    // Specifies whether the field is a partition field. Valid values: 0 and 1. The value 0 indicates that the field is not a partition field. The value 1 indicates that the field is a partition field.
    std::shared_ptr<bool> isPartitionCol_ = nullptr;
    // The length of the field.
    std::shared_ptr<int32_t> length_ = nullptr;
    // The sequence number of the field. If the field is a partition field, this parameter is not supported.
    std::shared_ptr<int32_t> seqNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
