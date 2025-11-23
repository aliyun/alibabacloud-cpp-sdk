// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthorizedUsersForDatabaseResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorizedUsersForDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUsersForDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUsersForDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListAuthorizedUsersForDatabaseResponseBody() = default ;
    ListAuthorizedUsersForDatabaseResponseBody(const ListAuthorizedUsersForDatabaseResponseBody &) = default ;
    ListAuthorizedUsersForDatabaseResponseBody(ListAuthorizedUsersForDatabaseResponseBody &&) = default ;
    ListAuthorizedUsersForDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUsersForDatabaseResponseBody() = default ;
    ListAuthorizedUsersForDatabaseResponseBody& operator=(const ListAuthorizedUsersForDatabaseResponseBody &) = default ;
    ListAuthorizedUsersForDatabaseResponseBody& operator=(ListAuthorizedUsersForDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedUsersForDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListAuthorizedUsersForDatabaseResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<ListAuthorizedUsersForDatabaseResponseBodyUsers>) };
    inline vector<ListAuthorizedUsersForDatabaseResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<ListAuthorizedUsersForDatabaseResponseBodyUsers>) };
    inline ListAuthorizedUsersForDatabaseResponseBody& setUsers(const vector<ListAuthorizedUsersForDatabaseResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListAuthorizedUsersForDatabaseResponseBody& setUsers(vector<ListAuthorizedUsersForDatabaseResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The request ID. You can use the ID to locate logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of users that have permissions on the specified instance.
    std::shared_ptr<vector<ListAuthorizedUsersForDatabaseResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
