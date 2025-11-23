// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECOLUMNSECURITYLEVELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGECOLUMNSECURITYLEVELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ChangeColumnSecurityLevelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeColumnSecurityLevelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(IsLogic, isLogic_);
      DARABONBA_PTR_TO_JSON(NewSensitivityLevel, newSensitivityLevel_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeColumnSecurityLevelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(IsLogic, isLogic_);
      DARABONBA_PTR_FROM_JSON(NewSensitivityLevel, newSensitivityLevel_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ChangeColumnSecurityLevelRequest() = default ;
    ChangeColumnSecurityLevelRequest(const ChangeColumnSecurityLevelRequest &) = default ;
    ChangeColumnSecurityLevelRequest(ChangeColumnSecurityLevelRequest &&) = default ;
    ChangeColumnSecurityLevelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeColumnSecurityLevelRequest() = default ;
    ChangeColumnSecurityLevelRequest& operator=(const ChangeColumnSecurityLevelRequest &) = default ;
    ChangeColumnSecurityLevelRequest& operator=(ChangeColumnSecurityLevelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnName_ == nullptr
        && return this->dbId_ == nullptr && return this->isLogic_ == nullptr && return this->newSensitivityLevel_ == nullptr && return this->schemaName_ == nullptr && return this->tableName_ == nullptr
        && return this->tid_ == nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ChangeColumnSecurityLevelRequest& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ChangeColumnSecurityLevelRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // isLogic Field Functions 
    bool hasIsLogic() const { return this->isLogic_ != nullptr;};
    void deleteIsLogic() { this->isLogic_ = nullptr;};
    inline bool isLogic() const { DARABONBA_PTR_GET_DEFAULT(isLogic_, false) };
    inline ChangeColumnSecurityLevelRequest& setIsLogic(bool isLogic) { DARABONBA_PTR_SET_VALUE(isLogic_, isLogic) };


    // newSensitivityLevel Field Functions 
    bool hasNewSensitivityLevel() const { return this->newSensitivityLevel_ != nullptr;};
    void deleteNewSensitivityLevel() { this->newSensitivityLevel_ = nullptr;};
    inline string newSensitivityLevel() const { DARABONBA_PTR_GET_DEFAULT(newSensitivityLevel_, "") };
    inline ChangeColumnSecurityLevelRequest& setNewSensitivityLevel(string newSensitivityLevel) { DARABONBA_PTR_SET_VALUE(newSensitivityLevel_, newSensitivityLevel) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ChangeColumnSecurityLevelRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ChangeColumnSecurityLevelRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ChangeColumnSecurityLevelRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The name of the field. You can call the [ListSensitiveColumns](https://help.aliyun.com/document_detail/188103.html) or [ListColumns](https://help.aliyun.com/document_detail/141870.html) operation to query the column name.
    // 
    // This parameter is required.
    std::shared_ptr<string> columnName_ = nullptr;
    // The database ID. The database can be a physical database or a logical database.
    // 
    // *   The ID of a physical database: You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the physical database ID.
    // *   To obtain the ID of a logical database, call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database
    // *   **false**: The database is a physical database.
    // 
    // This parameter is required.
    std::shared_ptr<bool> isLogic_ = nullptr;
    // The new security level of the column. The valid values are the same as the sensitivity levels of the classification template that is associated with the instance. You can call the [ListSensitivityLevel](https://help.aliyun.com/document_detail/2539519.html) operation to obtain the sensitivity levels of the classification template.
    // 
    // This parameter is required.
    std::shared_ptr<string> newSensitivityLevel_ = nullptr;
    // The database name. You can call the [ListSensitiveColumns](https://help.aliyun.com/document_detail/188103.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to query the database name.
    // 
    // > You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) operation to query the name of a physical database and call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) operation to query the name of a logical database.
    // 
    // This parameter is required.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the table. You can call the [ListSensitiveColumns](https://help.aliyun.com/document_detail/188103.html) or [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to query the table name.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    // The ID of the tenant.
    // 
    // > To view the tenant ID, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
