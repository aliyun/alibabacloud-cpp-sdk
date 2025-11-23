// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERLISTUSERROLENAMELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERLISTUSERROLENAMELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListUsersResponseBodyUserListUserRoleNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyUserListUserRoleNameList& obj) { 
      DARABONBA_PTR_TO_JSON(RoleNames, roleNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyUserListUserRoleNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleNames, roleNames_);
    };
    ListUsersResponseBodyUserListUserRoleNameList() = default ;
    ListUsersResponseBodyUserListUserRoleNameList(const ListUsersResponseBodyUserListUserRoleNameList &) = default ;
    ListUsersResponseBodyUserListUserRoleNameList(ListUsersResponseBodyUserListUserRoleNameList &&) = default ;
    ListUsersResponseBodyUserListUserRoleNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyUserListUserRoleNameList() = default ;
    ListUsersResponseBodyUserListUserRoleNameList& operator=(const ListUsersResponseBodyUserListUserRoleNameList &) = default ;
    ListUsersResponseBodyUserListUserRoleNameList& operator=(ListUsersResponseBodyUserListUserRoleNameList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleNames_ == nullptr; };
    // roleNames Field Functions 
    bool hasRoleNames() const { return this->roleNames_ != nullptr;};
    void deleteRoleNames() { this->roleNames_ = nullptr;};
    inline const vector<string> & roleNames() const { DARABONBA_PTR_GET_CONST(roleNames_, vector<string>) };
    inline vector<string> roleNames() { DARABONBA_PTR_GET(roleNames_, vector<string>) };
    inline ListUsersResponseBodyUserListUserRoleNameList& setRoleNames(const vector<string> & roleNames) { DARABONBA_PTR_SET_VALUE(roleNames_, roleNames) };
    inline ListUsersResponseBodyUserListUserRoleNameList& setRoleNames(vector<string> && roleNames) { DARABONBA_PTR_SET_RVALUE(roleNames_, roleNames) };


  protected:
    std::shared_ptr<vector<string>> roleNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
