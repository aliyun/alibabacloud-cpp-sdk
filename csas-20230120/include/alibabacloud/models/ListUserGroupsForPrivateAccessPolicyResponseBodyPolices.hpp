// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSFORPRIVATEACCESSPOLICYRESPONSEBODYPOLICES_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSFORPRIVATEACCESSPOLICYRESPONSEBODYPOLICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserGroupsForPrivateAccessPolicyResponseBodyPolices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsForPrivateAccessPolicyResponseBodyPolices& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsForPrivateAccessPolicyResponseBodyPolices& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolices() = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolices(const ListUserGroupsForPrivateAccessPolicyResponseBodyPolices &) = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolices(ListUserGroupsForPrivateAccessPolicyResponseBodyPolices &&) = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsForPrivateAccessPolicyResponseBodyPolices() = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolices& operator=(const ListUserGroupsForPrivateAccessPolicyResponseBodyPolices &) = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolices& operator=(ListUserGroupsForPrivateAccessPolicyResponseBodyPolices &&) = default ;
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
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolices& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups> & userGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups>) };
    inline vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups> userGroups() { DARABONBA_PTR_GET(userGroups_, vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups>) };
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolices& setUserGroups(const vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolices& setUserGroups(vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups>> userGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
