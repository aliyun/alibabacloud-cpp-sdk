// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATABASESFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATABASESFORUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthorizedDatabasesForUserResponseBodyDatabases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorizedDatabasesForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedDatabasesForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedDatabasesForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAuthorizedDatabasesForUserResponseBody() = default ;
    ListAuthorizedDatabasesForUserResponseBody(const ListAuthorizedDatabasesForUserResponseBody &) = default ;
    ListAuthorizedDatabasesForUserResponseBody(ListAuthorizedDatabasesForUserResponseBody &&) = default ;
    ListAuthorizedDatabasesForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedDatabasesForUserResponseBody() = default ;
    ListAuthorizedDatabasesForUserResponseBody& operator=(const ListAuthorizedDatabasesForUserResponseBody &) = default ;
    ListAuthorizedDatabasesForUserResponseBody& operator=(ListAuthorizedDatabasesForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databases_ == nullptr
        && return this->requestId_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<ListAuthorizedDatabasesForUserResponseBodyDatabases> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<ListAuthorizedDatabasesForUserResponseBodyDatabases>) };
    inline vector<ListAuthorizedDatabasesForUserResponseBodyDatabases> databases() { DARABONBA_PTR_GET(databases_, vector<ListAuthorizedDatabasesForUserResponseBodyDatabases>) };
    inline ListAuthorizedDatabasesForUserResponseBody& setDatabases(const vector<ListAuthorizedDatabasesForUserResponseBodyDatabases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline ListAuthorizedDatabasesForUserResponseBody& setDatabases(vector<ListAuthorizedDatabasesForUserResponseBodyDatabases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedDatabasesForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The names of the databases on which the user has permissions.
    std::shared_ptr<vector<ListAuthorizedDatabasesForUserResponseBodyDatabases>> databases_ = nullptr;
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
