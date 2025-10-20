// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROLEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROLEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class UpdateRoleUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRoleUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(rolePrincipal, rolePrincipal_);
      DARABONBA_PTR_TO_JSON(userPrincipals, userPrincipals_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRoleUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(rolePrincipal, rolePrincipal_);
      DARABONBA_PTR_FROM_JSON(userPrincipals, userPrincipals_);
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
    virtual bool empty() const override { return this->rolePrincipal_ == nullptr
        && return this->userPrincipals_ == nullptr; };
    // rolePrincipal Field Functions 
    bool hasRolePrincipal() const { return this->rolePrincipal_ != nullptr;};
    void deleteRolePrincipal() { this->rolePrincipal_ = nullptr;};
    inline string rolePrincipal() const { DARABONBA_PTR_GET_DEFAULT(rolePrincipal_, "") };
    inline UpdateRoleUsersRequest& setRolePrincipal(string rolePrincipal) { DARABONBA_PTR_SET_VALUE(rolePrincipal_, rolePrincipal) };


    // userPrincipals Field Functions 
    bool hasUserPrincipals() const { return this->userPrincipals_ != nullptr;};
    void deleteUserPrincipals() { this->userPrincipals_ = nullptr;};
    inline const vector<string> & userPrincipals() const { DARABONBA_PTR_GET_CONST(userPrincipals_, vector<string>) };
    inline vector<string> userPrincipals() { DARABONBA_PTR_GET(userPrincipals_, vector<string>) };
    inline UpdateRoleUsersRequest& setUserPrincipals(const vector<string> & userPrincipals) { DARABONBA_PTR_SET_VALUE(userPrincipals_, userPrincipals) };
    inline UpdateRoleUsersRequest& setUserPrincipals(vector<string> && userPrincipals) { DARABONBA_PTR_SET_RVALUE(userPrincipals_, userPrincipals) };


  protected:
    std::shared_ptr<string> rolePrincipal_ = nullptr;
    std::shared_ptr<vector<string>> userPrincipals_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
