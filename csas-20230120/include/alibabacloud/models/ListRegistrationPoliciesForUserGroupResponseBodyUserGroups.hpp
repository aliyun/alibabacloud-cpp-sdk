// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESFORUSERGROUPRESPONSEBODYUSERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESFORUSERGROUPRESPONSEBODYUSERGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListRegistrationPoliciesForUserGroupResponseBodyUserGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistrationPoliciesForUserGroupResponseBodyUserGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistrationPoliciesForUserGroupResponseBodyUserGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListRegistrationPoliciesForUserGroupResponseBodyUserGroups() = default ;
    ListRegistrationPoliciesForUserGroupResponseBodyUserGroups(const ListRegistrationPoliciesForUserGroupResponseBodyUserGroups &) = default ;
    ListRegistrationPoliciesForUserGroupResponseBodyUserGroups(ListRegistrationPoliciesForUserGroupResponseBodyUserGroups &&) = default ;
    ListRegistrationPoliciesForUserGroupResponseBodyUserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistrationPoliciesForUserGroupResponseBodyUserGroups() = default ;
    ListRegistrationPoliciesForUserGroupResponseBodyUserGroups& operator=(const ListRegistrationPoliciesForUserGroupResponseBodyUserGroups &) = default ;
    ListRegistrationPoliciesForUserGroupResponseBodyUserGroups& operator=(ListRegistrationPoliciesForUserGroupResponseBodyUserGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policies_ != nullptr
        && this->userGroupId_ != nullptr; };
    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<Models::ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<Models::ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies>) };
    inline vector<Models::ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<Models::ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies>) };
    inline ListRegistrationPoliciesForUserGroupResponseBodyUserGroups& setPolicies(const vector<Models::ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListRegistrationPoliciesForUserGroupResponseBodyUserGroups& setPolicies(vector<Models::ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListRegistrationPoliciesForUserGroupResponseBodyUserGroups& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    std::shared_ptr<vector<Models::ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies>> policies_ = nullptr;
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
