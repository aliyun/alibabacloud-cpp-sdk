// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDatabasesResponseBodyResultDatabases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListDatabasesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(databases, databases_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(databases, databases_);
    };
    ListDatabasesResponseBodyResult() = default ;
    ListDatabasesResponseBodyResult(const ListDatabasesResponseBodyResult &) = default ;
    ListDatabasesResponseBodyResult(ListDatabasesResponseBodyResult &&) = default ;
    ListDatabasesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesResponseBodyResult() = default ;
    ListDatabasesResponseBodyResult& operator=(const ListDatabasesResponseBodyResult &) = default ;
    ListDatabasesResponseBodyResult& operator=(ListDatabasesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databases_ != nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<Models::ListDatabasesResponseBodyResultDatabases> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<Models::ListDatabasesResponseBodyResultDatabases>) };
    inline vector<Models::ListDatabasesResponseBodyResultDatabases> databases() { DARABONBA_PTR_GET(databases_, vector<Models::ListDatabasesResponseBodyResultDatabases>) };
    inline ListDatabasesResponseBodyResult& setDatabases(const vector<Models::ListDatabasesResponseBodyResultDatabases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline ListDatabasesResponseBodyResult& setDatabases(vector<Models::ListDatabasesResponseBodyResultDatabases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


  protected:
    std::shared_ptr<vector<Models::ListDatabasesResponseBodyResultDatabases>> databases_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
