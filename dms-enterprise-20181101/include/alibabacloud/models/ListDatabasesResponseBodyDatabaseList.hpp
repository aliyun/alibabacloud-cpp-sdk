// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYDATABASELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYDATABASELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDatabasesResponseBodyDatabaseListDatabase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDatabasesResponseBodyDatabaseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesResponseBodyDatabaseList& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesResponseBodyDatabaseList& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
    };
    ListDatabasesResponseBodyDatabaseList() = default ;
    ListDatabasesResponseBodyDatabaseList(const ListDatabasesResponseBodyDatabaseList &) = default ;
    ListDatabasesResponseBodyDatabaseList(ListDatabasesResponseBodyDatabaseList &&) = default ;
    ListDatabasesResponseBodyDatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesResponseBodyDatabaseList() = default ;
    ListDatabasesResponseBodyDatabaseList& operator=(const ListDatabasesResponseBodyDatabaseList &) = default ;
    ListDatabasesResponseBodyDatabaseList& operator=(ListDatabasesResponseBodyDatabaseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->database_ != nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const vector<Models::ListDatabasesResponseBodyDatabaseListDatabase> & database() const { DARABONBA_PTR_GET_CONST(database_, vector<Models::ListDatabasesResponseBodyDatabaseListDatabase>) };
    inline vector<Models::ListDatabasesResponseBodyDatabaseListDatabase> database() { DARABONBA_PTR_GET(database_, vector<Models::ListDatabasesResponseBodyDatabaseListDatabase>) };
    inline ListDatabasesResponseBodyDatabaseList& setDatabase(const vector<Models::ListDatabasesResponseBodyDatabaseListDatabase> & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline ListDatabasesResponseBodyDatabaseList& setDatabase(vector<Models::ListDatabasesResponseBodyDatabaseListDatabase> && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


  protected:
    std::shared_ptr<vector<Models::ListDatabasesResponseBodyDatabaseListDatabase>> database_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
