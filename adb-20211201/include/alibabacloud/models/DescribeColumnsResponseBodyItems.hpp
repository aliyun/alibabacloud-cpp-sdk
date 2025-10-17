// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeColumnsResponseBodyItemsColumn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeColumnsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
    };
    DescribeColumnsResponseBodyItems() = default ;
    DescribeColumnsResponseBodyItems(const DescribeColumnsResponseBodyItems &) = default ;
    DescribeColumnsResponseBodyItems(DescribeColumnsResponseBodyItems &&) = default ;
    DescribeColumnsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnsResponseBodyItems() = default ;
    DescribeColumnsResponseBodyItems& operator=(const DescribeColumnsResponseBodyItems &) = default ;
    DescribeColumnsResponseBodyItems& operator=(DescribeColumnsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->column_ == nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline const vector<Models::DescribeColumnsResponseBodyItemsColumn> & column() const { DARABONBA_PTR_GET_CONST(column_, vector<Models::DescribeColumnsResponseBodyItemsColumn>) };
    inline vector<Models::DescribeColumnsResponseBodyItemsColumn> column() { DARABONBA_PTR_GET(column_, vector<Models::DescribeColumnsResponseBodyItemsColumn>) };
    inline DescribeColumnsResponseBodyItems& setColumn(const vector<Models::DescribeColumnsResponseBodyItemsColumn> & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
    inline DescribeColumnsResponseBodyItems& setColumn(vector<Models::DescribeColumnsResponseBodyItemsColumn> && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


  protected:
    std::shared_ptr<vector<Models::DescribeColumnsResponseBodyItemsColumn>> column_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
