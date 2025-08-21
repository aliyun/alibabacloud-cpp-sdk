// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSFORGROUPRESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSFORGROUPRESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUsersForGroupResponseBodyUsersUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUsersForGroupResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersForGroupResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersForGroupResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListUsersForGroupResponseBodyUsers() = default ;
    ListUsersForGroupResponseBodyUsers(const ListUsersForGroupResponseBodyUsers &) = default ;
    ListUsersForGroupResponseBodyUsers(ListUsersForGroupResponseBodyUsers &&) = default ;
    ListUsersForGroupResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersForGroupResponseBodyUsers() = default ;
    ListUsersForGroupResponseBodyUsers& operator=(const ListUsersForGroupResponseBodyUsers &) = default ;
    ListUsersForGroupResponseBodyUsers& operator=(ListUsersForGroupResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->user_ != nullptr; };
    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const vector<Models::ListUsersForGroupResponseBodyUsersUser> & user() const { DARABONBA_PTR_GET_CONST(user_, vector<Models::ListUsersForGroupResponseBodyUsersUser>) };
    inline vector<Models::ListUsersForGroupResponseBodyUsersUser> user() { DARABONBA_PTR_GET(user_, vector<Models::ListUsersForGroupResponseBodyUsersUser>) };
    inline ListUsersForGroupResponseBodyUsers& setUser(const vector<Models::ListUsersForGroupResponseBodyUsersUser> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline ListUsersForGroupResponseBodyUsers& setUser(vector<Models::ListUsersForGroupResponseBodyUsersUser> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    std::shared_ptr<vector<Models::ListUsersForGroupResponseBodyUsersUser>> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
