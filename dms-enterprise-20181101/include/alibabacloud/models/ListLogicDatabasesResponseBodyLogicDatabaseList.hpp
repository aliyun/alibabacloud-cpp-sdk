// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICDATABASESRESPONSEBODYLOGICDATABASELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICDATABASESRESPONSEBODYLOGICDATABASELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLogicDatabasesResponseBodyLogicDatabaseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicDatabasesResponseBodyLogicDatabaseList& obj) { 
      DARABONBA_PTR_TO_JSON(LogicDatabase, logicDatabase_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogicDatabasesResponseBodyLogicDatabaseList& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicDatabase, logicDatabase_);
    };
    ListLogicDatabasesResponseBodyLogicDatabaseList() = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseList(const ListLogicDatabasesResponseBodyLogicDatabaseList &) = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseList(ListLogicDatabasesResponseBodyLogicDatabaseList &&) = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicDatabasesResponseBodyLogicDatabaseList() = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseList& operator=(const ListLogicDatabasesResponseBodyLogicDatabaseList &) = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseList& operator=(ListLogicDatabasesResponseBodyLogicDatabaseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logicDatabase_ != nullptr; };
    // logicDatabase Field Functions 
    bool hasLogicDatabase() const { return this->logicDatabase_ != nullptr;};
    void deleteLogicDatabase() { this->logicDatabase_ = nullptr;};
    inline const vector<Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase> & logicDatabase() const { DARABONBA_PTR_GET_CONST(logicDatabase_, vector<Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase>) };
    inline vector<Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase> logicDatabase() { DARABONBA_PTR_GET(logicDatabase_, vector<Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase>) };
    inline ListLogicDatabasesResponseBodyLogicDatabaseList& setLogicDatabase(const vector<Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase> & logicDatabase) { DARABONBA_PTR_SET_VALUE(logicDatabase_, logicDatabase) };
    inline ListLogicDatabasesResponseBodyLogicDatabaseList& setLogicDatabase(vector<Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase> && logicDatabase) { DARABONBA_PTR_SET_RVALUE(logicDatabase_, logicDatabase) };


  protected:
    std::shared_ptr<vector<Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase>> logicDatabase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
