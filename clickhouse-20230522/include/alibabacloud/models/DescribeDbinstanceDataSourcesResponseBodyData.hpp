// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATASOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATASOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceDataSourcesResponseBodyDataColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceDataSourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceDataSourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceDataSourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    DescribeDBInstanceDataSourcesResponseBodyData() = default ;
    DescribeDBInstanceDataSourcesResponseBodyData(const DescribeDBInstanceDataSourcesResponseBodyData &) = default ;
    DescribeDBInstanceDataSourcesResponseBodyData(DescribeDBInstanceDataSourcesResponseBodyData &&) = default ;
    DescribeDBInstanceDataSourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceDataSourcesResponseBodyData() = default ;
    DescribeDBInstanceDataSourcesResponseBodyData& operator=(const DescribeDBInstanceDataSourcesResponseBodyData &) = default ;
    DescribeDBInstanceDataSourcesResponseBodyData& operator=(DescribeDBInstanceDataSourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columns_ != nullptr
        && this->DBInstanceId_ != nullptr && this->schemas_ != nullptr && this->tables_ != nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceDataSourcesResponseBodyDataColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Models::DescribeDBInstanceDataSourcesResponseBodyDataColumns>) };
    inline vector<Models::DescribeDBInstanceDataSourcesResponseBodyDataColumns> columns() { DARABONBA_PTR_GET(columns_, vector<Models::DescribeDBInstanceDataSourcesResponseBodyDataColumns>) };
    inline DescribeDBInstanceDataSourcesResponseBodyData& setColumns(const vector<Models::DescribeDBInstanceDataSourcesResponseBodyDataColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline DescribeDBInstanceDataSourcesResponseBodyData& setColumns(vector<Models::DescribeDBInstanceDataSourcesResponseBodyDataColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceDataSourcesResponseBodyData& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline string schemas() const { DARABONBA_PTR_GET_DEFAULT(schemas_, "") };
    inline DescribeDBInstanceDataSourcesResponseBodyData& setSchemas(string schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> tables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline DescribeDBInstanceDataSourcesResponseBodyData& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeDBInstanceDataSourcesResponseBodyData& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    // The columns.
    std::shared_ptr<vector<Models::DescribeDBInstanceDataSourcesResponseBodyDataColumns>> columns_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The account.
    std::shared_ptr<string> schemas_ = nullptr;
    // The tables.
    std::shared_ptr<vector<string>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
