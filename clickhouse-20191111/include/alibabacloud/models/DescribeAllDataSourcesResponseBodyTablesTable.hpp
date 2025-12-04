// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCESRESPONSEBODYTABLESTABLE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCESRESPONSEBODYTABLESTABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeAllDataSourcesResponseBodyTablesTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDataSourcesResponseBodyTablesTable& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDataSourcesResponseBodyTablesTable& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeAllDataSourcesResponseBodyTablesTable() = default ;
    DescribeAllDataSourcesResponseBodyTablesTable(const DescribeAllDataSourcesResponseBodyTablesTable &) = default ;
    DescribeAllDataSourcesResponseBodyTablesTable(DescribeAllDataSourcesResponseBodyTablesTable &&) = default ;
    DescribeAllDataSourcesResponseBodyTablesTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDataSourcesResponseBodyTablesTable() = default ;
    DescribeAllDataSourcesResponseBodyTablesTable& operator=(const DescribeAllDataSourcesResponseBodyTablesTable &) = default ;
    DescribeAllDataSourcesResponseBodyTablesTable& operator=(DescribeAllDataSourcesResponseBodyTablesTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->schemaName_ == nullptr && return this->tableName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAllDataSourcesResponseBodyTablesTable& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeAllDataSourcesResponseBodyTablesTable& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeAllDataSourcesResponseBodyTablesTable& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The database name.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The table name.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
