// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCERESPONSEBODYCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCERESPONSEBODYCOLUMNS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllDataSourceResponseBodyColumnsColumn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAllDataSourceResponseBodyColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDataSourceResponseBodyColumns& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDataSourceResponseBodyColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
    };
    DescribeAllDataSourceResponseBodyColumns() = default ;
    DescribeAllDataSourceResponseBodyColumns(const DescribeAllDataSourceResponseBodyColumns &) = default ;
    DescribeAllDataSourceResponseBodyColumns(DescribeAllDataSourceResponseBodyColumns &&) = default ;
    DescribeAllDataSourceResponseBodyColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDataSourceResponseBodyColumns() = default ;
    DescribeAllDataSourceResponseBodyColumns& operator=(const DescribeAllDataSourceResponseBodyColumns &) = default ;
    DescribeAllDataSourceResponseBodyColumns& operator=(DescribeAllDataSourceResponseBodyColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->column_ == nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline const vector<Models::DescribeAllDataSourceResponseBodyColumnsColumn> & column() const { DARABONBA_PTR_GET_CONST(column_, vector<Models::DescribeAllDataSourceResponseBodyColumnsColumn>) };
    inline vector<Models::DescribeAllDataSourceResponseBodyColumnsColumn> column() { DARABONBA_PTR_GET(column_, vector<Models::DescribeAllDataSourceResponseBodyColumnsColumn>) };
    inline DescribeAllDataSourceResponseBodyColumns& setColumn(const vector<Models::DescribeAllDataSourceResponseBodyColumnsColumn> & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
    inline DescribeAllDataSourceResponseBodyColumns& setColumn(vector<Models::DescribeAllDataSourceResponseBodyColumnsColumn> && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


  protected:
    std::shared_ptr<vector<Models::DescribeAllDataSourceResponseBodyColumnsColumn>> column_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
