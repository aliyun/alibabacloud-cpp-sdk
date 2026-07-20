// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListDatabasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(databases, databases_);
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(databases, databases_);
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
    };
    ListDatabasesResponseBody() = default ;
    ListDatabasesResponseBody(const ListDatabasesResponseBody &) = default ;
    ListDatabasesResponseBody(ListDatabasesResponseBody &&) = default ;
    ListDatabasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesResponseBody() = default ;
    ListDatabasesResponseBody& operator=(const ListDatabasesResponseBody &) = default ;
    ListDatabasesResponseBody& operator=(ListDatabasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databases_ == nullptr
        && this->nextPageToken_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<string> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<string>) };
    inline vector<string> getDatabases() { DARABONBA_PTR_GET(databases_, vector<string>) };
    inline ListDatabasesResponseBody& setDatabases(const vector<string> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline ListDatabasesResponseBody& setDatabases(vector<string> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListDatabasesResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


  protected:
    shared_ptr<vector<string>> databases_ {};
    shared_ptr<string> nextPageToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
