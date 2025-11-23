// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSDETAILRESPONSEBODYSENSITIVECOLUMNSDETAILLISTSENSITIVECOLUMNSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSDETAILRESPONSEBODYSENSITIVECOLUMNSDETAILLISTSENSITIVECOLUMNSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnDescription, columnDescription_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnDescription, columnDescription_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail() = default ;
    ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail(const ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail &) = default ;
    ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail(ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail &&) = default ;
    ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail() = default ;
    ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& operator=(const ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail &) = default ;
    ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& operator=(ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnDescription_ == nullptr
        && return this->columnName_ == nullptr && return this->columnType_ == nullptr && return this->dbId_ == nullptr && return this->dbType_ == nullptr && return this->envType_ == nullptr
        && return this->logic_ == nullptr && return this->schemaName_ == nullptr && return this->searchName_ == nullptr && return this->tableName_ == nullptr; };
    // columnDescription Field Functions 
    bool hasColumnDescription() const { return this->columnDescription_ != nullptr;};
    void deleteColumnDescription() { this->columnDescription_ = nullptr;};
    inline string columnDescription() const { DARABONBA_PTR_GET_DEFAULT(columnDescription_, "") };
    inline ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& setColumnDescription(string columnDescription) { DARABONBA_PTR_SET_VALUE(columnDescription_, columnDescription) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The description of the field.
    std::shared_ptr<string> columnDescription_ = nullptr;
    // The name of the field.
    std::shared_ptr<string> columnName_ = nullptr;
    // The data type of the field.
    std::shared_ptr<string> columnType_ = nullptr;
    // The ID of the database.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The type of the database.
    std::shared_ptr<string> dbType_ = nullptr;
    // The type of the environment to which the database belongs.
    std::shared_ptr<string> envType_ = nullptr;
    // Indicates whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: The database is not a logical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name that is used to search for the database.
    std::shared_ptr<string> searchName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
