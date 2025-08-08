// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLUMNSRESPONSEBODYCOLUMNLISTCOLUMN_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLUMNSRESPONSEBODYCOLUMNLISTCOLUMN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListColumnsResponseBodyColumnListColumn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListColumnsResponseBodyColumnListColumn& obj) { 
      DARABONBA_PTR_TO_JSON(AutoIncrement, autoIncrement_);
      DARABONBA_PTR_TO_JSON(ColumnId, columnId_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(DataLength, dataLength_);
      DARABONBA_PTR_TO_JSON(DataPrecision, dataPrecision_);
      DARABONBA_PTR_TO_JSON(DataScale, dataScale_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(Nullable, nullable_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_TO_JSON(Sensitive, sensitive_);
    };
    friend void from_json(const Darabonba::Json& j, ListColumnsResponseBodyColumnListColumn& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoIncrement, autoIncrement_);
      DARABONBA_PTR_FROM_JSON(ColumnId, columnId_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(DataLength, dataLength_);
      DARABONBA_PTR_FROM_JSON(DataPrecision, dataPrecision_);
      DARABONBA_PTR_FROM_JSON(DataScale, dataScale_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_FROM_JSON(Sensitive, sensitive_);
    };
    ListColumnsResponseBodyColumnListColumn() = default ;
    ListColumnsResponseBodyColumnListColumn(const ListColumnsResponseBodyColumnListColumn &) = default ;
    ListColumnsResponseBodyColumnListColumn(ListColumnsResponseBodyColumnListColumn &&) = default ;
    ListColumnsResponseBodyColumnListColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListColumnsResponseBodyColumnListColumn() = default ;
    ListColumnsResponseBodyColumnListColumn& operator=(const ListColumnsResponseBodyColumnListColumn &) = default ;
    ListColumnsResponseBodyColumnListColumn& operator=(ListColumnsResponseBodyColumnListColumn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoIncrement_ != nullptr
        && this->columnId_ != nullptr && this->columnName_ != nullptr && this->columnType_ != nullptr && this->dataLength_ != nullptr && this->dataPrecision_ != nullptr
        && this->dataScale_ != nullptr && this->defaultValue_ != nullptr && this->description_ != nullptr && this->functionType_ != nullptr && this->nullable_ != nullptr
        && this->securityLevel_ != nullptr && this->sensitive_ != nullptr; };
    // autoIncrement Field Functions 
    bool hasAutoIncrement() const { return this->autoIncrement_ != nullptr;};
    void deleteAutoIncrement() { this->autoIncrement_ = nullptr;};
    inline bool autoIncrement() const { DARABONBA_PTR_GET_DEFAULT(autoIncrement_, false) };
    inline ListColumnsResponseBodyColumnListColumn& setAutoIncrement(bool autoIncrement) { DARABONBA_PTR_SET_VALUE(autoIncrement_, autoIncrement) };


    // columnId Field Functions 
    bool hasColumnId() const { return this->columnId_ != nullptr;};
    void deleteColumnId() { this->columnId_ = nullptr;};
    inline string columnId() const { DARABONBA_PTR_GET_DEFAULT(columnId_, "") };
    inline ListColumnsResponseBodyColumnListColumn& setColumnId(string columnId) { DARABONBA_PTR_SET_VALUE(columnId_, columnId) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListColumnsResponseBodyColumnListColumn& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline ListColumnsResponseBodyColumnListColumn& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // dataLength Field Functions 
    bool hasDataLength() const { return this->dataLength_ != nullptr;};
    void deleteDataLength() { this->dataLength_ = nullptr;};
    inline int64_t dataLength() const { DARABONBA_PTR_GET_DEFAULT(dataLength_, 0L) };
    inline ListColumnsResponseBodyColumnListColumn& setDataLength(int64_t dataLength) { DARABONBA_PTR_SET_VALUE(dataLength_, dataLength) };


    // dataPrecision Field Functions 
    bool hasDataPrecision() const { return this->dataPrecision_ != nullptr;};
    void deleteDataPrecision() { this->dataPrecision_ = nullptr;};
    inline int32_t dataPrecision() const { DARABONBA_PTR_GET_DEFAULT(dataPrecision_, 0) };
    inline ListColumnsResponseBodyColumnListColumn& setDataPrecision(int32_t dataPrecision) { DARABONBA_PTR_SET_VALUE(dataPrecision_, dataPrecision) };


    // dataScale Field Functions 
    bool hasDataScale() const { return this->dataScale_ != nullptr;};
    void deleteDataScale() { this->dataScale_ = nullptr;};
    inline int32_t dataScale() const { DARABONBA_PTR_GET_DEFAULT(dataScale_, 0) };
    inline ListColumnsResponseBodyColumnListColumn& setDataScale(int32_t dataScale) { DARABONBA_PTR_SET_VALUE(dataScale_, dataScale) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListColumnsResponseBodyColumnListColumn& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListColumnsResponseBodyColumnListColumn& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline ListColumnsResponseBodyColumnListColumn& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool nullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline ListColumnsResponseBodyColumnListColumn& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline ListColumnsResponseBodyColumnListColumn& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // sensitive Field Functions 
    bool hasSensitive() const { return this->sensitive_ != nullptr;};
    void deleteSensitive() { this->sensitive_ = nullptr;};
    inline bool sensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
    inline ListColumnsResponseBodyColumnListColumn& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


  protected:
    // Indicates whether the column is an auto-increment column. Valid values:
    // 
    // *   true: The column is an auto-increment column.
    // *   false: The column is not an auto-increment column.
    std::shared_ptr<bool> autoIncrement_ = nullptr;
    // The ID of the column.
    std::shared_ptr<string> columnId_ = nullptr;
    // The name of the column.
    std::shared_ptr<string> columnName_ = nullptr;
    // The data type of the column.
    std::shared_ptr<string> columnType_ = nullptr;
    // The length of the field.
    std::shared_ptr<int64_t> dataLength_ = nullptr;
    // The number of valid digits for the field.
    std::shared_ptr<int32_t> dataPrecision_ = nullptr;
    // The number of decimal places for the field.
    std::shared_ptr<int32_t> dataScale_ = nullptr;
    // The default value of the column.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // The description of the column.
    std::shared_ptr<string> description_ = nullptr;
    // The type of the masking algorithm that is used for the field. Valid values:
    // 
    // *   null: No masking algorithm is used.
    // *   DEFAULT: A full masking algorithm is used.
    // *   FIX_POS: The fixed position is masked.
    // *   FIX_CHAR: The fixed characters are replaced.
    std::shared_ptr<string> functionType_ = nullptr;
    // Indicates whether the column can be empty. Valid values:
    // 
    // *   **true**: The column can be empty.
    // *   **false**: The column cannot be empty.
    std::shared_ptr<bool> nullable_ = nullptr;
    // The security level of the column. Valid values:
    // 
    // *   INNER: The column is an internal column but not sensitive.
    // *   SENSITIVE: The column is a sensitive column.
    // *   CONFIDENTIAL: The column is a confidential column.
    // 
    // > For more information, see [Sensitivity levels of fields](https://help.aliyun.com/document_detail/66091.html).
    std::shared_ptr<string> securityLevel_ = nullptr;
    // Indicates whether the column is a sensitive column. Valid values:
    // 
    // *   **true**: The column is a sensitive column.
    // *   **false**: The column is not a sensitive column.
    std::shared_ptr<bool> sensitive_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
