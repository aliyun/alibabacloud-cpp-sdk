// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATEACCESSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATEACCESSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdatePrivateAccessPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(CustomUserAttributes, customUserAttributes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceAttributeAction, deviceAttributeAction_);
      DARABONBA_PTR_TO_JSON(DeviceAttributeId, deviceAttributeId_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
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
      DARABONBA_PTR_TO_JSON(ValidFrom, validFrom_);
      DARABONBA_PTR_TO_JSON(ValidTimeStatus, validTimeStatus_);
      DARABONBA_PTR_TO_JSON(ValidUntil, validUntil_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(CustomUserAttributes, customUserAttributes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceAttributeAction, deviceAttributeAction_);
      DARABONBA_PTR_FROM_JSON(DeviceAttributeId, deviceAttributeId_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
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
      DARABONBA_PTR_FROM_JSON(ValidFrom, validFrom_);
      DARABONBA_PTR_FROM_JSON(ValidTimeStatus, validTimeStatus_);
      DARABONBA_PTR_FROM_JSON(ValidUntil, validUntil_);
    };
    UpdatePrivateAccessPolicyRequest() = default ;
    UpdatePrivateAccessPolicyRequest(const UpdatePrivateAccessPolicyRequest &) = default ;
    UpdatePrivateAccessPolicyRequest(UpdatePrivateAccessPolicyRequest &&) = default ;
    UpdatePrivateAccessPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateAccessPolicyRequest() = default ;
    UpdatePrivateAccessPolicyRequest& operator=(const UpdatePrivateAccessPolicyRequest &) = default ;
    UpdatePrivateAccessPolicyRequest& operator=(UpdatePrivateAccessPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomUserAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomUserAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(IdpId, idpId_);
        DARABONBA_PTR_TO_JSON(Relation, relation_);
        DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, CustomUserAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
        DARABONBA_PTR_FROM_JSON(Relation, relation_);
        DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      CustomUserAttributes() = default ;
      CustomUserAttributes(const CustomUserAttributes &) = default ;
      CustomUserAttributes(CustomUserAttributes &&) = default ;
      CustomUserAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomUserAttributes() = default ;
      CustomUserAttributes& operator=(const CustomUserAttributes &) = default ;
      CustomUserAttributes& operator=(CustomUserAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->idpId_ == nullptr
        && this->relation_ == nullptr && this->userGroupType_ == nullptr && this->value_ == nullptr; };
      // idpId Field Functions 
      bool hasIdpId() const { return this->idpId_ != nullptr;};
      void deleteIdpId() { this->idpId_ = nullptr;};
      inline int32_t getIdpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, 0) };
      inline CustomUserAttributes& setIdpId(int32_t idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


      // relation Field Functions 
      bool hasRelation() const { return this->relation_ != nullptr;};
      void deleteRelation() { this->relation_ = nullptr;};
      inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
      inline CustomUserAttributes& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


      // userGroupType Field Functions 
      bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
      void deleteUserGroupType() { this->userGroupType_ = nullptr;};
      inline string getUserGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, "") };
      inline CustomUserAttributes& setUserGroupType(string userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline CustomUserAttributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The identity source ID of the custom user group. Required when the custom user group type is **department**.
      shared_ptr<int32_t> idpId_ {};
      // Relation of the custom user group. Values:
      // - **Equal**: Equal.
      // - **Unequal**: Not equal.
      // 
      // This parameter is required.
      shared_ptr<string> relation_ {};
      // Type of the custom user group. Values:
      // - **username**: Username.
      // - **department**: Department.
      // - **email**: Email.
      // - **telephone**: Telephone.
      // 
      // This parameter is required.
      shared_ptr<string> userGroupType_ {};
      // Custom user group attribute values. - When the user group type is **username**, it represents the value of the username. The length should be 1 to 128 characters, supporting Chinese and case-sensitive English letters, and can include numbers, half-width periods (.), underscores (_), hyphens (-), asterisks (*), at symbols (@), and spaces. - When the user group type is **department**, it represents the value of the department. For example: OU=Department1,OU=SASE DingTalk. - When the user group type is **email**, it represents the value of the email. For example: username@example.com. - When the user group type is **telephone**, it represents the value of the mobile phone. For example: 13900001234.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->applicationIds_ == nullptr
        && this->applicationType_ == nullptr && this->customUserAttributes_ == nullptr && this->description_ == nullptr && this->deviceAttributeAction_ == nullptr && this->deviceAttributeId_ == nullptr
        && this->modifyType_ == nullptr && this->name_ == nullptr && this->policyAction_ == nullptr && this->policyId_ == nullptr && this->priority_ == nullptr
        && this->status_ == nullptr && this->tagIds_ == nullptr && this->triggerTemplateId_ == nullptr && this->trustedProcessGroupIds_ == nullptr && this->trustedProcessStatus_ == nullptr
        && this->trustedSoftwareIds_ == nullptr && this->userGroupIds_ == nullptr && this->userGroupMode_ == nullptr && this->validFrom_ == nullptr && this->validTimeStatus_ == nullptr
        && this->validUntil_ == nullptr; };
    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & getApplicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> getApplicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline UpdatePrivateAccessPolicyRequest& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline UpdatePrivateAccessPolicyRequest& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline UpdatePrivateAccessPolicyRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // customUserAttributes Field Functions 
    bool hasCustomUserAttributes() const { return this->customUserAttributes_ != nullptr;};
    void deleteCustomUserAttributes() { this->customUserAttributes_ = nullptr;};
    inline const vector<UpdatePrivateAccessPolicyRequest::CustomUserAttributes> & getCustomUserAttributes() const { DARABONBA_PTR_GET_CONST(customUserAttributes_, vector<UpdatePrivateAccessPolicyRequest::CustomUserAttributes>) };
    inline vector<UpdatePrivateAccessPolicyRequest::CustomUserAttributes> getCustomUserAttributes() { DARABONBA_PTR_GET(customUserAttributes_, vector<UpdatePrivateAccessPolicyRequest::CustomUserAttributes>) };
    inline UpdatePrivateAccessPolicyRequest& setCustomUserAttributes(const vector<UpdatePrivateAccessPolicyRequest::CustomUserAttributes> & customUserAttributes) { DARABONBA_PTR_SET_VALUE(customUserAttributes_, customUserAttributes) };
    inline UpdatePrivateAccessPolicyRequest& setCustomUserAttributes(vector<UpdatePrivateAccessPolicyRequest::CustomUserAttributes> && customUserAttributes) { DARABONBA_PTR_SET_RVALUE(customUserAttributes_, customUserAttributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePrivateAccessPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceAttributeAction Field Functions 
    bool hasDeviceAttributeAction() const { return this->deviceAttributeAction_ != nullptr;};
    void deleteDeviceAttributeAction() { this->deviceAttributeAction_ = nullptr;};
    inline string getDeviceAttributeAction() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeAction_, "") };
    inline UpdatePrivateAccessPolicyRequest& setDeviceAttributeAction(string deviceAttributeAction) { DARABONBA_PTR_SET_VALUE(deviceAttributeAction_, deviceAttributeAction) };


    // deviceAttributeId Field Functions 
    bool hasDeviceAttributeId() const { return this->deviceAttributeId_ != nullptr;};
    void deleteDeviceAttributeId() { this->deviceAttributeId_ = nullptr;};
    inline string getDeviceAttributeId() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeId_, "") };
    inline UpdatePrivateAccessPolicyRequest& setDeviceAttributeId(string deviceAttributeId) { DARABONBA_PTR_SET_VALUE(deviceAttributeId_, deviceAttributeId) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline UpdatePrivateAccessPolicyRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePrivateAccessPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyAction Field Functions 
    bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
    void deletePolicyAction() { this->policyAction_ = nullptr;};
    inline string getPolicyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
    inline UpdatePrivateAccessPolicyRequest& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdatePrivateAccessPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdatePrivateAccessPolicyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdatePrivateAccessPolicyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline UpdatePrivateAccessPolicyRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline UpdatePrivateAccessPolicyRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


    // triggerTemplateId Field Functions 
    bool hasTriggerTemplateId() const { return this->triggerTemplateId_ != nullptr;};
    void deleteTriggerTemplateId() { this->triggerTemplateId_ = nullptr;};
    inline string getTriggerTemplateId() const { DARABONBA_PTR_GET_DEFAULT(triggerTemplateId_, "") };
    inline UpdatePrivateAccessPolicyRequest& setTriggerTemplateId(string triggerTemplateId) { DARABONBA_PTR_SET_VALUE(triggerTemplateId_, triggerTemplateId) };


    // trustedProcessGroupIds Field Functions 
    bool hasTrustedProcessGroupIds() const { return this->trustedProcessGroupIds_ != nullptr;};
    void deleteTrustedProcessGroupIds() { this->trustedProcessGroupIds_ = nullptr;};
    inline const vector<string> & getTrustedProcessGroupIds() const { DARABONBA_PTR_GET_CONST(trustedProcessGroupIds_, vector<string>) };
    inline vector<string> getTrustedProcessGroupIds() { DARABONBA_PTR_GET(trustedProcessGroupIds_, vector<string>) };
    inline UpdatePrivateAccessPolicyRequest& setTrustedProcessGroupIds(const vector<string> & trustedProcessGroupIds) { DARABONBA_PTR_SET_VALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };
    inline UpdatePrivateAccessPolicyRequest& setTrustedProcessGroupIds(vector<string> && trustedProcessGroupIds) { DARABONBA_PTR_SET_RVALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };


    // trustedProcessStatus Field Functions 
    bool hasTrustedProcessStatus() const { return this->trustedProcessStatus_ != nullptr;};
    void deleteTrustedProcessStatus() { this->trustedProcessStatus_ = nullptr;};
    inline string getTrustedProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(trustedProcessStatus_, "") };
    inline UpdatePrivateAccessPolicyRequest& setTrustedProcessStatus(string trustedProcessStatus) { DARABONBA_PTR_SET_VALUE(trustedProcessStatus_, trustedProcessStatus) };


    // trustedSoftwareIds Field Functions 
    bool hasTrustedSoftwareIds() const { return this->trustedSoftwareIds_ != nullptr;};
    void deleteTrustedSoftwareIds() { this->trustedSoftwareIds_ = nullptr;};
    inline const vector<string> & getTrustedSoftwareIds() const { DARABONBA_PTR_GET_CONST(trustedSoftwareIds_, vector<string>) };
    inline vector<string> getTrustedSoftwareIds() { DARABONBA_PTR_GET(trustedSoftwareIds_, vector<string>) };
    inline UpdatePrivateAccessPolicyRequest& setTrustedSoftwareIds(const vector<string> & trustedSoftwareIds) { DARABONBA_PTR_SET_VALUE(trustedSoftwareIds_, trustedSoftwareIds) };
    inline UpdatePrivateAccessPolicyRequest& setTrustedSoftwareIds(vector<string> && trustedSoftwareIds) { DARABONBA_PTR_SET_RVALUE(trustedSoftwareIds_, trustedSoftwareIds) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline UpdatePrivateAccessPolicyRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline UpdatePrivateAccessPolicyRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userGroupMode Field Functions 
    bool hasUserGroupMode() const { return this->userGroupMode_ != nullptr;};
    void deleteUserGroupMode() { this->userGroupMode_ = nullptr;};
    inline string getUserGroupMode() const { DARABONBA_PTR_GET_DEFAULT(userGroupMode_, "") };
    inline UpdatePrivateAccessPolicyRequest& setUserGroupMode(string userGroupMode) { DARABONBA_PTR_SET_VALUE(userGroupMode_, userGroupMode) };


    // validFrom Field Functions 
    bool hasValidFrom() const { return this->validFrom_ != nullptr;};
    void deleteValidFrom() { this->validFrom_ = nullptr;};
    inline int64_t getValidFrom() const { DARABONBA_PTR_GET_DEFAULT(validFrom_, 0L) };
    inline UpdatePrivateAccessPolicyRequest& setValidFrom(int64_t validFrom) { DARABONBA_PTR_SET_VALUE(validFrom_, validFrom) };


    // validTimeStatus Field Functions 
    bool hasValidTimeStatus() const { return this->validTimeStatus_ != nullptr;};
    void deleteValidTimeStatus() { this->validTimeStatus_ = nullptr;};
    inline string getValidTimeStatus() const { DARABONBA_PTR_GET_DEFAULT(validTimeStatus_, "") };
    inline UpdatePrivateAccessPolicyRequest& setValidTimeStatus(string validTimeStatus) { DARABONBA_PTR_SET_VALUE(validTimeStatus_, validTimeStatus) };


    // validUntil Field Functions 
    bool hasValidUntil() const { return this->validUntil_ != nullptr;};
    void deleteValidUntil() { this->validUntil_ = nullptr;};
    inline int64_t getValidUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, 0L) };
    inline UpdatePrivateAccessPolicyRequest& setValidUntil(int64_t validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


  protected:
    // Set of application IDs for the private access policy. A single policy supports up to 100 private access application IDs.
    shared_ptr<vector<string>> applicationIds_ {};
    // Application type of the private access policy. Values:
    // - **Application**: Application.
    // - **Tag**: Tag.
    shared_ptr<string> applicationType_ {};
    // Set of custom user attributes for the private access policy, required when the user group type is **Custom**. Mutually exclusive with the user group ID set. The total number of custom user groups is limited to 10.
    shared_ptr<vector<UpdatePrivateAccessPolicyRequest::CustomUserAttributes>> customUserAttributes_ {};
    // Description of the private access policy. Length should be 1 to 128 characters, supporting Chinese and English letters (both uppercase and lowercase), and can include numbers, periods (.), underscores (_), hyphens (-), and spaces.
    shared_ptr<string> description_ {};
    // The execution strategy for not meeting the security baseline. Values:
    // 
    // - **Block**: Block.
    // - **Observe**: Observe.
    shared_ptr<string> deviceAttributeAction_ {};
    // The ID of the security baseline policy.
    shared_ptr<string> deviceAttributeId_ {};
    // The modification type of the private access policy. Values:
    // - **Cover** (default): Use the values of **ApplicationIds**, **UserGroupIds**, and **CustomUserAttributes** to overwrite the original application ID set, user group ID set, and custom user attribute set, respectively.
    // - **Append**: Add the values provided in **ApplicationIds**, **UserGroupIds**, and **CustomUserAttributes** to the original application ID set, user group ID set, and custom user attribute set, respectively.
    shared_ptr<string> modifyType_ {};
    shared_ptr<string> name_ {};
    // Action of the private access policy. Values:
    // - **Block**: Block.
    // - **Allow**: Allow.
    shared_ptr<string> policyAction_ {};
    // ID of the private access policy. Value sources:
    // - [ListPrivateAccessPolicies](~~ListPrivateAccessPolicies~~): Batch query for private access policies.
    // - [CreatePrivateAccessPolicy](~~CreatePrivateAccessPolicy~~): Create a private access policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The priority of the private access policy. The number 1 indicates the highest priority. Range: 1~1000, with the maximum value being the total number of private access policies minus one.
    shared_ptr<int32_t> priority_ {};
    // The status of the private access policy. Values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> status_ {};
    // Set of tag IDs for the private access policy. A single policy supports up to 100 private access tag IDs.
    shared_ptr<vector<string>> tagIds_ {};
    // The trigger template ID.
    shared_ptr<string> triggerTemplateId_ {};
    // Trusted process group ID.
    shared_ptr<vector<string>> trustedProcessGroupIds_ {};
    // Trusted process switch status. Values: 
    // 
    // - **Enabled**: On. 
    // 
    // - **Disabled**: Off.
    shared_ptr<string> trustedProcessStatus_ {};
    // Trusted Software ID.
    shared_ptr<vector<string>> trustedSoftwareIds_ {};
    // Set of user group IDs for the private access policy, required when the user group type is **Normal**. Mutually exclusive with the custom user group set. A single policy supports up to 10,000 user groups, and a maximum of 2,000 user group IDs can be modified at once.
    shared_ptr<vector<string>> userGroupIds_ {};
    // User group type of the private access policy. Values:
    // - **Normal**: Normal user group.
    // - **Custom**: Custom user group.
    shared_ptr<string> userGroupMode_ {};
    // The start time when the zero trust policy takes effect, represented as a timestamp in seconds.
    shared_ptr<int64_t> validFrom_ {};
    // Switch status for effective time. Values: - **Enabled**: On. - **Disabled**: Off.
    shared_ptr<string> validTimeStatus_ {};
    // The expiration time of the zero trust policy, in seconds timestamp.
    shared_ptr<int64_t> validUntil_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
