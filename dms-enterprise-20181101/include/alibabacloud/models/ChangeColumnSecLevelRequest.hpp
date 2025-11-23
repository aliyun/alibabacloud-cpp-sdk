// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECOLUMNSECLEVELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGECOLUMNSECLEVELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ChangeColumnSecLevelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeColumnSecLevelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(IsLogic, isLogic_);
      DARABONBA_PTR_TO_JSON(NewLevel, newLevel_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeColumnSecLevelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(IsLogic, isLogic_);
      DARABONBA_PTR_FROM_JSON(NewLevel, newLevel_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ChangeColumnSecLevelRequest() = default ;
    ChangeColumnSecLevelRequest(const ChangeColumnSecLevelRequest &) = default ;
    ChangeColumnSecLevelRequest(ChangeColumnSecLevelRequest &&) = default ;
    ChangeColumnSecLevelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeColumnSecLevelRequest() = default ;
    ChangeColumnSecLevelRequest& operator=(const ChangeColumnSecLevelRequest &) = default ;
    ChangeColumnSecLevelRequest& operator=(ChangeColumnSecLevelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnName_ == nullptr
        && return this->dbId_ == nullptr && return this->isLogic_ == nullptr && return this->newLevel_ == nullptr && return this->schemaName_ == nullptr && return this->tableName_ == nullptr
        && return this->tid_ == nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ChangeColumnSecLevelRequest& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ChangeColumnSecLevelRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // isLogic Field Functions 
    bool hasIsLogic() const { return this->isLogic_ != nullptr;};
    void deleteIsLogic() { this->isLogic_ = nullptr;};
    inline bool isLogic() const { DARABONBA_PTR_GET_DEFAULT(isLogic_, false) };
    inline ChangeColumnSecLevelRequest& setIsLogic(bool isLogic) { DARABONBA_PTR_SET_VALUE(isLogic_, isLogic) };


    // newLevel Field Functions 
    bool hasNewLevel() const { return this->newLevel_ != nullptr;};
    void deleteNewLevel() { this->newLevel_ = nullptr;};
    inline string newLevel() const { DARABONBA_PTR_GET_DEFAULT(newLevel_, "") };
    inline ChangeColumnSecLevelRequest& setNewLevel(string newLevel) { DARABONBA_PTR_SET_VALUE(newLevel_, newLevel) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ChangeColumnSecLevelRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ChangeColumnSecLevelRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ChangeColumnSecLevelRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The name of the field. You can call the [ListSensitiveColumns](https://help.aliyun.com/document_detail/188103.html) operation to obtain the name of the field.
    // 
    // > You can also call the [ListColumns](https://help.aliyun.com/document_detail/141870.html) operation to obtain the name of the field.
    // 
    // This parameter is required.
    std::shared_ptr<string> columnName_ = nullptr;
    // The ID of the database. You can call the [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the ID of the database.
    // 
    // > You can also call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) operation to obtain the ID of a physical database and the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) operation to obtain the ID of a logical database.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   true: The database is a physical database.
    // *   false: The database is a logical database.
    // 
    // This parameter is required.
    std::shared_ptr<bool> isLogic_ = nullptr;
    // The new sensitivity level of the field that you want to specify. Valid values:
    // 
    // *   INNER: low sensitivity level
    // *   SENSITIVE: medium sensitivity level
    // *   CONFIDENTIAL: high sensitivity level
    // 
    // This parameter is required.
    std::shared_ptr<string> newLevel_ = nullptr;
    // The name of the database. You can call the [ListSensitiveColumns](https://help.aliyun.com/document_detail/188103.html) operation to obtain the name of the database.
    // 
    // *   You can also call the [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the name of the database.
    // *   You can also call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) operation to obtain the name of a physical database and the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) operation to obtain the name of a logical database.
    // 
    // This parameter is required.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the table. You can call the [ListSensitiveColumns](https://help.aliyun.com/document_detail/188103.html) operation to obtain the name of the table.
    // 
    // > You can also call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to obtain the name of the table.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    // The ID of the tenant.
    // 
    // > To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
