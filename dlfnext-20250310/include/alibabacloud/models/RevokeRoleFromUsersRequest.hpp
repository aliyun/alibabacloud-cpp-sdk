// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEROLEFROMUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEROLEFROMUSERSREQUEST_HPP_
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
  class RevokeRoleFromUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeRoleFromUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(rolePrincipal, rolePrincipal_);
      DARABONBA_PTR_TO_JSON(userPrincipals, userPrincipals_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeRoleFromUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(rolePrincipal, rolePrincipal_);
      DARABONBA_PTR_FROM_JSON(userPrincipals, userPrincipals_);
    };
    RevokeRoleFromUsersRequest() = default ;
    RevokeRoleFromUsersRequest(const RevokeRoleFromUsersRequest &) = default ;
    RevokeRoleFromUsersRequest(RevokeRoleFromUsersRequest &&) = default ;
    RevokeRoleFromUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeRoleFromUsersRequest() = default ;
    RevokeRoleFromUsersRequest& operator=(const RevokeRoleFromUsersRequest &) = default ;
    RevokeRoleFromUsersRequest& operator=(RevokeRoleFromUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rolePrincipal_ == nullptr
        && this->userPrincipals_ == nullptr; };
    // rolePrincipal Field Functions 
    bool hasRolePrincipal() const { return this->rolePrincipal_ != nullptr;};
    void deleteRolePrincipal() { this->rolePrincipal_ = nullptr;};
    inline string getRolePrincipal() const { DARABONBA_PTR_GET_DEFAULT(rolePrincipal_, "") };
    inline RevokeRoleFromUsersRequest& setRolePrincipal(string rolePrincipal) { DARABONBA_PTR_SET_VALUE(rolePrincipal_, rolePrincipal) };


    // userPrincipals Field Functions 
    bool hasUserPrincipals() const { return this->userPrincipals_ != nullptr;};
    void deleteUserPrincipals() { this->userPrincipals_ = nullptr;};
    inline const vector<string> & getUserPrincipals() const { DARABONBA_PTR_GET_CONST(userPrincipals_, vector<string>) };
    inline vector<string> getUserPrincipals() { DARABONBA_PTR_GET(userPrincipals_, vector<string>) };
    inline RevokeRoleFromUsersRequest& setUserPrincipals(const vector<string> & userPrincipals) { DARABONBA_PTR_SET_VALUE(userPrincipals_, userPrincipals) };
    inline RevokeRoleFromUsersRequest& setUserPrincipals(vector<string> && userPrincipals) { DARABONBA_PTR_SET_RVALUE(userPrincipals_, userPrincipals) };


  protected:
    shared_ptr<string> rolePrincipal_ {};
    shared_ptr<vector<string>> userPrincipals_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
