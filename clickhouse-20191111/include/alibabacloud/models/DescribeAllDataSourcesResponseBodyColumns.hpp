// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCESRESPONSEBODYCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCESRESPONSEBODYCOLUMNS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllDataSourcesResponseBodyColumnsColumn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeAllDataSourcesResponseBodyColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDataSourcesResponseBodyColumns& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDataSourcesResponseBodyColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
    };
    DescribeAllDataSourcesResponseBodyColumns() = default ;
    DescribeAllDataSourcesResponseBodyColumns(const DescribeAllDataSourcesResponseBodyColumns &) = default ;
    DescribeAllDataSourcesResponseBodyColumns(DescribeAllDataSourcesResponseBodyColumns &&) = default ;
    DescribeAllDataSourcesResponseBodyColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDataSourcesResponseBodyColumns() = default ;
    DescribeAllDataSourcesResponseBodyColumns& operator=(const DescribeAllDataSourcesResponseBodyColumns &) = default ;
    DescribeAllDataSourcesResponseBodyColumns& operator=(DescribeAllDataSourcesResponseBodyColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->column_ == nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline const vector<Models::DescribeAllDataSourcesResponseBodyColumnsColumn> & column() const { DARABONBA_PTR_GET_CONST(column_, vector<Models::DescribeAllDataSourcesResponseBodyColumnsColumn>) };
    inline vector<Models::DescribeAllDataSourcesResponseBodyColumnsColumn> column() { DARABONBA_PTR_GET(column_, vector<Models::DescribeAllDataSourcesResponseBodyColumnsColumn>) };
    inline DescribeAllDataSourcesResponseBodyColumns& setColumn(const vector<Models::DescribeAllDataSourcesResponseBodyColumnsColumn> & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
    inline DescribeAllDataSourcesResponseBodyColumns& setColumn(vector<Models::DescribeAllDataSourcesResponseBodyColumnsColumn> && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


  protected:
    std::shared_ptr<vector<Models::DescribeAllDataSourcesResponseBodyColumnsColumn>> column_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
