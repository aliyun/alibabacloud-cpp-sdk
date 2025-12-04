// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCESRESPONSEBODYTABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCESRESPONSEBODYTABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllDataSourcesResponseBodyTablesTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeAllDataSourcesResponseBodyTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDataSourcesResponseBodyTables& obj) { 
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDataSourcesResponseBodyTables& obj) { 
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    DescribeAllDataSourcesResponseBodyTables() = default ;
    DescribeAllDataSourcesResponseBodyTables(const DescribeAllDataSourcesResponseBodyTables &) = default ;
    DescribeAllDataSourcesResponseBodyTables(DescribeAllDataSourcesResponseBodyTables &&) = default ;
    DescribeAllDataSourcesResponseBodyTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDataSourcesResponseBodyTables() = default ;
    DescribeAllDataSourcesResponseBodyTables& operator=(const DescribeAllDataSourcesResponseBodyTables &) = default ;
    DescribeAllDataSourcesResponseBodyTables& operator=(DescribeAllDataSourcesResponseBodyTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->table_ == nullptr; };
    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const vector<Models::DescribeAllDataSourcesResponseBodyTablesTable> & table() const { DARABONBA_PTR_GET_CONST(table_, vector<Models::DescribeAllDataSourcesResponseBodyTablesTable>) };
    inline vector<Models::DescribeAllDataSourcesResponseBodyTablesTable> table() { DARABONBA_PTR_GET(table_, vector<Models::DescribeAllDataSourcesResponseBodyTablesTable>) };
    inline DescribeAllDataSourcesResponseBodyTables& setTable(const vector<Models::DescribeAllDataSourcesResponseBodyTablesTable> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline DescribeAllDataSourcesResponseBodyTables& setTable(vector<Models::DescribeAllDataSourcesResponseBodyTablesTable> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


  protected:
    std::shared_ptr<vector<Models::DescribeAllDataSourcesResponseBodyTablesTable>> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
