// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCERESPONSEBODYTABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCERESPONSEBODYTABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllDataSourceResponseBodyTablesTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAllDataSourceResponseBodyTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDataSourceResponseBodyTables& obj) { 
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDataSourceResponseBodyTables& obj) { 
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    DescribeAllDataSourceResponseBodyTables() = default ;
    DescribeAllDataSourceResponseBodyTables(const DescribeAllDataSourceResponseBodyTables &) = default ;
    DescribeAllDataSourceResponseBodyTables(DescribeAllDataSourceResponseBodyTables &&) = default ;
    DescribeAllDataSourceResponseBodyTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDataSourceResponseBodyTables() = default ;
    DescribeAllDataSourceResponseBodyTables& operator=(const DescribeAllDataSourceResponseBodyTables &) = default ;
    DescribeAllDataSourceResponseBodyTables& operator=(DescribeAllDataSourceResponseBodyTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->table_ != nullptr; };
    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const vector<Models::DescribeAllDataSourceResponseBodyTablesTable> & table() const { DARABONBA_PTR_GET_CONST(table_, vector<Models::DescribeAllDataSourceResponseBodyTablesTable>) };
    inline vector<Models::DescribeAllDataSourceResponseBodyTablesTable> table() { DARABONBA_PTR_GET(table_, vector<Models::DescribeAllDataSourceResponseBodyTablesTable>) };
    inline DescribeAllDataSourceResponseBodyTables& setTable(const vector<Models::DescribeAllDataSourceResponseBodyTablesTable> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline DescribeAllDataSourceResponseBodyTables& setTable(vector<Models::DescribeAllDataSourceResponseBodyTablesTable> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


  protected:
    std::shared_ptr<vector<Models::DescribeAllDataSourceResponseBodyTablesTable>> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
