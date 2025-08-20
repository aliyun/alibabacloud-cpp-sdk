// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINCLINEDTABLESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINCLINEDTABLESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInclinedTablesResponseBodyItemsTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeInclinedTablesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInclinedTablesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInclinedTablesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    DescribeInclinedTablesResponseBodyItems() = default ;
    DescribeInclinedTablesResponseBodyItems(const DescribeInclinedTablesResponseBodyItems &) = default ;
    DescribeInclinedTablesResponseBodyItems(DescribeInclinedTablesResponseBodyItems &&) = default ;
    DescribeInclinedTablesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInclinedTablesResponseBodyItems() = default ;
    DescribeInclinedTablesResponseBodyItems& operator=(const DescribeInclinedTablesResponseBodyItems &) = default ;
    DescribeInclinedTablesResponseBodyItems& operator=(DescribeInclinedTablesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->table_ != nullptr; };
    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const vector<Models::DescribeInclinedTablesResponseBodyItemsTable> & table() const { DARABONBA_PTR_GET_CONST(table_, vector<Models::DescribeInclinedTablesResponseBodyItemsTable>) };
    inline vector<Models::DescribeInclinedTablesResponseBodyItemsTable> table() { DARABONBA_PTR_GET(table_, vector<Models::DescribeInclinedTablesResponseBodyItemsTable>) };
    inline DescribeInclinedTablesResponseBodyItems& setTable(const vector<Models::DescribeInclinedTablesResponseBodyItemsTable> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline DescribeInclinedTablesResponseBodyItems& setTable(vector<Models::DescribeInclinedTablesResponseBodyItemsTable> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


  protected:
    // The queried table.
    std::shared_ptr<vector<Models::DescribeInclinedTablesResponseBodyItemsTable>> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
