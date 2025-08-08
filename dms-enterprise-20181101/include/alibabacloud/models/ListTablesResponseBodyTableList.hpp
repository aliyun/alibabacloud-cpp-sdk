// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYTABLELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYTABLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTablesResponseBodyTableListTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTablesResponseBodyTableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBodyTableList& obj) { 
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBodyTableList& obj) { 
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    ListTablesResponseBodyTableList() = default ;
    ListTablesResponseBodyTableList(const ListTablesResponseBodyTableList &) = default ;
    ListTablesResponseBodyTableList(ListTablesResponseBodyTableList &&) = default ;
    ListTablesResponseBodyTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesResponseBodyTableList() = default ;
    ListTablesResponseBodyTableList& operator=(const ListTablesResponseBodyTableList &) = default ;
    ListTablesResponseBodyTableList& operator=(ListTablesResponseBodyTableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->table_ != nullptr; };
    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const vector<Models::ListTablesResponseBodyTableListTable> & table() const { DARABONBA_PTR_GET_CONST(table_, vector<Models::ListTablesResponseBodyTableListTable>) };
    inline vector<Models::ListTablesResponseBodyTableListTable> table() { DARABONBA_PTR_GET(table_, vector<Models::ListTablesResponseBodyTableListTable>) };
    inline ListTablesResponseBodyTableList& setTable(const vector<Models::ListTablesResponseBodyTableListTable> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline ListTablesResponseBodyTableList& setTable(vector<Models::ListTablesResponseBodyTableListTable> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


  protected:
    std::shared_ptr<vector<Models::ListTablesResponseBodyTableListTable>> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
