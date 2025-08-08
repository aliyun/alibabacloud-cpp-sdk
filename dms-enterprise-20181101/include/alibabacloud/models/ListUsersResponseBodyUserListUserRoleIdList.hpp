// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERLISTUSERROLEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERLISTUSERROLEIDLIST_HPP_
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
  class ListUsersResponseBodyUserListUserRoleIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyUserListUserRoleIdList& obj) { 
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyUserListUserRoleIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleIds, roleIds_);
    };
    ListUsersResponseBodyUserListUserRoleIdList() = default ;
    ListUsersResponseBodyUserListUserRoleIdList(const ListUsersResponseBodyUserListUserRoleIdList &) = default ;
    ListUsersResponseBodyUserListUserRoleIdList(ListUsersResponseBodyUserListUserRoleIdList &&) = default ;
    ListUsersResponseBodyUserListUserRoleIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyUserListUserRoleIdList() = default ;
    ListUsersResponseBodyUserListUserRoleIdList& operator=(const ListUsersResponseBodyUserListUserRoleIdList &) = default ;
    ListUsersResponseBodyUserListUserRoleIdList& operator=(ListUsersResponseBodyUserListUserRoleIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roleIds_ != nullptr; };
    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline const vector<int32_t> & roleIds() const { DARABONBA_PTR_GET_CONST(roleIds_, vector<int32_t>) };
    inline vector<int32_t> roleIds() { DARABONBA_PTR_GET(roleIds_, vector<int32_t>) };
    inline ListUsersResponseBodyUserListUserRoleIdList& setRoleIds(const vector<int32_t> & roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };
    inline ListUsersResponseBodyUserListUserRoleIdList& setRoleIds(vector<int32_t> && roleIds) { DARABONBA_PTR_SET_RVALUE(roleIds_, roleIds) };


  protected:
    std::shared_ptr<vector<int32_t>> roleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
