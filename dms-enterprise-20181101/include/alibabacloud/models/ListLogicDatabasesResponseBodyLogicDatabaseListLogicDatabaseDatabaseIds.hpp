// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICDATABASESRESPONSEBODYLOGICDATABASELISTLOGICDATABASEDATABASEIDS_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICDATABASESRESPONSEBODYLOGICDATABASELISTLOGICDATABASEDATABASEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseIds, databaseIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseIds, databaseIds_);
    };
    ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds() = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds(const ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds &) = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds(ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds &&) = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds() = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds& operator=(const ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds &) = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds& operator=(ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseIds_ == nullptr; };
    // databaseIds Field Functions 
    bool hasDatabaseIds() const { return this->databaseIds_ != nullptr;};
    void deleteDatabaseIds() { this->databaseIds_ = nullptr;};
    inline const vector<int64_t> & databaseIds() const { DARABONBA_PTR_GET_CONST(databaseIds_, vector<int64_t>) };
    inline vector<int64_t> databaseIds() { DARABONBA_PTR_GET(databaseIds_, vector<int64_t>) };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds& setDatabaseIds(const vector<int64_t> & databaseIds) { DARABONBA_PTR_SET_VALUE(databaseIds_, databaseIds) };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds& setDatabaseIds(vector<int64_t> && databaseIds) { DARABONBA_PTR_SET_RVALUE(databaseIds_, databaseIds) };


  protected:
    std::shared_ptr<vector<int64_t>> databaseIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
