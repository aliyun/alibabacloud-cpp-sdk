// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROLEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROLEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Principal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class UpdateRoleUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRoleUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRoleUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    UpdateRoleUsersRequest() = default ;
    UpdateRoleUsersRequest(const UpdateRoleUsersRequest &) = default ;
    UpdateRoleUsersRequest(UpdateRoleUsersRequest &&) = default ;
    UpdateRoleUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRoleUsersRequest() = default ;
    UpdateRoleUsersRequest& operator=(const UpdateRoleUsersRequest &) = default ;
    UpdateRoleUsersRequest& operator=(UpdateRoleUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleName_ == nullptr
        && return this->users_ == nullptr; };
    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline UpdateRoleUsersRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<Principal> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<Principal>) };
    inline vector<Principal> users() { DARABONBA_PTR_GET(users_, vector<Principal>) };
    inline UpdateRoleUsersRequest& setUsers(const vector<Principal> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline UpdateRoleUsersRequest& setUsers(vector<Principal> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The name of the role.
    std::shared_ptr<string> roleName_ = nullptr;
    // The list of users or roles. Format:
    // 
    // RAM user: acs:ram::[accountId]:user/[userName]
    // 
    // RAM role: acs:ram::[accountId]:role/[roleName]
    std::shared_ptr<vector<Principal>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
