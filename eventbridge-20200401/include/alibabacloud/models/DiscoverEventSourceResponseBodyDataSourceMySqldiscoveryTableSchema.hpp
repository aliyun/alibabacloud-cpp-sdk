// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCERESPONSEBODYDATASOURCEMYSQLDISCOVERYTABLESCHEMA_HPP_
#define ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCERESPONSEBODYDATASOURCEMYSQLDISCOVERYTABLESCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema() = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema(const DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema &) = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema(DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema &&) = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema() = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema& operator=(const DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema &) = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema& operator=(DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columns_ != nullptr
        && this->tableName_ != nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns>) };
    inline vector<Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns> columns() { DARABONBA_PTR_GET(columns_, vector<Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns>) };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema& setColumns(const vector<Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema& setColumns(vector<Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<vector<Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns>> columns_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
