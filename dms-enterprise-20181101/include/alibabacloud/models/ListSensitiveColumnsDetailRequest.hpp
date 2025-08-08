// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveColumnsDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveColumnsDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveColumnsDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListSensitiveColumnsDetailRequest() = default ;
    ListSensitiveColumnsDetailRequest(const ListSensitiveColumnsDetailRequest &) = default ;
    ListSensitiveColumnsDetailRequest(ListSensitiveColumnsDetailRequest &&) = default ;
    ListSensitiveColumnsDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveColumnsDetailRequest() = default ;
    ListSensitiveColumnsDetailRequest& operator=(const ListSensitiveColumnsDetailRequest &) = default ;
    ListSensitiveColumnsDetailRequest& operator=(ListSensitiveColumnsDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->dbId_ != nullptr && this->logic_ != nullptr && this->schemaName_ != nullptr && this->tableName_ != nullptr && this->tid_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListSensitiveColumnsDetailRequest& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListSensitiveColumnsDetailRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListSensitiveColumnsDetailRequest& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListSensitiveColumnsDetailRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListSensitiveColumnsDetailRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListSensitiveColumnsDetailRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The name of the field. You can call the [ListSensitiveColumns](https://help.aliyun.com/document_detail/188103.html) operation to obtain the name of the field.
    // 
    // >  You can also call the [ListColumns](https://help.aliyun.com/document_detail/141870.html) operation to obtain the name of the field.
    // 
    // This parameter is required.
    std::shared_ptr<string> columnName_ = nullptr;
    // The ID of the database. The database can be a physical database or a logical database.
    // 
    // *   To obtain the ID of a physical database, call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
    // *   To obtain the ID of a logical database, call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: The database is a physical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The name of the database. You can call the [ListSensitiveColumns](https://help.aliyun.com/document_detail/188103.html) operation to obtain the name of the database.
    // 
    // > * You can also call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the name of a physical database.
    // > * You can also call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the name of a logical database.
    // 
    // This parameter is required.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the table. You can call the [ListSensitiveColumns](https://help.aliyun.com/document_detail/188103.html) operation to obtain the name of the table.
    // 
    // >  You can also call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to obtain the name of the table.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
