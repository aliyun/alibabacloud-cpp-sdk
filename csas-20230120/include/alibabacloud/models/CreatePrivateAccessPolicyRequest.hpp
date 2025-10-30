// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRIVATEACCESSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRIVATEACCESSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePrivateAccessPolicyRequestCustomUserAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreatePrivateAccessPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(CustomUserAttributes, customUserAttributes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceAttributeAction, deviceAttributeAction_);
      DARABONBA_PTR_TO_JSON(DeviceAttributeId, deviceAttributeId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyAction, policyAction_);
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
    friend void from_json(const Darabonba::Json& j, CreatePrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(CustomUserAttributes, customUserAttributes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceAttributeAction, deviceAttributeAction_);
      DARABONBA_PTR_FROM_JSON(DeviceAttributeId, deviceAttributeId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyAction, policyAction_);
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
    CreatePrivateAccessPolicyRequest() = default ;
    CreatePrivateAccessPolicyRequest(const CreatePrivateAccessPolicyRequest &) = default ;
    CreatePrivateAccessPolicyRequest(CreatePrivateAccessPolicyRequest &&) = default ;
    CreatePrivateAccessPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrivateAccessPolicyRequest() = default ;
    CreatePrivateAccessPolicyRequest& operator=(const CreatePrivateAccessPolicyRequest &) = default ;
    CreatePrivateAccessPolicyRequest& operator=(CreatePrivateAccessPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationIds_ == nullptr
        && return this->applicationType_ == nullptr && return this->customUserAttributes_ == nullptr && return this->description_ == nullptr && return this->deviceAttributeAction_ == nullptr && return this->deviceAttributeId_ == nullptr
        && return this->name_ == nullptr && return this->policyAction_ == nullptr && return this->priority_ == nullptr && return this->status_ == nullptr && return this->tagIds_ == nullptr
        && return this->triggerTemplateId_ == nullptr && return this->trustedProcessGroupIds_ == nullptr && return this->trustedProcessStatus_ == nullptr && return this->trustedSoftwareIds_ == nullptr && return this->userGroupIds_ == nullptr
        && return this->userGroupMode_ == nullptr; };
    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & applicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> applicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline CreatePrivateAccessPolicyRequest& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline CreatePrivateAccessPolicyRequest& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline CreatePrivateAccessPolicyRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // customUserAttributes Field Functions 
    bool hasCustomUserAttributes() const { return this->customUserAttributes_ != nullptr;};
    void deleteCustomUserAttributes() { this->customUserAttributes_ = nullptr;};
    inline const vector<CreatePrivateAccessPolicyRequestCustomUserAttributes> & customUserAttributes() const { DARABONBA_PTR_GET_CONST(customUserAttributes_, vector<CreatePrivateAccessPolicyRequestCustomUserAttributes>) };
    inline vector<CreatePrivateAccessPolicyRequestCustomUserAttributes> customUserAttributes() { DARABONBA_PTR_GET(customUserAttributes_, vector<CreatePrivateAccessPolicyRequestCustomUserAttributes>) };
    inline CreatePrivateAccessPolicyRequest& setCustomUserAttributes(const vector<CreatePrivateAccessPolicyRequestCustomUserAttributes> & customUserAttributes) { DARABONBA_PTR_SET_VALUE(customUserAttributes_, customUserAttributes) };
    inline CreatePrivateAccessPolicyRequest& setCustomUserAttributes(vector<CreatePrivateAccessPolicyRequestCustomUserAttributes> && customUserAttributes) { DARABONBA_PTR_SET_RVALUE(customUserAttributes_, customUserAttributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePrivateAccessPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceAttributeAction Field Functions 
    bool hasDeviceAttributeAction() const { return this->deviceAttributeAction_ != nullptr;};
    void deleteDeviceAttributeAction() { this->deviceAttributeAction_ = nullptr;};
    inline string deviceAttributeAction() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeAction_, "") };
    inline CreatePrivateAccessPolicyRequest& setDeviceAttributeAction(string deviceAttributeAction) { DARABONBA_PTR_SET_VALUE(deviceAttributeAction_, deviceAttributeAction) };


    // deviceAttributeId Field Functions 
    bool hasDeviceAttributeId() const { return this->deviceAttributeId_ != nullptr;};
    void deleteDeviceAttributeId() { this->deviceAttributeId_ = nullptr;};
    inline string deviceAttributeId() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeId_, "") };
    inline CreatePrivateAccessPolicyRequest& setDeviceAttributeId(string deviceAttributeId) { DARABONBA_PTR_SET_VALUE(deviceAttributeId_, deviceAttributeId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePrivateAccessPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyAction Field Functions 
    bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
    void deletePolicyAction() { this->policyAction_ = nullptr;};
    inline string policyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
    inline CreatePrivateAccessPolicyRequest& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreatePrivateAccessPolicyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreatePrivateAccessPolicyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & tagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> tagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline CreatePrivateAccessPolicyRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline CreatePrivateAccessPolicyRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


    // triggerTemplateId Field Functions 
    bool hasTriggerTemplateId() const { return this->triggerTemplateId_ != nullptr;};
    void deleteTriggerTemplateId() { this->triggerTemplateId_ = nullptr;};
    inline string triggerTemplateId() const { DARABONBA_PTR_GET_DEFAULT(triggerTemplateId_, "") };
    inline CreatePrivateAccessPolicyRequest& setTriggerTemplateId(string triggerTemplateId) { DARABONBA_PTR_SET_VALUE(triggerTemplateId_, triggerTemplateId) };


    // trustedProcessGroupIds Field Functions 
    bool hasTrustedProcessGroupIds() const { return this->trustedProcessGroupIds_ != nullptr;};
    void deleteTrustedProcessGroupIds() { this->trustedProcessGroupIds_ = nullptr;};
    inline const vector<string> & trustedProcessGroupIds() const { DARABONBA_PTR_GET_CONST(trustedProcessGroupIds_, vector<string>) };
    inline vector<string> trustedProcessGroupIds() { DARABONBA_PTR_GET(trustedProcessGroupIds_, vector<string>) };
    inline CreatePrivateAccessPolicyRequest& setTrustedProcessGroupIds(const vector<string> & trustedProcessGroupIds) { DARABONBA_PTR_SET_VALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };
    inline CreatePrivateAccessPolicyRequest& setTrustedProcessGroupIds(vector<string> && trustedProcessGroupIds) { DARABONBA_PTR_SET_RVALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };


    // trustedProcessStatus Field Functions 
    bool hasTrustedProcessStatus() const { return this->trustedProcessStatus_ != nullptr;};
    void deleteTrustedProcessStatus() { this->trustedProcessStatus_ = nullptr;};
    inline string trustedProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(trustedProcessStatus_, "") };
    inline CreatePrivateAccessPolicyRequest& setTrustedProcessStatus(string trustedProcessStatus) { DARABONBA_PTR_SET_VALUE(trustedProcessStatus_, trustedProcessStatus) };


    // trustedSoftwareIds Field Functions 
    bool hasTrustedSoftwareIds() const { return this->trustedSoftwareIds_ != nullptr;};
    void deleteTrustedSoftwareIds() { this->trustedSoftwareIds_ = nullptr;};
    inline const vector<string> & trustedSoftwareIds() const { DARABONBA_PTR_GET_CONST(trustedSoftwareIds_, vector<string>) };
    inline vector<string> trustedSoftwareIds() { DARABONBA_PTR_GET(trustedSoftwareIds_, vector<string>) };
    inline CreatePrivateAccessPolicyRequest& setTrustedSoftwareIds(const vector<string> & trustedSoftwareIds) { DARABONBA_PTR_SET_VALUE(trustedSoftwareIds_, trustedSoftwareIds) };
    inline CreatePrivateAccessPolicyRequest& setTrustedSoftwareIds(vector<string> && trustedSoftwareIds) { DARABONBA_PTR_SET_RVALUE(trustedSoftwareIds_, trustedSoftwareIds) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline CreatePrivateAccessPolicyRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline CreatePrivateAccessPolicyRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userGroupMode Field Functions 
    bool hasUserGroupMode() const { return this->userGroupMode_ != nullptr;};
    void deleteUserGroupMode() { this->userGroupMode_ = nullptr;};
    inline string userGroupMode() const { DARABONBA_PTR_GET_DEFAULT(userGroupMode_, "") };
    inline CreatePrivateAccessPolicyRequest& setUserGroupMode(string userGroupMode) { DARABONBA_PTR_SET_VALUE(userGroupMode_, userGroupMode) };


  protected:
    // Set of application IDs for the private access policy. Up to 100 application IDs can be entered. Required when **ApplicationType** is **Application**. Mutually exclusive with **TagIds**.
    std::shared_ptr<vector<string>> applicationIds_ = nullptr;
    // Application type of the private access policy. Values:
    // - **Application**: Application.
    // - **Tag**: Tag.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationType_ = nullptr;
    // Set of custom user groups for the private access policy. Required when the user group type is **Custom**. Mutually exclusive with the user group ID set. Up to 10 custom user groups can be entered.
    std::shared_ptr<vector<CreatePrivateAccessPolicyRequestCustomUserAttributes>> customUserAttributes_ = nullptr;
    // Description of the private access policy. The length is 1 to 128 characters, supporting Chinese and uppercase and lowercase English letters, and can include numbers, periods (.), underscores (_), hyphens (-), and spaces.
    std::shared_ptr<string> description_ = nullptr;
    // The execution policy for not meeting the security baseline. Values:
    // 
    // - **Block**: Block.
    // - **Observe**: Observe.
    std::shared_ptr<string> deviceAttributeAction_ = nullptr;
    // The ID of the security baseline policy.
    std::shared_ptr<string> deviceAttributeId_ = nullptr;
    // Name of the private access policy. The length is 1 to 128 characters, supporting Chinese and uppercase and lowercase English letters, and can include numbers, periods (.), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // Action of the private access policy. Values:
    // - **Block**: Block.
    // - **Allow**: Allow.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyAction_ = nullptr;
    // The priority of the private access policy. The number 1 indicates the highest priority. Range: 1~1000, with the maximum value being the total number of private access policies.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The status of the private access policy. Values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
    // Set of tag IDs for the private access policy. Up to 100 tag IDs can be entered. Required when **ApplicationType** is **Tag**. Mutually exclusive with **ApplicationIds**.
    std::shared_ptr<vector<string>> tagIds_ = nullptr;
    // The trigger template ID.
    std::shared_ptr<string> triggerTemplateId_ = nullptr;
    // The ID of the trusted process group.
    std::shared_ptr<vector<string>> trustedProcessGroupIds_ = nullptr;
    // The switch status of the trusted process. Values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    std::shared_ptr<string> trustedProcessStatus_ = nullptr;
    // The ID of the trusted software.
    std::shared_ptr<vector<string>> trustedSoftwareIds_ = nullptr;
    // Set of user group IDs for the private access policy. Required when the user group type is **Normal**. Mutually exclusive with the custom user group set. Up to 2000 user group IDs can be entered.
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    // User group type of the private access policy. Values:
    // - **Normal**: Normal user group.
    // - **Custom**: Custom user group.
    // 
    // This parameter is required.
    std::shared_ptr<string> userGroupMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
