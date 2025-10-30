// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYDATABASES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYDATABASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListDatabasesResponseBodyDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesResponseBodyDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesResponseBodyDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
    };
    ListDatabasesResponseBodyDatabases() = default ;
    ListDatabasesResponseBodyDatabases(const ListDatabasesResponseBodyDatabases &) = default ;
    ListDatabasesResponseBodyDatabases(ListDatabasesResponseBodyDatabases &&) = default ;
    ListDatabasesResponseBodyDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesResponseBodyDatabases() = default ;
    ListDatabasesResponseBodyDatabases& operator=(const ListDatabasesResponseBodyDatabases &) = default ;
    ListDatabasesResponseBodyDatabases& operator=(ListDatabasesResponseBodyDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databases_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<string> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<string>) };
    inline vector<string> databases() { DARABONBA_PTR_GET(databases_, vector<string>) };
    inline ListDatabasesResponseBodyDatabases& setDatabases(const vector<string> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline ListDatabasesResponseBodyDatabases& setDatabases(vector<string> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


  protected:
    std::shared_ptr<vector<string>> databases_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
