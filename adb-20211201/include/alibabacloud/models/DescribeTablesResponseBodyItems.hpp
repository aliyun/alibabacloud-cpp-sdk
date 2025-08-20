// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTablesResponseBodyItemsTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTablesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTablesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTablesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    DescribeTablesResponseBodyItems() = default ;
    DescribeTablesResponseBodyItems(const DescribeTablesResponseBodyItems &) = default ;
    DescribeTablesResponseBodyItems(DescribeTablesResponseBodyItems &&) = default ;
    DescribeTablesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTablesResponseBodyItems() = default ;
    DescribeTablesResponseBodyItems& operator=(const DescribeTablesResponseBodyItems &) = default ;
    DescribeTablesResponseBodyItems& operator=(DescribeTablesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->table_ != nullptr; };
    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const vector<Models::DescribeTablesResponseBodyItemsTable> & table() const { DARABONBA_PTR_GET_CONST(table_, vector<Models::DescribeTablesResponseBodyItemsTable>) };
    inline vector<Models::DescribeTablesResponseBodyItemsTable> table() { DARABONBA_PTR_GET(table_, vector<Models::DescribeTablesResponseBodyItemsTable>) };
    inline DescribeTablesResponseBodyItems& setTable(const vector<Models::DescribeTablesResponseBodyItemsTable> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline DescribeTablesResponseBodyItems& setTable(vector<Models::DescribeTablesResponseBodyItemsTable> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


  protected:
    std::shared_ptr<vector<Models::DescribeTablesResponseBodyItemsTable>> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
