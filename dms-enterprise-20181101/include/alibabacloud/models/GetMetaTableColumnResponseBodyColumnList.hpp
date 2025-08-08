// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLECOLUMNRESPONSEBODYCOLUMNLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLECOLUMNRESPONSEBODYCOLUMNLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetMetaTableColumnResponseBodyColumnList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableColumnResponseBodyColumnList& obj) { 
      DARABONBA_PTR_TO_JSON(AutoIncrement, autoIncrement_);
      DARABONBA_PTR_TO_JSON(ColumnId, columnId_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(DataLength, dataLength_);
      DARABONBA_PTR_TO_JSON(DataPrecision, dataPrecision_);
      DARABONBA_PTR_TO_JSON(DataScale, dataScale_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Nullable, nullable_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableColumnResponseBodyColumnList& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoIncrement, autoIncrement_);
      DARABONBA_PTR_FROM_JSON(ColumnId, columnId_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(DataLength, dataLength_);
      DARABONBA_PTR_FROM_JSON(DataPrecision, dataPrecision_);
      DARABONBA_PTR_FROM_JSON(DataScale, dataScale_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    GetMetaTableColumnResponseBodyColumnList() = default ;
    GetMetaTableColumnResponseBodyColumnList(const GetMetaTableColumnResponseBodyColumnList &) = default ;
    GetMetaTableColumnResponseBodyColumnList(GetMetaTableColumnResponseBodyColumnList &&) = default ;
    GetMetaTableColumnResponseBodyColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableColumnResponseBodyColumnList() = default ;
    GetMetaTableColumnResponseBodyColumnList& operator=(const GetMetaTableColumnResponseBodyColumnList &) = default ;
    GetMetaTableColumnResponseBodyColumnList& operator=(GetMetaTableColumnResponseBodyColumnList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoIncrement_ != nullptr
        && this->columnId_ != nullptr && this->columnName_ != nullptr && this->columnType_ != nullptr && this->dataLength_ != nullptr && this->dataPrecision_ != nullptr
        && this->dataScale_ != nullptr && this->description_ != nullptr && this->nullable_ != nullptr && this->position_ != nullptr && this->primaryKey_ != nullptr
        && this->securityLevel_ != nullptr; };
    // autoIncrement Field Functions 
    bool hasAutoIncrement() const { return this->autoIncrement_ != nullptr;};
    void deleteAutoIncrement() { this->autoIncrement_ = nullptr;};
    inline bool autoIncrement() const { DARABONBA_PTR_GET_DEFAULT(autoIncrement_, false) };
    inline GetMetaTableColumnResponseBodyColumnList& setAutoIncrement(bool autoIncrement) { DARABONBA_PTR_SET_VALUE(autoIncrement_, autoIncrement) };


    // columnId Field Functions 
    bool hasColumnId() const { return this->columnId_ != nullptr;};
    void deleteColumnId() { this->columnId_ = nullptr;};
    inline string columnId() const { DARABONBA_PTR_GET_DEFAULT(columnId_, "") };
    inline GetMetaTableColumnResponseBodyColumnList& setColumnId(string columnId) { DARABONBA_PTR_SET_VALUE(columnId_, columnId) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline GetMetaTableColumnResponseBodyColumnList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline GetMetaTableColumnResponseBodyColumnList& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // dataLength Field Functions 
    bool hasDataLength() const { return this->dataLength_ != nullptr;};
    void deleteDataLength() { this->dataLength_ = nullptr;};
    inline int64_t dataLength() const { DARABONBA_PTR_GET_DEFAULT(dataLength_, 0L) };
    inline GetMetaTableColumnResponseBodyColumnList& setDataLength(int64_t dataLength) { DARABONBA_PTR_SET_VALUE(dataLength_, dataLength) };


    // dataPrecision Field Functions 
    bool hasDataPrecision() const { return this->dataPrecision_ != nullptr;};
    void deleteDataPrecision() { this->dataPrecision_ = nullptr;};
    inline int32_t dataPrecision() const { DARABONBA_PTR_GET_DEFAULT(dataPrecision_, 0) };
    inline GetMetaTableColumnResponseBodyColumnList& setDataPrecision(int32_t dataPrecision) { DARABONBA_PTR_SET_VALUE(dataPrecision_, dataPrecision) };


    // dataScale Field Functions 
    bool hasDataScale() const { return this->dataScale_ != nullptr;};
    void deleteDataScale() { this->dataScale_ = nullptr;};
    inline int32_t dataScale() const { DARABONBA_PTR_GET_DEFAULT(dataScale_, 0) };
    inline GetMetaTableColumnResponseBodyColumnList& setDataScale(int32_t dataScale) { DARABONBA_PTR_SET_VALUE(dataScale_, dataScale) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMetaTableColumnResponseBodyColumnList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool nullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline GetMetaTableColumnResponseBodyColumnList& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int32_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
    inline GetMetaTableColumnResponseBodyColumnList& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline GetMetaTableColumnResponseBodyColumnList& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline GetMetaTableColumnResponseBodyColumnList& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


  protected:
    // Indicates whether the column is an auto-increment column. Valid values:
    // 
    // *   **true**: The column is an auto-increment column.
    // *   **false**: The column is not an auto-increment column.
    std::shared_ptr<bool> autoIncrement_ = nullptr;
    // The ID of the column.
    std::shared_ptr<string> columnId_ = nullptr;
    // The name of the column.
    std::shared_ptr<string> columnName_ = nullptr;
    // The data type of the column.
    // 
    // > The return value of a column is not unique, such as **bigint** or **int**.
    std::shared_ptr<string> columnType_ = nullptr;
    // The length of the field.
    std::shared_ptr<int64_t> dataLength_ = nullptr;
    // The precision of the field.
    std::shared_ptr<int32_t> dataPrecision_ = nullptr;
    // The number of decimal places for the field.
    std::shared_ptr<int32_t> dataScale_ = nullptr;
    // The description of the column.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the field can be empty. Valid values:
    // 
    // *   **true**: The field can be empty.
    // *   **false**: The field cannot be empty.
    std::shared_ptr<bool> nullable_ = nullptr;
    // The position of the field in the table.
    std::shared_ptr<int32_t> position_ = nullptr;
    // Indicates whether the field is the primary key. Valid values:
    // 
    // *   **true**: The field is the primary key.
    // *   **false**: The field is not the primary key.
    std::shared_ptr<string> primaryKey_ = nullptr;
    // The sensitivity level of the column. Valid values:
    // 
    // *   **INNER**: The column is not sensitive.
    // *   **SENSITIVE**: The column is sensitive.
    // *   **CONFIDENTIAL**: The column is confidential.
    // 
    // > For more information, see [Sensitivity levels of columns](https://help.aliyun.com/document_detail/66091.html).
    std::shared_ptr<string> securityLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
