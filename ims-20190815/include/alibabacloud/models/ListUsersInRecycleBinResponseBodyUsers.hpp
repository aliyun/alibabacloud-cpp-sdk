// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSINRECYCLEBINRESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSINRECYCLEBINRESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUsersInRecycleBinResponseBodyUsersUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUsersInRecycleBinResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersInRecycleBinResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersInRecycleBinResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListUsersInRecycleBinResponseBodyUsers() = default ;
    ListUsersInRecycleBinResponseBodyUsers(const ListUsersInRecycleBinResponseBodyUsers &) = default ;
    ListUsersInRecycleBinResponseBodyUsers(ListUsersInRecycleBinResponseBodyUsers &&) = default ;
    ListUsersInRecycleBinResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersInRecycleBinResponseBodyUsers() = default ;
    ListUsersInRecycleBinResponseBodyUsers& operator=(const ListUsersInRecycleBinResponseBodyUsers &) = default ;
    ListUsersInRecycleBinResponseBodyUsers& operator=(ListUsersInRecycleBinResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->user_ != nullptr; };
    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const vector<Models::ListUsersInRecycleBinResponseBodyUsersUser> & user() const { DARABONBA_PTR_GET_CONST(user_, vector<Models::ListUsersInRecycleBinResponseBodyUsersUser>) };
    inline vector<Models::ListUsersInRecycleBinResponseBodyUsersUser> user() { DARABONBA_PTR_GET(user_, vector<Models::ListUsersInRecycleBinResponseBodyUsersUser>) };
    inline ListUsersInRecycleBinResponseBodyUsers& setUser(const vector<Models::ListUsersInRecycleBinResponseBodyUsersUser> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline ListUsersInRecycleBinResponseBodyUsers& setUser(vector<Models::ListUsersInRecycleBinResponseBodyUsersUser> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    std::shared_ptr<vector<Models::ListUsersInRecycleBinResponseBodyUsersUser>> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
