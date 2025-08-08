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
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->tableName_ != nullptr && this->tableSchemaName_ != nullptr && this->tid_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline ListTableColumnsRequest& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListTableColumnsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableSchemaName Field Functions 
    bool hasTableSchemaName() const { return this->tableSchemaName_ != nullptr;};
    void deleteTableSchemaName() { this->tableSchemaName_ = nullptr;};
    inline string tableSchemaName() const { DARABONBA_PTR_GET_DEFAULT(tableSchemaName_, "") };
    inline ListTableColumnsRequest& setTableSchemaName(string tableSchemaName) { DARABONBA_PTR_SET_VALUE(tableSchemaName_, tableSchemaName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListTableColumnsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> dbId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> tableSchemaName_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
