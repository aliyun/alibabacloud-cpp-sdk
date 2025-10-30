// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSFORREGISTRATIONPOLICYRESPONSEBODYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSFORREGISTRATIONPOLICYRESPONSEBODYPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserGroupsForRegistrationPolicyResponseBodyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsForRegistrationPolicyResponseBodyPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsForRegistrationPolicyResponseBodyPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    ListUserGroupsForRegistrationPolicyResponseBodyPolicies() = default ;
    ListUserGroupsForRegistrationPolicyResponseBodyPolicies(const ListUserGroupsForRegistrationPolicyResponseBodyPolicies &) = default ;
    ListUserGroupsForRegistrationPolicyResponseBodyPolicies(ListUserGroupsForRegistrationPolicyResponseBodyPolicies &&) = default ;
    ListUserGroupsForRegistrationPolicyResponseBodyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsForRegistrationPolicyResponseBodyPolicies() = default ;
    ListUserGroupsForRegistrationPolicyResponseBodyPolicies& operator=(const ListUserGroupsForRegistrationPolicyResponseBodyPolicies &) = default ;
    ListUserGroupsForRegistrationPolicyResponseBodyPolicies& operator=(ListUserGroupsForRegistrationPolicyResponseBodyPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr
        && return this->userGroups_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListUserGroupsForRegistrationPolicyResponseBodyPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<Models::ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups> & userGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<Models::ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups>) };
    inline vector<Models::ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups> userGroups() { DARABONBA_PTR_GET(userGroups_, vector<Models::ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups>) };
    inline ListUserGroupsForRegistrationPolicyResponseBodyPolicies& setUserGroups(const vector<Models::ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline ListUserGroupsForRegistrationPolicyResponseBodyPolicies& setUserGroups(vector<Models::ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<vector<Models::ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups>> userGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
