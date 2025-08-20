// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRIVATEACCESSPOLICYRESPONSEBODYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETPRIVATEACCESSPOLICYRESPONSEBODYPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetPrivateAccessPolicyResponseBodyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrivateAccessPolicyResponseBodyPolicy& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetPrivateAccessPolicyResponseBodyPolicy& obj) { 
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
    GetPrivateAccessPolicyResponseBodyPolicy() = default ;
    GetPrivateAccessPolicyResponseBodyPolicy(const GetPrivateAccessPolicyResponseBodyPolicy &) = default ;
    GetPrivateAccessPolicyResponseBodyPolicy(GetPrivateAccessPolicyResponseBodyPolicy &&) = default ;
    GetPrivateAccessPolicyResponseBodyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrivateAccessPolicyResponseBodyPolicy() = default ;
    GetPrivateAccessPolicyResponseBodyPolicy& operator=(const GetPrivateAccessPolicyResponseBodyPolicy &) = default ;
    GetPrivateAccessPolicyResponseBodyPolicy& operator=(GetPrivateAccessPolicyResponseBodyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationIds_ != nullptr
        && this->applicationType_ != nullptr && this->createTime_ != nullptr && this->customUserAttributes_ != nullptr && this->description_ != nullptr && this->deviceAttributeAction_ != nullptr
        && this->deviceAttributeId_ != nullptr && this->name_ != nullptr && this->policyAction_ != nullptr && this->policyId_ != nullptr && this->priority_ != nullptr
        && this->status_ != nullptr && this->tagIds_ != nullptr && this->triggerTemplateId_ != nullptr && this->trustedProcessGroupIds_ != nullptr && this->trustedProcessStatus_ != nullptr
        && this->trustedSoftwareIds_ != nullptr && this->userGroupIds_ != nullptr && this->userGroupMode_ != nullptr; };
    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & applicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> applicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customUserAttributes Field Functions 
    bool hasCustomUserAttributes() const { return this->customUserAttributes_ != nullptr;};
    void deleteCustomUserAttributes() { this->customUserAttributes_ = nullptr;};
    inline const vector<Models::GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes> & customUserAttributes() const { DARABONBA_PTR_GET_CONST(customUserAttributes_, vector<Models::GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes>) };
    inline vector<Models::GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes> customUserAttributes() { DARABONBA_PTR_GET(customUserAttributes_, vector<Models::GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes>) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setCustomUserAttributes(const vector<Models::GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes> & customUserAttributes) { DARABONBA_PTR_SET_VALUE(customUserAttributes_, customUserAttributes) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setCustomUserAttributes(vector<Models::GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes> && customUserAttributes) { DARABONBA_PTR_SET_RVALUE(customUserAttributes_, customUserAttributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceAttributeAction Field Functions 
    bool hasDeviceAttributeAction() const { return this->deviceAttributeAction_ != nullptr;};
    void deleteDeviceAttributeAction() { this->deviceAttributeAction_ = nullptr;};
    inline string deviceAttributeAction() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeAction_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setDeviceAttributeAction(string deviceAttributeAction) { DARABONBA_PTR_SET_VALUE(deviceAttributeAction_, deviceAttributeAction) };


    // deviceAttributeId Field Functions 
    bool hasDeviceAttributeId() const { return this->deviceAttributeId_ != nullptr;};
    void deleteDeviceAttributeId() { this->deviceAttributeId_ = nullptr;};
    inline string deviceAttributeId() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeId_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setDeviceAttributeId(string deviceAttributeId) { DARABONBA_PTR_SET_VALUE(deviceAttributeId_, deviceAttributeId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyAction Field Functions 
    bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
    void deletePolicyAction() { this->policyAction_ = nullptr;};
    inline string policyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & tagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> tagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


    // triggerTemplateId Field Functions 
    bool hasTriggerTemplateId() const { return this->triggerTemplateId_ != nullptr;};
    void deleteTriggerTemplateId() { this->triggerTemplateId_ = nullptr;};
    inline string triggerTemplateId() const { DARABONBA_PTR_GET_DEFAULT(triggerTemplateId_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setTriggerTemplateId(string triggerTemplateId) { DARABONBA_PTR_SET_VALUE(triggerTemplateId_, triggerTemplateId) };


    // trustedProcessGroupIds Field Functions 
    bool hasTrustedProcessGroupIds() const { return this->trustedProcessGroupIds_ != nullptr;};
    void deleteTrustedProcessGroupIds() { this->trustedProcessGroupIds_ = nullptr;};
    inline const vector<string> & trustedProcessGroupIds() const { DARABONBA_PTR_GET_CONST(trustedProcessGroupIds_, vector<string>) };
    inline vector<string> trustedProcessGroupIds() { DARABONBA_PTR_GET(trustedProcessGroupIds_, vector<string>) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setTrustedProcessGroupIds(const vector<string> & trustedProcessGroupIds) { DARABONBA_PTR_SET_VALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setTrustedProcessGroupIds(vector<string> && trustedProcessGroupIds) { DARABONBA_PTR_SET_RVALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };


    // trustedProcessStatus Field Functions 
    bool hasTrustedProcessStatus() const { return this->trustedProcessStatus_ != nullptr;};
    void deleteTrustedProcessStatus() { this->trustedProcessStatus_ = nullptr;};
    inline string trustedProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(trustedProcessStatus_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setTrustedProcessStatus(string trustedProcessStatus) { DARABONBA_PTR_SET_VALUE(trustedProcessStatus_, trustedProcessStatus) };


    // trustedSoftwareIds Field Functions 
    bool hasTrustedSoftwareIds() const { return this->trustedSoftwareIds_ != nullptr;};
    void deleteTrustedSoftwareIds() { this->trustedSoftwareIds_ = nullptr;};
    inline const vector<string> & trustedSoftwareIds() const { DARABONBA_PTR_GET_CONST(trustedSoftwareIds_, vector<string>) };
    inline vector<string> trustedSoftwareIds() { DARABONBA_PTR_GET(trustedSoftwareIds_, vector<string>) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setTrustedSoftwareIds(const vector<string> & trustedSoftwareIds) { DARABONBA_PTR_SET_VALUE(trustedSoftwareIds_, trustedSoftwareIds) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setTrustedSoftwareIds(vector<string> && trustedSoftwareIds) { DARABONBA_PTR_SET_RVALUE(trustedSoftwareIds_, trustedSoftwareIds) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userGroupMode Field Functions 
    bool hasUserGroupMode() const { return this->userGroupMode_ != nullptr;};
    void deleteUserGroupMode() { this->userGroupMode_ = nullptr;};
    inline string userGroupMode() const { DARABONBA_PTR_GET_DEFAULT(userGroupMode_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicy& setUserGroupMode(string userGroupMode) { DARABONBA_PTR_SET_VALUE(userGroupMode_, userGroupMode) };


  protected:
    // A collection of application IDs for the private access policy. This field has a value when the application type is Application.
    std::shared_ptr<vector<string>> applicationIds_ = nullptr;
    // The application type of the private access policy. Possible values:
    // - **Application**: Application.
    // - **Tag**: Tag.
    std::shared_ptr<string> applicationType_ = nullptr;
    // Intranet access policy creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Collection of custom user group attributes. Multiple custom user group attributes are combined with an OR relationship and take effect as a set.
    std::shared_ptr<vector<Models::GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes>> customUserAttributes_ = nullptr;
    // Intranet access policy description.
    std::shared_ptr<string> description_ = nullptr;
    // The action to take if the security baseline is not met. Possible values:
    // 
    // - **Block**: Block.
    // - **Observe**: Observe.
    std::shared_ptr<string> deviceAttributeAction_ = nullptr;
    // The ID of the security baseline policy.
    std::shared_ptr<string> deviceAttributeId_ = nullptr;
    // Intranet access policy name.
    std::shared_ptr<string> name_ = nullptr;
    // Intranet access policy action. Values:
    // - **Block**: Block.
    // - **Allow**: Allow.
    std::shared_ptr<string> policyAction_ = nullptr;
    // Intranet access policy ID.
    std::shared_ptr<string> policyId_ = nullptr;
    // Intranet access policy priority. A value of 1 indicates the highest priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // Intranet access policy status. Values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    std::shared_ptr<string> status_ = nullptr;
    // A collection of tag IDs for the private access policy. This field has a value when the application type is Tag.
    std::shared_ptr<vector<string>> tagIds_ = nullptr;
    // The trigger template ID.
    std::shared_ptr<string> triggerTemplateId_ = nullptr;
    // A list of trusted process group IDs.
    std::shared_ptr<vector<string>> trustedProcessGroupIds_ = nullptr;
    // The status of the trusted process switch. Possible values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    std::shared_ptr<string> trustedProcessStatus_ = nullptr;
    // A list of trusted software IDs.
    std::shared_ptr<vector<string>> trustedSoftwareIds_ = nullptr;
    // Collection of user group IDs for the intranet access policy. This field is populated when the user group type is Normal.
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    // User group type for the intranet access policy. Values:
    // - **Normal**: Normal user group.
    // - **Custom**: Custom user group.
    std::shared_ptr<string> userGroupMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
