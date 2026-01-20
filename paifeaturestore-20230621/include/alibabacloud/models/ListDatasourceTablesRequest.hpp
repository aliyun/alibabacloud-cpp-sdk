// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListDatasourceTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasourceTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasourceTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListDatasourceTablesRequest() = default ;
    ListDatasourceTablesRequest(const ListDatasourceTablesRequest &) = default ;
    ListDatasourceTablesRequest(ListDatasourceTablesRequest &&) = default ;
    ListDatasourceTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasourceTablesRequest() = default ;
    ListDatasourceTablesRequest& operator=(const ListDatasourceTablesRequest &) = default ;
    ListDatasourceTablesRequest& operator=(ListDatasourceTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->schemaName_ == nullptr
        && this->tableName_ == nullptr; };
    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListDatasourceTablesRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListDatasourceTablesRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    shared_ptr<string> schemaName_ {};
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
