// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLECOLUMNSRESPONSEBODYCOLUMNLISTCOLUMN_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLECOLUMNSRESPONSEBODYCOLUMNLISTCOLUMN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTableColumnsResponseBodyColumnListColumn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableColumnsResponseBodyColumnListColumn& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListTableColumnsResponseBodyColumnListColumn& obj) { 
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
    ListTableColumnsResponseBodyColumnListColumn() = default ;
    ListTableColumnsResponseBodyColumnListColumn(const ListTableColumnsResponseBodyColumnListColumn &) = default ;
    ListTableColumnsResponseBodyColumnListColumn(ListTableColumnsResponseBodyColumnListColumn &&) = default ;
    ListTableColumnsResponseBodyColumnListColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableColumnsResponseBodyColumnListColumn() = default ;
    ListTableColumnsResponseBodyColumnListColumn& operator=(const ListTableColumnsResponseBodyColumnListColumn &) = default ;
    ListTableColumnsResponseBodyColumnListColumn& operator=(ListTableColumnsResponseBodyColumnListColumn &&) = default ;
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
    inline ListTableColumnsResponseBodyColumnListColumn& setAutoIncrement(bool autoIncrement) { DARABONBA_PTR_SET_VALUE(autoIncrement_, autoIncrement) };


    // columnId Field Functions 
    bool hasColumnId() const { return this->columnId_ != nullptr;};
    void deleteColumnId() { this->columnId_ = nullptr;};
    inline string columnId() const { DARABONBA_PTR_GET_DEFAULT(columnId_, "") };
    inline ListTableColumnsResponseBodyColumnListColumn& setColumnId(string columnId) { DARABONBA_PTR_SET_VALUE(columnId_, columnId) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListTableColumnsResponseBodyColumnListColumn& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline ListTableColumnsResponseBodyColumnListColumn& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // dataLength Field Functions 
    bool hasDataLength() const { return this->dataLength_ != nullptr;};
    void deleteDataLength() { this->dataLength_ = nullptr;};
    inline int64_t dataLength() const { DARABONBA_PTR_GET_DEFAULT(dataLength_, 0L) };
    inline ListTableColumnsResponseBodyColumnListColumn& setDataLength(int64_t dataLength) { DARABONBA_PTR_SET_VALUE(dataLength_, dataLength) };


    // dataPrecision Field Functions 
    bool hasDataPrecision() const { return this->dataPrecision_ != nullptr;};
    void deleteDataPrecision() { this->dataPrecision_ = nullptr;};
    inline int32_t dataPrecision() const { DARABONBA_PTR_GET_DEFAULT(dataPrecision_, 0) };
    inline ListTableColumnsResponseBodyColumnListColumn& setDataPrecision(int32_t dataPrecision) { DARABONBA_PTR_SET_VALUE(dataPrecision_, dataPrecision) };


    // dataScale Field Functions 
    bool hasDataScale() const { return this->dataScale_ != nullptr;};
    void deleteDataScale() { this->dataScale_ = nullptr;};
    inline int32_t dataScale() const { DARABONBA_PTR_GET_DEFAULT(dataScale_, 0) };
    inline ListTableColumnsResponseBodyColumnListColumn& setDataScale(int32_t dataScale) { DARABONBA_PTR_SET_VALUE(dataScale_, dataScale) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListTableColumnsResponseBodyColumnListColumn& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTableColumnsResponseBodyColumnListColumn& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline ListTableColumnsResponseBodyColumnListColumn& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool nullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline ListTableColumnsResponseBodyColumnListColumn& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline ListTableColumnsResponseBodyColumnListColumn& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // sensitive Field Functions 
    bool hasSensitive() const { return this->sensitive_ != nullptr;};
    void deleteSensitive() { this->sensitive_ = nullptr;};
    inline bool sensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
    inline ListTableColumnsResponseBodyColumnListColumn& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


  protected:
    std::shared_ptr<bool> autoIncrement_ = nullptr;
    std::shared_ptr<string> columnId_ = nullptr;
    std::shared_ptr<string> columnName_ = nullptr;
    std::shared_ptr<string> columnType_ = nullptr;
    std::shared_ptr<int64_t> dataLength_ = nullptr;
    std::shared_ptr<int32_t> dataPrecision_ = nullptr;
    std::shared_ptr<int32_t> dataScale_ = nullptr;
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> functionType_ = nullptr;
    std::shared_ptr<bool> nullable_ = nullptr;
    std::shared_ptr<string> securityLevel_ = nullptr;
    std::shared_ptr<bool> sensitive_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
