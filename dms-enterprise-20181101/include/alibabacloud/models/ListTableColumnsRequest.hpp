// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLECOLUMNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLECOLUMNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTableColumnsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableColumnsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableSchemaName, tableSchemaName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableColumnsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableSchemaName, tableSchemaName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListTableColumnsRequest() = default ;
    ListTableColumnsRequest(const ListTableColumnsRequest &) = default ;
    ListTableColumnsRequest(ListTableColumnsRequest &&) = default ;
    ListTableColumnsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableColumnsRequest() = default ;
    ListTableColumnsRequest& operator=(const ListTableColumnsRequest &) = default ;
    ListTableColumnsRequest& operator=(ListTableColumnsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && this->tableName_ == nullptr && this->tableSchemaName_ == nullptr && this->tid_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline ListTableColumnsRequest& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListTableColumnsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableSchemaName Field Functions 
    bool hasTableSchemaName() const { return this->tableSchemaName_ != nullptr;};
    void deleteTableSchemaName() { this->tableSchemaName_ = nullptr;};
    inline string getTableSchemaName() const { DARABONBA_PTR_GET_DEFAULT(tableSchemaName_, "") };
    inline ListTableColumnsRequest& setTableSchemaName(string tableSchemaName) { DARABONBA_PTR_SET_VALUE(tableSchemaName_, tableSchemaName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListTableColumnsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of a physical database: You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the physical database ID.
    // 
    // This parameter is required.
    shared_ptr<int32_t> dbId_ {};
    // The table name.
    // 
    // >  You can also call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to query the table name.
    // 
    // This parameter is required.
    shared_ptr<string> tableName_ {};
    // The schema name of the table, which is required only for SQL Server instances.
    shared_ptr<string> tableSchemaName_ {};
    // The tenant ID. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
