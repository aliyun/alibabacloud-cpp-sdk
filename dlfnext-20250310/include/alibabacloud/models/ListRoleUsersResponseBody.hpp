// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROLEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/User.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListRoleUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoleUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoleUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(users, users_);
    };
    ListRoleUsersResponseBody() = default ;
    ListRoleUsersResponseBody(const ListRoleUsersResponseBody &) = default ;
    ListRoleUsersResponseBody(ListRoleUsersResponseBody &&) = default ;
    ListRoleUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoleUsersResponseBody() = default ;
    ListRoleUsersResponseBody& operator=(const ListRoleUsersResponseBody &) = default ;
    ListRoleUsersResponseBody& operator=(ListRoleUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextPageToken_ != nullptr
        && this->users_ != nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListRoleUsersResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<User> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<User>) };
    inline vector<User> users() { DARABONBA_PTR_GET(users_, vector<User>) };
    inline ListRoleUsersResponseBody& setUsers(const vector<User> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListRoleUsersResponseBody& setUsers(vector<User> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<vector<User>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
