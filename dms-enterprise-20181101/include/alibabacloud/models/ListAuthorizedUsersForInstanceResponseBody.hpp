// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthorizedUsersForInstanceResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorizedUsersForInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUsersForInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUsersForInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListAuthorizedUsersForInstanceResponseBody() = default ;
    ListAuthorizedUsersForInstanceResponseBody(const ListAuthorizedUsersForInstanceResponseBody &) = default ;
    ListAuthorizedUsersForInstanceResponseBody(ListAuthorizedUsersForInstanceResponseBody &&) = default ;
    ListAuthorizedUsersForInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUsersForInstanceResponseBody() = default ;
    ListAuthorizedUsersForInstanceResponseBody& operator=(const ListAuthorizedUsersForInstanceResponseBody &) = default ;
    ListAuthorizedUsersForInstanceResponseBody& operator=(ListAuthorizedUsersForInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->users_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedUsersForInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListAuthorizedUsersForInstanceResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<ListAuthorizedUsersForInstanceResponseBodyUsers>) };
    inline vector<ListAuthorizedUsersForInstanceResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<ListAuthorizedUsersForInstanceResponseBodyUsers>) };
    inline ListAuthorizedUsersForInstanceResponseBody& setUsers(const vector<ListAuthorizedUsersForInstanceResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListAuthorizedUsersForInstanceResponseBody& setUsers(vector<ListAuthorizedUsersForInstanceResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListAuthorizedUsersForInstanceResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
