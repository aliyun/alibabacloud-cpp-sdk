// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEROLESFROMUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEROLESFROMUSERREQUEST_HPP_
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
  class RevokeRolesFromUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeRolesFromUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleNames, roleNames_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeRolesFromUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleNames, roleNames_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    RevokeRolesFromUserRequest() = default ;
    RevokeRolesFromUserRequest(const RevokeRolesFromUserRequest &) = default ;
    RevokeRolesFromUserRequest(RevokeRolesFromUserRequest &&) = default ;
    RevokeRolesFromUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeRolesFromUserRequest() = default ;
    RevokeRolesFromUserRequest& operator=(const RevokeRolesFromUserRequest &) = default ;
    RevokeRolesFromUserRequest& operator=(RevokeRolesFromUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleNames_ == nullptr
        && return this->user_ == nullptr; };
    // roleNames Field Functions 
    bool hasRoleNames() const { return this->roleNames_ != nullptr;};
    void deleteRoleNames() { this->roleNames_ = nullptr;};
    inline const vector<string> & roleNames() const { DARABONBA_PTR_GET_CONST(roleNames_, vector<string>) };
    inline vector<string> roleNames() { DARABONBA_PTR_GET(roleNames_, vector<string>) };
    inline RevokeRolesFromUserRequest& setRoleNames(const vector<string> & roleNames) { DARABONBA_PTR_SET_VALUE(roleNames_, roleNames) };
    inline RevokeRolesFromUserRequest& setRoleNames(vector<string> && roleNames) { DARABONBA_PTR_SET_RVALUE(roleNames_, roleNames) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const Principal & user() const { DARABONBA_PTR_GET_CONST(user_, Principal) };
    inline Principal user() { DARABONBA_PTR_GET(user_, Principal) };
    inline RevokeRolesFromUserRequest& setUser(const Principal & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline RevokeRolesFromUserRequest& setUser(Principal && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The RAM roles to be revoked from the RAM user.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> roleNames_ = nullptr;
    // The RAM user from whom you want to revoke roles. Format:
    // 
    // *   RAM roles: acs:ram::[accountId]:role/[roleName].
    // *   RAM user: acs:ram::[accountId]:user/[userName].
    // 
    // This parameter is required.
    std::shared_ptr<Principal> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
