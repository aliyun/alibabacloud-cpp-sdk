// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICTABLESRESPONSEBODYLOGICTABLELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICTABLESRESPONSEBODYLOGICTABLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLogicTablesResponseBodyLogicTableListLogicTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLogicTablesResponseBodyLogicTableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicTablesResponseBodyLogicTableList& obj) { 
      DARABONBA_PTR_TO_JSON(LogicTable, logicTable_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogicTablesResponseBodyLogicTableList& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicTable, logicTable_);
    };
    ListLogicTablesResponseBodyLogicTableList() = default ;
    ListLogicTablesResponseBodyLogicTableList(const ListLogicTablesResponseBodyLogicTableList &) = default ;
    ListLogicTablesResponseBodyLogicTableList(ListLogicTablesResponseBodyLogicTableList &&) = default ;
    ListLogicTablesResponseBodyLogicTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicTablesResponseBodyLogicTableList() = default ;
    ListLogicTablesResponseBodyLogicTableList& operator=(const ListLogicTablesResponseBodyLogicTableList &) = default ;
    ListLogicTablesResponseBodyLogicTableList& operator=(ListLogicTablesResponseBodyLogicTableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logicTable_ != nullptr; };
    // logicTable Field Functions 
    bool hasLogicTable() const { return this->logicTable_ != nullptr;};
    void deleteLogicTable() { this->logicTable_ = nullptr;};
    inline const vector<Models::ListLogicTablesResponseBodyLogicTableListLogicTable> & logicTable() const { DARABONBA_PTR_GET_CONST(logicTable_, vector<Models::ListLogicTablesResponseBodyLogicTableListLogicTable>) };
    inline vector<Models::ListLogicTablesResponseBodyLogicTableListLogicTable> logicTable() { DARABONBA_PTR_GET(logicTable_, vector<Models::ListLogicTablesResponseBodyLogicTableListLogicTable>) };
    inline ListLogicTablesResponseBodyLogicTableList& setLogicTable(const vector<Models::ListLogicTablesResponseBodyLogicTableListLogicTable> & logicTable) { DARABONBA_PTR_SET_VALUE(logicTable_, logicTable) };
    inline ListLogicTablesResponseBodyLogicTableList& setLogicTable(vector<Models::ListLogicTablesResponseBodyLogicTableListLogicTable> && logicTable) { DARABONBA_PTR_SET_RVALUE(logicTable_, logicTable) };


  protected:
    std::shared_ptr<vector<Models::ListLogicTablesResponseBodyLogicTableListLogicTable>> logicTable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
