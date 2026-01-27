// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
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
  class GetPrivateAccessPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPrivateAccessPolicyResponseBody() = default ;
    GetPrivateAccessPolicyResponseBody(const GetPrivateAccessPolicyResponseBody &) = default ;
    GetPrivateAccessPolicyResponseBody(GetPrivateAccessPolicyResponseBody &&) = default ;
    GetPrivateAccessPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrivateAccessPolicyResponseBody() = default ;
    GetPrivateAccessPolicyResponseBody& operator=(const GetPrivateAccessPolicyResponseBody &) = default ;
    GetPrivateAccessPolicyResponseBody& operator=(GetPrivateAccessPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policy& obj) { 
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
        DARABONBA_PTR_TO_JSON(ValidFrom, validFrom_);
        DARABONBA_PTR_TO_JSON(ValidTimeStatus, validTimeStatus_);
        DARABONBA_PTR_TO_JSON(ValidUntil, validUntil_);
      };
      friend void from_json(const Darabonba::Json& j, Policy& obj) { 
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
        DARABONBA_PTR_FROM_JSON(ValidFrom, validFrom_);
        DARABONBA_PTR_FROM_JSON(ValidTimeStatus, validTimeStatus_);
        DARABONBA_PTR_FROM_JSON(ValidUntil, validUntil_);
      };
      Policy() = default ;
      Policy(const Policy &) = default ;
      Policy(Policy &&) = default ;
      Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policy() = default ;
      Policy& operator=(const Policy &) = default ;
      Policy& operator=(Policy &&) = default ;
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
        // The identity provider ID for the custom user group. This field is required when the custom user group type is **department**.
        shared_ptr<int32_t> idpId_ {};
        // Custom user group relationship. Values: - **Equal**: Equal to. - **Unequal**: Not equal to.
        shared_ptr<string> relation_ {};
        // Type of the custom user group. Values:
        // - **username**: Username.
        // - **department**: Department.
        // - **email**: Email.
        // - **telephone**: Telephone.
        shared_ptr<string> userGroupType_ {};
        // The value of the custom user group attribute.
        // - When the user group type is **username**, it represents the value of the username. The length should be 1 to 128 characters, supporting Chinese and case-sensitive English letters, and can include numbers, periods (.), underscores (_), and hyphens (-).
        // - When the user group type is **department**, it represents the value of the department. For example: OU=Department1,OU=SASE DingTalk.
        // - When the user group type is **email**, it represents the value of the email. For example: username@example.com.
        // - When the user group type is **telephone**, it represents the value of the phone number. For example: 13900001234.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->applicationIds_ == nullptr
        && this->applicationType_ == nullptr && this->createTime_ == nullptr && this->customUserAttributes_ == nullptr && this->description_ == nullptr && this->deviceAttributeAction_ == nullptr
        && this->deviceAttributeId_ == nullptr && this->name_ == nullptr && this->policyAction_ == nullptr && this->policyId_ == nullptr && this->priority_ == nullptr
        && this->status_ == nullptr && this->tagIds_ == nullptr && this->triggerTemplateId_ == nullptr && this->trustedProcessGroupIds_ == nullptr && this->trustedProcessStatus_ == nullptr
        && this->trustedSoftwareIds_ == nullptr && this->userGroupIds_ == nullptr && this->userGroupMode_ == nullptr && this->validFrom_ == nullptr && this->validTimeStatus_ == nullptr
        && this->validUntil_ == nullptr; };
      // applicationIds Field Functions 
      bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
      void deleteApplicationIds() { this->applicationIds_ = nullptr;};
      inline const vector<string> & getApplicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
      inline vector<string> getApplicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
      inline Policy& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
      inline Policy& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


      // applicationType Field Functions 
      bool hasApplicationType() const { return this->applicationType_ != nullptr;};
      void deleteApplicationType() { this->applicationType_ = nullptr;};
      inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
      inline Policy& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Policy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customUserAttributes Field Functions 
      bool hasCustomUserAttributes() const { return this->customUserAttributes_ != nullptr;};
      void deleteCustomUserAttributes() { this->customUserAttributes_ = nullptr;};
      inline const vector<Policy::CustomUserAttributes> & getCustomUserAttributes() const { DARABONBA_PTR_GET_CONST(customUserAttributes_, vector<Policy::CustomUserAttributes>) };
      inline vector<Policy::CustomUserAttributes> getCustomUserAttributes() { DARABONBA_PTR_GET(customUserAttributes_, vector<Policy::CustomUserAttributes>) };
      inline Policy& setCustomUserAttributes(const vector<Policy::CustomUserAttributes> & customUserAttributes) { DARABONBA_PTR_SET_VALUE(customUserAttributes_, customUserAttributes) };
      inline Policy& setCustomUserAttributes(vector<Policy::CustomUserAttributes> && customUserAttributes) { DARABONBA_PTR_SET_RVALUE(customUserAttributes_, customUserAttributes) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Policy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // deviceAttributeAction Field Functions 
      bool hasDeviceAttributeAction() const { return this->deviceAttributeAction_ != nullptr;};
      void deleteDeviceAttributeAction() { this->deviceAttributeAction_ = nullptr;};
      inline string getDeviceAttributeAction() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeAction_, "") };
      inline Policy& setDeviceAttributeAction(string deviceAttributeAction) { DARABONBA_PTR_SET_VALUE(deviceAttributeAction_, deviceAttributeAction) };


      // deviceAttributeId Field Functions 
      bool hasDeviceAttributeId() const { return this->deviceAttributeId_ != nullptr;};
      void deleteDeviceAttributeId() { this->deviceAttributeId_ = nullptr;};
      inline string getDeviceAttributeId() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeId_, "") };
      inline Policy& setDeviceAttributeId(string deviceAttributeId) { DARABONBA_PTR_SET_VALUE(deviceAttributeId_, deviceAttributeId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Policy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // policyAction Field Functions 
      bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
      void deletePolicyAction() { this->policyAction_ = nullptr;};
      inline string getPolicyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
      inline Policy& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Policy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Policy& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Policy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tagIds Field Functions 
      bool hasTagIds() const { return this->tagIds_ != nullptr;};
      void deleteTagIds() { this->tagIds_ = nullptr;};
      inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
      inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
      inline Policy& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
      inline Policy& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


      // triggerTemplateId Field Functions 
      bool hasTriggerTemplateId() const { return this->triggerTemplateId_ != nullptr;};
      void deleteTriggerTemplateId() { this->triggerTemplateId_ = nullptr;};
      inline string getTriggerTemplateId() const { DARABONBA_PTR_GET_DEFAULT(triggerTemplateId_, "") };
      inline Policy& setTriggerTemplateId(string triggerTemplateId) { DARABONBA_PTR_SET_VALUE(triggerTemplateId_, triggerTemplateId) };


      // trustedProcessGroupIds Field Functions 
      bool hasTrustedProcessGroupIds() const { return this->trustedProcessGroupIds_ != nullptr;};
      void deleteTrustedProcessGroupIds() { this->trustedProcessGroupIds_ = nullptr;};
      inline const vector<string> & getTrustedProcessGroupIds() const { DARABONBA_PTR_GET_CONST(trustedProcessGroupIds_, vector<string>) };
      inline vector<string> getTrustedProcessGroupIds() { DARABONBA_PTR_GET(trustedProcessGroupIds_, vector<string>) };
      inline Policy& setTrustedProcessGroupIds(const vector<string> & trustedProcessGroupIds) { DARABONBA_PTR_SET_VALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };
      inline Policy& setTrustedProcessGroupIds(vector<string> && trustedProcessGroupIds) { DARABONBA_PTR_SET_RVALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };


      // trustedProcessStatus Field Functions 
      bool hasTrustedProcessStatus() const { return this->trustedProcessStatus_ != nullptr;};
      void deleteTrustedProcessStatus() { this->trustedProcessStatus_ = nullptr;};
      inline string getTrustedProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(trustedProcessStatus_, "") };
      inline Policy& setTrustedProcessStatus(string trustedProcessStatus) { DARABONBA_PTR_SET_VALUE(trustedProcessStatus_, trustedProcessStatus) };


      // trustedSoftwareIds Field Functions 
      bool hasTrustedSoftwareIds() const { return this->trustedSoftwareIds_ != nullptr;};
      void deleteTrustedSoftwareIds() { this->trustedSoftwareIds_ = nullptr;};
      inline const vector<string> & getTrustedSoftwareIds() const { DARABONBA_PTR_GET_CONST(trustedSoftwareIds_, vector<string>) };
      inline vector<string> getTrustedSoftwareIds() { DARABONBA_PTR_GET(trustedSoftwareIds_, vector<string>) };
      inline Policy& setTrustedSoftwareIds(const vector<string> & trustedSoftwareIds) { DARABONBA_PTR_SET_VALUE(trustedSoftwareIds_, trustedSoftwareIds) };
      inline Policy& setTrustedSoftwareIds(vector<string> && trustedSoftwareIds) { DARABONBA_PTR_SET_RVALUE(trustedSoftwareIds_, trustedSoftwareIds) };


      // userGroupIds Field Functions 
      bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
      void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
      inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
      inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
      inline Policy& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
      inline Policy& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


      // userGroupMode Field Functions 
      bool hasUserGroupMode() const { return this->userGroupMode_ != nullptr;};
      void deleteUserGroupMode() { this->userGroupMode_ = nullptr;};
      inline string getUserGroupMode() const { DARABONBA_PTR_GET_DEFAULT(userGroupMode_, "") };
      inline Policy& setUserGroupMode(string userGroupMode) { DARABONBA_PTR_SET_VALUE(userGroupMode_, userGroupMode) };


      // validFrom Field Functions 
      bool hasValidFrom() const { return this->validFrom_ != nullptr;};
      void deleteValidFrom() { this->validFrom_ = nullptr;};
      inline int64_t getValidFrom() const { DARABONBA_PTR_GET_DEFAULT(validFrom_, 0L) };
      inline Policy& setValidFrom(int64_t validFrom) { DARABONBA_PTR_SET_VALUE(validFrom_, validFrom) };


      // validTimeStatus Field Functions 
      bool hasValidTimeStatus() const { return this->validTimeStatus_ != nullptr;};
      void deleteValidTimeStatus() { this->validTimeStatus_ = nullptr;};
      inline string getValidTimeStatus() const { DARABONBA_PTR_GET_DEFAULT(validTimeStatus_, "") };
      inline Policy& setValidTimeStatus(string validTimeStatus) { DARABONBA_PTR_SET_VALUE(validTimeStatus_, validTimeStatus) };


      // validUntil Field Functions 
      bool hasValidUntil() const { return this->validUntil_ != nullptr;};
      void deleteValidUntil() { this->validUntil_ = nullptr;};
      inline int64_t getValidUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, 0L) };
      inline Policy& setValidUntil(int64_t validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


    protected:
      // A collection of application IDs for the private access policy. This field has a value when the application type is Application.
      shared_ptr<vector<string>> applicationIds_ {};
      // The application type of the private access policy. Possible values:
      // - **Application**: Application.
      // - **Tag**: Tag.
      shared_ptr<string> applicationType_ {};
      // Intranet access policy creation time.
      shared_ptr<string> createTime_ {};
      // Collection of custom user group attributes. Multiple custom user group attributes are combined with an OR relationship and take effect as a set.
      shared_ptr<vector<Policy::CustomUserAttributes>> customUserAttributes_ {};
      // Intranet access policy description.
      shared_ptr<string> description_ {};
      // The action to take if the security baseline is not met. Possible values:
      // 
      // - **Block**: Block.
      // - **Observe**: Observe.
      shared_ptr<string> deviceAttributeAction_ {};
      // The ID of the security baseline policy.
      shared_ptr<string> deviceAttributeId_ {};
      // Intranet access policy name.
      shared_ptr<string> name_ {};
      // Intranet access policy action. Values:
      // - **Block**: Block.
      // - **Allow**: Allow.
      shared_ptr<string> policyAction_ {};
      // Intranet access policy ID.
      shared_ptr<string> policyId_ {};
      // Intranet access policy priority. A value of 1 indicates the highest priority.
      shared_ptr<int32_t> priority_ {};
      // Intranet access policy status. Values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> status_ {};
      // A collection of tag IDs for the private access policy. This field has a value when the application type is Tag.
      shared_ptr<vector<string>> tagIds_ {};
      // The trigger template ID.
      shared_ptr<string> triggerTemplateId_ {};
      // A list of trusted process group IDs.
      shared_ptr<vector<string>> trustedProcessGroupIds_ {};
      // The status of the trusted process switch. Possible values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> trustedProcessStatus_ {};
      // A list of trusted software IDs.
      shared_ptr<vector<string>> trustedSoftwareIds_ {};
      // Collection of user group IDs for the intranet access policy. This field is populated when the user group type is Normal.
      shared_ptr<vector<string>> userGroupIds_ {};
      // User group type for the intranet access policy. Values:
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

    virtual bool empty() const override { return this->policy_ == nullptr
        && this->requestId_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const GetPrivateAccessPolicyResponseBody::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, GetPrivateAccessPolicyResponseBody::Policy) };
    inline GetPrivateAccessPolicyResponseBody::Policy getPolicy() { DARABONBA_PTR_GET(policy_, GetPrivateAccessPolicyResponseBody::Policy) };
    inline GetPrivateAccessPolicyResponseBody& setPolicy(const GetPrivateAccessPolicyResponseBody::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline GetPrivateAccessPolicyResponseBody& setPolicy(GetPrivateAccessPolicyResponseBody::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPrivateAccessPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Intranet access policy.
    shared_ptr<GetPrivateAccessPolicyResponseBody::Policy> policy_ {};
    // The ID of the current request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
