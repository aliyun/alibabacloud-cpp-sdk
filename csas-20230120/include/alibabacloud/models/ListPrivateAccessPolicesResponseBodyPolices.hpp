// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSPOLICESRESPONSEBODYPOLICES_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSPOLICESRESPONSEBODYPOLICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPrivateAccessPolicesResponseBodyPolices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessPolicesResponseBodyPolices& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomUserAttributes, customUserAttributes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceAttributeAction, deviceAttributeAction_);
      DARABONBA_PTR_TO_JSON(DeviceAttributeId, deviceAttributeId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyAction, policyAction_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
      DARABONBA_PTR_TO_JSON(TriggerTemplateId, triggerTemplateId_);
      DARABONBA_PTR_TO_JSON(TrustedProcessGroupIds, trustedProcessGroupIds_);
      DARABONBA_PTR_TO_JSON(TrustedProcessStatus, trustedProcessStatus_);
      DARABONBA_PTR_TO_JSON(TrustedSoftwareIds, trustedSoftwareIds_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(UserGroupMode, userGroupMode_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessPolicesResponseBodyPolices& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomUserAttributes, customUserAttributes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceAttributeAction, deviceAttributeAction_);
      DARABONBA_PTR_FROM_JSON(DeviceAttributeId, deviceAttributeId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyAction, policyAction_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
      DARABONBA_PTR_FROM_JSON(TriggerTemplateId, triggerTemplateId_);
      DARABONBA_PTR_FROM_JSON(TrustedProcessGroupIds, trustedProcessGroupIds_);
      DARABONBA_PTR_FROM_JSON(TrustedProcessStatus, trustedProcessStatus_);
      DARABONBA_PTR_FROM_JSON(TrustedSoftwareIds, trustedSoftwareIds_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserGroupMode, userGroupMode_);
    };
    ListPrivateAccessPolicesResponseBodyPolices() = default ;
    ListPrivateAccessPolicesResponseBodyPolices(const ListPrivateAccessPolicesResponseBodyPolices &) = default ;
    ListPrivateAccessPolicesResponseBodyPolices(ListPrivateAccessPolicesResponseBodyPolices &&) = default ;
    ListPrivateAccessPolicesResponseBodyPolices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessPolicesResponseBodyPolices() = default ;
    ListPrivateAccessPolicesResponseBodyPolices& operator=(const ListPrivateAccessPolicesResponseBodyPolices &) = default ;
    ListPrivateAccessPolicesResponseBodyPolices& operator=(ListPrivateAccessPolicesResponseBodyPolices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationIds_ == nullptr
        && return this->applicationType_ == nullptr && return this->createTime_ == nullptr && return this->customUserAttributes_ == nullptr && return this->description_ == nullptr && return this->deviceAttributeAction_ == nullptr
        && return this->deviceAttributeId_ == nullptr && return this->name_ == nullptr && return this->policyAction_ == nullptr && return this->policyId_ == nullptr && return this->priority_ == nullptr
        && return this->status_ == nullptr && return this->tagIds_ == nullptr && return this->triggerTemplateId_ == nullptr && return this->trustedProcessGroupIds_ == nullptr && return this->trustedProcessStatus_ == nullptr
        && return this->trustedSoftwareIds_ == nullptr && return this->userGroupIds_ == nullptr && return this->userGroupMode_ == nullptr; };
    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & applicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> applicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolices& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customUserAttributes Field Functions 
    bool hasCustomUserAttributes() const { return this->customUserAttributes_ != nullptr;};
    void deleteCustomUserAttributes() { this->customUserAttributes_ = nullptr;};
    inline const vector<Models::ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes> & customUserAttributes() const { DARABONBA_PTR_GET_CONST(customUserAttributes_, vector<Models::ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes>) };
    inline vector<Models::ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes> customUserAttributes() { DARABONBA_PTR_GET(customUserAttributes_, vector<Models::ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes>) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setCustomUserAttributes(const vector<Models::ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes> & customUserAttributes) { DARABONBA_PTR_SET_VALUE(customUserAttributes_, customUserAttributes) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setCustomUserAttributes(vector<Models::ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes> && customUserAttributes) { DARABONBA_PTR_SET_RVALUE(customUserAttributes_, customUserAttributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceAttributeAction Field Functions 
    bool hasDeviceAttributeAction() const { return this->deviceAttributeAction_ != nullptr;};
    void deleteDeviceAttributeAction() { this->deviceAttributeAction_ = nullptr;};
    inline string deviceAttributeAction() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeAction_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolices& setDeviceAttributeAction(string deviceAttributeAction) { DARABONBA_PTR_SET_VALUE(deviceAttributeAction_, deviceAttributeAction) };


    // deviceAttributeId Field Functions 
    bool hasDeviceAttributeId() const { return this->deviceAttributeId_ != nullptr;};
    void deleteDeviceAttributeId() { this->deviceAttributeId_ = nullptr;};
    inline string deviceAttributeId() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeId_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolices& setDeviceAttributeId(string deviceAttributeId) { DARABONBA_PTR_SET_VALUE(deviceAttributeId_, deviceAttributeId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyAction Field Functions 
    bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
    void deletePolicyAction() { this->policyAction_ = nullptr;};
    inline string policyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolices& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolices& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & tagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> tagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


    // triggerTemplateId Field Functions 
    bool hasTriggerTemplateId() const { return this->triggerTemplateId_ != nullptr;};
    void deleteTriggerTemplateId() { this->triggerTemplateId_ = nullptr;};
    inline string triggerTemplateId() const { DARABONBA_PTR_GET_DEFAULT(triggerTemplateId_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolices& setTriggerTemplateId(string triggerTemplateId) { DARABONBA_PTR_SET_VALUE(triggerTemplateId_, triggerTemplateId) };


    // trustedProcessGroupIds Field Functions 
    bool hasTrustedProcessGroupIds() const { return this->trustedProcessGroupIds_ != nullptr;};
    void deleteTrustedProcessGroupIds() { this->trustedProcessGroupIds_ = nullptr;};
    inline const vector<string> & trustedProcessGroupIds() const { DARABONBA_PTR_GET_CONST(trustedProcessGroupIds_, vector<string>) };
    inline vector<string> trustedProcessGroupIds() { DARABONBA_PTR_GET(trustedProcessGroupIds_, vector<string>) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setTrustedProcessGroupIds(const vector<string> & trustedProcessGroupIds) { DARABONBA_PTR_SET_VALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setTrustedProcessGroupIds(vector<string> && trustedProcessGroupIds) { DARABONBA_PTR_SET_RVALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };


    // trustedProcessStatus Field Functions 
    bool hasTrustedProcessStatus() const { return this->trustedProcessStatus_ != nullptr;};
    void deleteTrustedProcessStatus() { this->trustedProcessStatus_ = nullptr;};
    inline string trustedProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(trustedProcessStatus_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolices& setTrustedProcessStatus(string trustedProcessStatus) { DARABONBA_PTR_SET_VALUE(trustedProcessStatus_, trustedProcessStatus) };


    // trustedSoftwareIds Field Functions 
    bool hasTrustedSoftwareIds() const { return this->trustedSoftwareIds_ != nullptr;};
    void deleteTrustedSoftwareIds() { this->trustedSoftwareIds_ = nullptr;};
    inline const vector<string> & trustedSoftwareIds() const { DARABONBA_PTR_GET_CONST(trustedSoftwareIds_, vector<string>) };
    inline vector<string> trustedSoftwareIds() { DARABONBA_PTR_GET(trustedSoftwareIds_, vector<string>) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setTrustedSoftwareIds(const vector<string> & trustedSoftwareIds) { DARABONBA_PTR_SET_VALUE(trustedSoftwareIds_, trustedSoftwareIds) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setTrustedSoftwareIds(vector<string> && trustedSoftwareIds) { DARABONBA_PTR_SET_RVALUE(trustedSoftwareIds_, trustedSoftwareIds) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline ListPrivateAccessPolicesResponseBodyPolices& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userGroupMode Field Functions 
    bool hasUserGroupMode() const { return this->userGroupMode_ != nullptr;};
    void deleteUserGroupMode() { this->userGroupMode_ = nullptr;};
    inline string userGroupMode() const { DARABONBA_PTR_GET_DEFAULT(userGroupMode_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolices& setUserGroupMode(string userGroupMode) { DARABONBA_PTR_SET_VALUE(userGroupMode_, userGroupMode) };


  protected:
    // The IDs of the applications that are specified in the private access policy. If the value of ApplicationType is **Application**, this parameter is returned.
    std::shared_ptr<vector<string>> applicationIds_ = nullptr;
    // The application type of the private access policy. Valid values:
    // 
    // *   **Application**
    // *   **Tag**
    std::shared_ptr<string> applicationType_ = nullptr;
    // The creation time of the private access policy.
    std::shared_ptr<string> createTime_ = nullptr;
    // The attributes of the custom user group. The attributes of the custom user group are evaluated by using a logical OR. If an attribute is matched, the policy takes effect.
    std::shared_ptr<vector<Models::ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes>> customUserAttributes_ = nullptr;
    // The description of the private access policy.
    std::shared_ptr<string> description_ = nullptr;
    // The action that is performed when the security baseline is not met. Valid values:
    // 
    // *   **Block**
    // *   **Observe**
    std::shared_ptr<string> deviceAttributeAction_ = nullptr;
    // The ID of the security baseline.
    std::shared_ptr<string> deviceAttributeId_ = nullptr;
    // The name of the private access policy.
    std::shared_ptr<string> name_ = nullptr;
    // The action in the private access policy. Valid values:
    // 
    // *   **Block**
    // *   **Allow**
    std::shared_ptr<string> policyAction_ = nullptr;
    // The ID of the private access policy.
    std::shared_ptr<string> policyId_ = nullptr;
    // The priority of the private access policy. The value 1 indicates the highest priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The status of the private access policy. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    std::shared_ptr<string> status_ = nullptr;
    // The IDs of the tags that are specified in the private access policy. If the value of ApplicationType is **Tag**, this parameter is returned.
    std::shared_ptr<vector<string>> tagIds_ = nullptr;
    // The ID of the trigger template.
    std::shared_ptr<string> triggerTemplateId_ = nullptr;
    // List of trusted process group IDs.
    std::shared_ptr<vector<string>> trustedProcessGroupIds_ = nullptr;
    // Trusted process switch status. Values: 
    // - **Enabled**: On.
    // - **Disabled**: Off.
    std::shared_ptr<string> trustedProcessStatus_ = nullptr;
    // List of trusted software IDs.
    std::shared_ptr<vector<string>> trustedSoftwareIds_ = nullptr;
    // The IDs of user groups in the private access policy. If the value of UserGroupMode is **Normal**, this parameter is returned.
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    // The type of the user group in the private access policy. Valid values:
    // 
    // *   **Normal**: regular user group.
    // *   **Custom**: custom user group.
    std::shared_ptr<string> userGroupMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
