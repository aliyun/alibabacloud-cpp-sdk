// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSRESPONSEBODYSENSITIVECOLUMNLISTSENSITIVECOLUMN_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSRESPONSEBODYSENSITIVECOLUMNLISTSENSITIVECOLUMN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn() = default ;
    ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn(const ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn &) = default ;
    ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn(ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn &&) = default ;
    ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn() = default ;
    ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn& operator=(const ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn &) = default ;
    ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn& operator=(ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnCount_ != nullptr
        && this->columnName_ != nullptr && this->functionType_ != nullptr && this->schemaName_ != nullptr && this->securityLevel_ != nullptr && this->tableName_ != nullptr; };
    // columnCount Field Functions 
    bool hasColumnCount() const { return this->columnCount_ != nullptr;};
    void deleteColumnCount() { this->columnCount_ = nullptr;};
    inline int64_t columnCount() const { DARABONBA_PTR_GET_DEFAULT(columnCount_, 0L) };
    inline ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn& setColumnCount(int64_t columnCount) { DARABONBA_PTR_SET_VALUE(columnCount_, columnCount) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The number of sensitive fields.
    std::shared_ptr<int64_t> columnCount_ = nullptr;
    // The name of the field.
    std::shared_ptr<string> columnName_ = nullptr;
    // The type of the de-identification algorithm. Valid values:
    // 
    // *   DEFAULT: All characters are masked. This is the default value.
    // *   FIX_POS: The characters at specific positions are masked.
    // *   FIX_CHAR: Specific characters are masked.
    std::shared_ptr<string> functionType_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The sensitivity level of the field. Valid values:
    // 
    // *   SENSITIVE
    // *   CONFIDENTIAL
    std::shared_ptr<string> securityLevel_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
