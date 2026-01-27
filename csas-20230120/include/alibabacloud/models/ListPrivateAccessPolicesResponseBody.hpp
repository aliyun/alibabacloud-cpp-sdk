// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSPOLICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSPOLICESRESPONSEBODY_HPP_
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
  class ListPrivateAccessPolicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessPolicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Polices, polices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessPolicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Polices, polices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListPrivateAccessPolicesResponseBody() = default ;
    ListPrivateAccessPolicesResponseBody(const ListPrivateAccessPolicesResponseBody &) = default ;
    ListPrivateAccessPolicesResponseBody(ListPrivateAccessPolicesResponseBody &&) = default ;
    ListPrivateAccessPolicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessPolicesResponseBody() = default ;
    ListPrivateAccessPolicesResponseBody& operator=(const ListPrivateAccessPolicesResponseBody &) = default ;
    ListPrivateAccessPolicesResponseBody& operator=(ListPrivateAccessPolicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Polices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Polices& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Polices& obj) { 
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
      Polices() = default ;
      Polices(const Polices &) = default ;
      Polices(Polices &&) = default ;
      Polices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Polices() = default ;
      Polices& operator=(const Polices &) = default ;
      Polices& operator=(Polices &&) = default ;
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
        // The ID of the identity provider (IdP) for the user group. If the value of UserGroupType is **department**, this parameter is returned.
        shared_ptr<int32_t> idpId_ {};
        // The logical operator for the user group. Valid values:
        // 
        // *   **Equal**
        // *   **Unequal**
        shared_ptr<string> relation_ {};
        // The type of the user group, which is the key of the attribute. Valid values:
        // 
        // *   **username**
        // *   **department**
        // *   **email**
        // *   **telephone**
        shared_ptr<string> userGroupType_ {};
        // The value of the attribute.
        // 
        // *   If the value of UserGroupType is **username**, the value of this parameter is a username. The value must be 1 to 128 characters in length and can contain letters, digits, hyphens (-), underscores (_), and periods (.).
        // *   If the value of UserGroupType is **department**, the value of this parameter is a department. Examples: OU=Department 1, OU=SASE DingTalk.
        // *   If the value of UserGroupType is **email**, the value of this parameter is an email address. Example: username@example.com.
        // *   If the value of UserGroupType is **telephone**, the value of this parameter is a mobile phone number. Example: 13900001234.
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
      inline Polices& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
      inline Polices& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


      // applicationType Field Functions 
      bool hasApplicationType() const { return this->applicationType_ != nullptr;};
      void deleteApplicationType() { this->applicationType_ = nullptr;};
      inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
      inline Polices& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Polices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customUserAttributes Field Functions 
      bool hasCustomUserAttributes() const { return this->customUserAttributes_ != nullptr;};
      void deleteCustomUserAttributes() { this->customUserAttributes_ = nullptr;};
      inline const vector<Polices::CustomUserAttributes> & getCustomUserAttributes() const { DARABONBA_PTR_GET_CONST(customUserAttributes_, vector<Polices::CustomUserAttributes>) };
      inline vector<Polices::CustomUserAttributes> getCustomUserAttributes() { DARABONBA_PTR_GET(customUserAttributes_, vector<Polices::CustomUserAttributes>) };
      inline Polices& setCustomUserAttributes(const vector<Polices::CustomUserAttributes> & customUserAttributes) { DARABONBA_PTR_SET_VALUE(customUserAttributes_, customUserAttributes) };
      inline Polices& setCustomUserAttributes(vector<Polices::CustomUserAttributes> && customUserAttributes) { DARABONBA_PTR_SET_RVALUE(customUserAttributes_, customUserAttributes) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Polices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // deviceAttributeAction Field Functions 
      bool hasDeviceAttributeAction() const { return this->deviceAttributeAction_ != nullptr;};
      void deleteDeviceAttributeAction() { this->deviceAttributeAction_ = nullptr;};
      inline string getDeviceAttributeAction() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeAction_, "") };
      inline Polices& setDeviceAttributeAction(string deviceAttributeAction) { DARABONBA_PTR_SET_VALUE(deviceAttributeAction_, deviceAttributeAction) };


      // deviceAttributeId Field Functions 
      bool hasDeviceAttributeId() const { return this->deviceAttributeId_ != nullptr;};
      void deleteDeviceAttributeId() { this->deviceAttributeId_ = nullptr;};
      inline string getDeviceAttributeId() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeId_, "") };
      inline Polices& setDeviceAttributeId(string deviceAttributeId) { DARABONBA_PTR_SET_VALUE(deviceAttributeId_, deviceAttributeId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Polices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // policyAction Field Functions 
      bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
      void deletePolicyAction() { this->policyAction_ = nullptr;};
      inline string getPolicyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
      inline Polices& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Polices& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Polices& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Polices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tagIds Field Functions 
      bool hasTagIds() const { return this->tagIds_ != nullptr;};
      void deleteTagIds() { this->tagIds_ = nullptr;};
      inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
      inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
      inline Polices& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
      inline Polices& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


      // triggerTemplateId Field Functions 
      bool hasTriggerTemplateId() const { return this->triggerTemplateId_ != nullptr;};
      void deleteTriggerTemplateId() { this->triggerTemplateId_ = nullptr;};
      inline string getTriggerTemplateId() const { DARABONBA_PTR_GET_DEFAULT(triggerTemplateId_, "") };
      inline Polices& setTriggerTemplateId(string triggerTemplateId) { DARABONBA_PTR_SET_VALUE(triggerTemplateId_, triggerTemplateId) };


      // trustedProcessGroupIds Field Functions 
      bool hasTrustedProcessGroupIds() const { return this->trustedProcessGroupIds_ != nullptr;};
      void deleteTrustedProcessGroupIds() { this->trustedProcessGroupIds_ = nullptr;};
      inline const vector<string> & getTrustedProcessGroupIds() const { DARABONBA_PTR_GET_CONST(trustedProcessGroupIds_, vector<string>) };
      inline vector<string> getTrustedProcessGroupIds() { DARABONBA_PTR_GET(trustedProcessGroupIds_, vector<string>) };
      inline Polices& setTrustedProcessGroupIds(const vector<string> & trustedProcessGroupIds) { DARABONBA_PTR_SET_VALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };
      inline Polices& setTrustedProcessGroupIds(vector<string> && trustedProcessGroupIds) { DARABONBA_PTR_SET_RVALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };


      // trustedProcessStatus Field Functions 
      bool hasTrustedProcessStatus() const { return this->trustedProcessStatus_ != nullptr;};
      void deleteTrustedProcessStatus() { this->trustedProcessStatus_ = nullptr;};
      inline string getTrustedProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(trustedProcessStatus_, "") };
      inline Polices& setTrustedProcessStatus(string trustedProcessStatus) { DARABONBA_PTR_SET_VALUE(trustedProcessStatus_, trustedProcessStatus) };


      // trustedSoftwareIds Field Functions 
      bool hasTrustedSoftwareIds() const { return this->trustedSoftwareIds_ != nullptr;};
      void deleteTrustedSoftwareIds() { this->trustedSoftwareIds_ = nullptr;};
      inline const vector<string> & getTrustedSoftwareIds() const { DARABONBA_PTR_GET_CONST(trustedSoftwareIds_, vector<string>) };
      inline vector<string> getTrustedSoftwareIds() { DARABONBA_PTR_GET(trustedSoftwareIds_, vector<string>) };
      inline Polices& setTrustedSoftwareIds(const vector<string> & trustedSoftwareIds) { DARABONBA_PTR_SET_VALUE(trustedSoftwareIds_, trustedSoftwareIds) };
      inline Polices& setTrustedSoftwareIds(vector<string> && trustedSoftwareIds) { DARABONBA_PTR_SET_RVALUE(trustedSoftwareIds_, trustedSoftwareIds) };


      // userGroupIds Field Functions 
      bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
      void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
      inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
      inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
      inline Polices& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
      inline Polices& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


      // userGroupMode Field Functions 
      bool hasUserGroupMode() const { return this->userGroupMode_ != nullptr;};
      void deleteUserGroupMode() { this->userGroupMode_ = nullptr;};
      inline string getUserGroupMode() const { DARABONBA_PTR_GET_DEFAULT(userGroupMode_, "") };
      inline Polices& setUserGroupMode(string userGroupMode) { DARABONBA_PTR_SET_VALUE(userGroupMode_, userGroupMode) };


      // validFrom Field Functions 
      bool hasValidFrom() const { return this->validFrom_ != nullptr;};
      void deleteValidFrom() { this->validFrom_ = nullptr;};
      inline int64_t getValidFrom() const { DARABONBA_PTR_GET_DEFAULT(validFrom_, 0L) };
      inline Polices& setValidFrom(int64_t validFrom) { DARABONBA_PTR_SET_VALUE(validFrom_, validFrom) };


      // validTimeStatus Field Functions 
      bool hasValidTimeStatus() const { return this->validTimeStatus_ != nullptr;};
      void deleteValidTimeStatus() { this->validTimeStatus_ = nullptr;};
      inline string getValidTimeStatus() const { DARABONBA_PTR_GET_DEFAULT(validTimeStatus_, "") };
      inline Polices& setValidTimeStatus(string validTimeStatus) { DARABONBA_PTR_SET_VALUE(validTimeStatus_, validTimeStatus) };


      // validUntil Field Functions 
      bool hasValidUntil() const { return this->validUntil_ != nullptr;};
      void deleteValidUntil() { this->validUntil_ = nullptr;};
      inline int64_t getValidUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, 0L) };
      inline Polices& setValidUntil(int64_t validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


    protected:
      // The IDs of the applications that are specified in the private access policy. If the value of ApplicationType is **Application**, this parameter is returned.
      shared_ptr<vector<string>> applicationIds_ {};
      // The application type of the private access policy. Valid values:
      // 
      // *   **Application**
      // *   **Tag**
      shared_ptr<string> applicationType_ {};
      // The creation time of the private access policy.
      shared_ptr<string> createTime_ {};
      // The attributes of the custom user group. The attributes of the custom user group are evaluated by using a logical OR. If an attribute is matched, the policy takes effect.
      shared_ptr<vector<Polices::CustomUserAttributes>> customUserAttributes_ {};
      // The description of the private access policy.
      shared_ptr<string> description_ {};
      // The action that is performed when the security baseline is not met. Valid values:
      // 
      // *   **Block**
      // *   **Observe**
      shared_ptr<string> deviceAttributeAction_ {};
      // The ID of the security baseline.
      shared_ptr<string> deviceAttributeId_ {};
      // The name of the private access policy.
      shared_ptr<string> name_ {};
      // The action in the private access policy. Valid values:
      // 
      // *   **Block**
      // *   **Allow**
      shared_ptr<string> policyAction_ {};
      // The ID of the private access policy.
      shared_ptr<string> policyId_ {};
      // The priority of the private access policy. The value 1 indicates the highest priority.
      shared_ptr<int32_t> priority_ {};
      // The status of the private access policy. Valid values:
      // 
      // *   **Enabled**
      // *   **Disabled**
      shared_ptr<string> status_ {};
      // The IDs of the tags that are specified in the private access policy. If the value of ApplicationType is **Tag**, this parameter is returned.
      shared_ptr<vector<string>> tagIds_ {};
      // The ID of the trigger template.
      shared_ptr<string> triggerTemplateId_ {};
      // List of trusted process group IDs.
      shared_ptr<vector<string>> trustedProcessGroupIds_ {};
      // Trusted process switch status. Values: 
      // - **Enabled**: On.
      // - **Disabled**: Off.
      shared_ptr<string> trustedProcessStatus_ {};
      // List of trusted software IDs.
      shared_ptr<vector<string>> trustedSoftwareIds_ {};
      // The IDs of user groups in the private access policy. If the value of UserGroupMode is **Normal**, this parameter is returned.
      shared_ptr<vector<string>> userGroupIds_ {};
      // The type of the user group in the private access policy. Valid values:
      // 
      // *   **Normal**: regular user group.
      // *   **Custom**: custom user group.
      shared_ptr<string> userGroupMode_ {};
      // The start time when the zero trust policy takes effect, represented as a timestamp in seconds.
      shared_ptr<int64_t> validFrom_ {};
      // Switch status for effective time. Values: - **Enabled**: On. - **Disabled**: Off.
      shared_ptr<string> validTimeStatus_ {};
      // The expiration time of the zero trust policy, in seconds timestamp.
      shared_ptr<int64_t> validUntil_ {};
    };

    virtual bool empty() const override { return this->polices_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // polices Field Functions 
    bool hasPolices() const { return this->polices_ != nullptr;};
    void deletePolices() { this->polices_ = nullptr;};
    inline const vector<ListPrivateAccessPolicesResponseBody::Polices> & getPolices() const { DARABONBA_PTR_GET_CONST(polices_, vector<ListPrivateAccessPolicesResponseBody::Polices>) };
    inline vector<ListPrivateAccessPolicesResponseBody::Polices> getPolices() { DARABONBA_PTR_GET(polices_, vector<ListPrivateAccessPolicesResponseBody::Polices>) };
    inline ListPrivateAccessPolicesResponseBody& setPolices(const vector<ListPrivateAccessPolicesResponseBody::Polices> & polices) { DARABONBA_PTR_SET_VALUE(polices_, polices) };
    inline ListPrivateAccessPolicesResponseBody& setPolices(vector<ListPrivateAccessPolicesResponseBody::Polices> && polices) { DARABONBA_PTR_SET_RVALUE(polices_, polices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateAccessPolicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListPrivateAccessPolicesResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The private access policies.
    shared_ptr<vector<ListPrivateAccessPolicesResponseBody::Polices>> polices_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of private access policies.
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
