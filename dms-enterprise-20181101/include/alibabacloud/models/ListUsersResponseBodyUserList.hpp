// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUsersResponseBodyUserListUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListUsersResponseBodyUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyUserList& obj) { 
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListUsersResponseBodyUserList() = default ;
    ListUsersResponseBodyUserList(const ListUsersResponseBodyUserList &) = default ;
    ListUsersResponseBodyUserList(ListUsersResponseBodyUserList &&) = default ;
    ListUsersResponseBodyUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyUserList() = default ;
    ListUsersResponseBodyUserList& operator=(const ListUsersResponseBodyUserList &) = default ;
    ListUsersResponseBodyUserList& operator=(ListUsersResponseBodyUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->user_ == nullptr; };
    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const vector<Models::ListUsersResponseBodyUserListUser> & user() const { DARABONBA_PTR_GET_CONST(user_, vector<Models::ListUsersResponseBodyUserListUser>) };
    inline vector<Models::ListUsersResponseBodyUserListUser> user() { DARABONBA_PTR_GET(user_, vector<Models::ListUsersResponseBodyUserListUser>) };
    inline ListUsersResponseBodyUserList& setUser(const vector<Models::ListUsersResponseBodyUserListUser> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline ListUsersResponseBodyUserList& setUser(vector<Models::ListUsersResponseBodyUserListUser> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    std::shared_ptr<vector<Models::ListUsersResponseBodyUserListUser>> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
