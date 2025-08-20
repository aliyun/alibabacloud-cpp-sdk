// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPRIVATEACCESSPOLICIESRESPONSEBODYPOLICES_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPRIVATEACCESSPOLICIESRESPONSEBODYPOLICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserPrivateAccessPoliciesResponseBodyPolicesCustomUserAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserPrivateAccessPoliciesResponseBodyPolices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPrivateAccessPoliciesResponseBodyPolices& obj) { 
      DARABONBA_PTR_TO_JSON(CustomUserAttributes, customUserAttributes_);
      DARABONBA_PTR_TO_JSON(DeviceAttributeName, deviceAttributeName_);
      DARABONBA_PTR_TO_JSON(MatchedUserGroup, matchedUserGroup_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyAction, policyAction_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(TrustedProcessGroupIds, trustedProcessGroupIds_);
      DARABONBA_PTR_TO_JSON(TrustedSoftwareIds, trustedSoftwareIds_);
      DARABONBA_PTR_TO_JSON(UserGroupMode, userGroupMode_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPrivateAccessPoliciesResponseBodyPolices& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomUserAttributes, customUserAttributes_);
      DARABONBA_PTR_FROM_JSON(DeviceAttributeName, deviceAttributeName_);
      DARABONBA_PTR_FROM_JSON(MatchedUserGroup, matchedUserGroup_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyAction, policyAction_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(TrustedProcessGroupIds, trustedProcessGroupIds_);
      DARABONBA_PTR_FROM_JSON(TrustedSoftwareIds, trustedSoftwareIds_);
      DARABONBA_PTR_FROM_JSON(UserGroupMode, userGroupMode_);
    };
    ListUserPrivateAccessPoliciesResponseBodyPolices() = default ;
    ListUserPrivateAccessPoliciesResponseBodyPolices(const ListUserPrivateAccessPoliciesResponseBodyPolices &) = default ;
    ListUserPrivateAccessPoliciesResponseBodyPolices(ListUserPrivateAccessPoliciesResponseBodyPolices &&) = default ;
    ListUserPrivateAccessPoliciesResponseBodyPolices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPrivateAccessPoliciesResponseBodyPolices() = default ;
    ListUserPrivateAccessPoliciesResponseBodyPolices& operator=(const ListUserPrivateAccessPoliciesResponseBodyPolices &) = default ;
    ListUserPrivateAccessPoliciesResponseBodyPolices& operator=(ListUserPrivateAccessPoliciesResponseBodyPolices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customUserAttributes_ != nullptr
        && this->deviceAttributeName_ != nullptr && this->matchedUserGroup_ != nullptr && this->name_ != nullptr && this->policyAction_ != nullptr && this->policyId_ != nullptr
        && this->priority_ != nullptr && this->trustedProcessGroupIds_ != nullptr && this->trustedSoftwareIds_ != nullptr && this->userGroupMode_ != nullptr; };
    // customUserAttributes Field Functions 
    bool hasCustomUserAttributes() const { return this->customUserAttributes_ != nullptr;};
    void deleteCustomUserAttributes() { this->customUserAttributes_ = nullptr;};
    inline const vector<Models::ListUserPrivateAccessPoliciesResponseBodyPolicesCustomUserAttributes> & customUserAttributes() const { DARABONBA_PTR_GET_CONST(customUserAttributes_, vector<Models::ListUserPrivateAccessPoliciesResponseBodyPolicesCustomUserAttributes>) };
    inline vector<Models::ListUserPrivateAccessPoliciesResponseBodyPolicesCustomUserAttributes> customUserAttributes() { DARABONBA_PTR_GET(customUserAttributes_, vector<Models::ListUserPrivateAccessPoliciesResponseBodyPolicesCustomUserAttributes>) };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setCustomUserAttributes(const vector<Models::ListUserPrivateAccessPoliciesResponseBodyPolicesCustomUserAttributes> & customUserAttributes) { DARABONBA_PTR_SET_VALUE(customUserAttributes_, customUserAttributes) };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setCustomUserAttributes(vector<Models::ListUserPrivateAccessPoliciesResponseBodyPolicesCustomUserAttributes> && customUserAttributes) { DARABONBA_PTR_SET_RVALUE(customUserAttributes_, customUserAttributes) };


    // deviceAttributeName Field Functions 
    bool hasDeviceAttributeName() const { return this->deviceAttributeName_ != nullptr;};
    void deleteDeviceAttributeName() { this->deviceAttributeName_ = nullptr;};
    inline string deviceAttributeName() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeName_, "") };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setDeviceAttributeName(string deviceAttributeName) { DARABONBA_PTR_SET_VALUE(deviceAttributeName_, deviceAttributeName) };


    // matchedUserGroup Field Functions 
    bool hasMatchedUserGroup() const { return this->matchedUserGroup_ != nullptr;};
    void deleteMatchedUserGroup() { this->matchedUserGroup_ = nullptr;};
    inline string matchedUserGroup() const { DARABONBA_PTR_GET_DEFAULT(matchedUserGroup_, "") };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setMatchedUserGroup(string matchedUserGroup) { DARABONBA_PTR_SET_VALUE(matchedUserGroup_, matchedUserGroup) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyAction Field Functions 
    bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
    void deletePolicyAction() { this->policyAction_ = nullptr;};
    inline string policyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // trustedProcessGroupIds Field Functions 
    bool hasTrustedProcessGroupIds() const { return this->trustedProcessGroupIds_ != nullptr;};
    void deleteTrustedProcessGroupIds() { this->trustedProcessGroupIds_ = nullptr;};
    inline const vector<string> & trustedProcessGroupIds() const { DARABONBA_PTR_GET_CONST(trustedProcessGroupIds_, vector<string>) };
    inline vector<string> trustedProcessGroupIds() { DARABONBA_PTR_GET(trustedProcessGroupIds_, vector<string>) };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setTrustedProcessGroupIds(const vector<string> & trustedProcessGroupIds) { DARABONBA_PTR_SET_VALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setTrustedProcessGroupIds(vector<string> && trustedProcessGroupIds) { DARABONBA_PTR_SET_RVALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };


    // trustedSoftwareIds Field Functions 
    bool hasTrustedSoftwareIds() const { return this->trustedSoftwareIds_ != nullptr;};
    void deleteTrustedSoftwareIds() { this->trustedSoftwareIds_ = nullptr;};
    inline const vector<string> & trustedSoftwareIds() const { DARABONBA_PTR_GET_CONST(trustedSoftwareIds_, vector<string>) };
    inline vector<string> trustedSoftwareIds() { DARABONBA_PTR_GET(trustedSoftwareIds_, vector<string>) };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setTrustedSoftwareIds(const vector<string> & trustedSoftwareIds) { DARABONBA_PTR_SET_VALUE(trustedSoftwareIds_, trustedSoftwareIds) };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setTrustedSoftwareIds(vector<string> && trustedSoftwareIds) { DARABONBA_PTR_SET_RVALUE(trustedSoftwareIds_, trustedSoftwareIds) };


    // userGroupMode Field Functions 
    bool hasUserGroupMode() const { return this->userGroupMode_ != nullptr;};
    void deleteUserGroupMode() { this->userGroupMode_ = nullptr;};
    inline string userGroupMode() const { DARABONBA_PTR_GET_DEFAULT(userGroupMode_, "") };
    inline ListUserPrivateAccessPoliciesResponseBodyPolices& setUserGroupMode(string userGroupMode) { DARABONBA_PTR_SET_VALUE(userGroupMode_, userGroupMode) };


  protected:
    // Set of custom user group attributes. Multiple custom user group attributes are in an OR relationship, effective as a union.
    std::shared_ptr<vector<Models::ListUserPrivateAccessPoliciesResponseBodyPolicesCustomUserAttributes>> customUserAttributes_ = nullptr;
    // Associated security baseline.
    std::shared_ptr<string> deviceAttributeName_ = nullptr;
    // Associated user group.
    std::shared_ptr<string> matchedUserGroup_ = nullptr;
    // Intranet access policy name.
    std::shared_ptr<string> name_ = nullptr;
    // Action of the intranet access policy. Values:
    // - **Block**: Block.
    // - **Allow**: Allow.
    std::shared_ptr<string> policyAction_ = nullptr;
    // Intranet access policy ID.
    std::shared_ptr<string> policyId_ = nullptr;
    // Priority of the intranet access policy. The number 1 indicates the highest priority.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // List of trusted process group IDs.
    std::shared_ptr<vector<string>> trustedProcessGroupIds_ = nullptr;
    // List of trusted software IDs.
    std::shared_ptr<vector<string>> trustedSoftwareIds_ = nullptr;
    // Type of the user group for the intranet access policy. Values:
    // - **Normal**: Normal user group.
    // - **Custom**: Custom user group.
    std::shared_ptr<string> userGroupMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
