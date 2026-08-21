// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROHIBITEDPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROHIBITEDPOLICYRESPONSEBODY_HPP_
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
  class CreateProhibitedPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProhibitedPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProhibitedPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateProhibitedPolicyResponseBody() = default ;
    CreateProhibitedPolicyResponseBody(const CreateProhibitedPolicyResponseBody &) = default ;
    CreateProhibitedPolicyResponseBody(CreateProhibitedPolicyResponseBody &&) = default ;
    CreateProhibitedPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProhibitedPolicyResponseBody() = default ;
    CreateProhibitedPolicyResponseBody& operator=(const CreateProhibitedPolicyResponseBody &) = default ;
    CreateProhibitedPolicyResponseBody& operator=(CreateProhibitedPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policy& obj) { 
        DARABONBA_PTR_TO_JSON(AllowReport, allowReport_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(ForceKill, forceKill_);
        DARABONBA_PTR_TO_JSON(MainButtonTextCh, mainButtonTextCh_);
        DARABONBA_PTR_TO_JSON(MainButtonTextEn, mainButtonTextEn_);
        DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
        DARABONBA_PTR_TO_JSON(MinorButtonTextCh, minorButtonTextCh_);
        DARABONBA_PTR_TO_JSON(MinorButtonTextEn, minorButtonTextEn_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(PromptCh, promptCh_);
        DARABONBA_PTR_TO_JSON(PromptEn, promptEn_);
        DARABONBA_PTR_TO_JSON(SoftwareIds, softwareIds_);
        DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
        DARABONBA_PTR_TO_JSON(TitleCh, titleCh_);
        DARABONBA_PTR_TO_JSON(TitleEn, titleEn_);
        DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
        DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
      };
      friend void from_json(const Darabonba::Json& j, Policy& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowReport, allowReport_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(ForceKill, forceKill_);
        DARABONBA_PTR_FROM_JSON(MainButtonTextCh, mainButtonTextCh_);
        DARABONBA_PTR_FROM_JSON(MainButtonTextEn, mainButtonTextEn_);
        DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
        DARABONBA_PTR_FROM_JSON(MinorButtonTextCh, minorButtonTextCh_);
        DARABONBA_PTR_FROM_JSON(MinorButtonTextEn, minorButtonTextEn_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(PromptCh, promptCh_);
        DARABONBA_PTR_FROM_JSON(PromptEn, promptEn_);
        DARABONBA_PTR_FROM_JSON(SoftwareIds, softwareIds_);
        DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
        DARABONBA_PTR_FROM_JSON(TitleCh, titleCh_);
        DARABONBA_PTR_FROM_JSON(TitleEn, titleEn_);
        DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
        DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
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
      class SoftwareIds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SoftwareIds& obj) { 
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
        };
        friend void from_json(const Darabonba::Json& j, SoftwareIds& obj) { 
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
        };
        SoftwareIds() = default ;
        SoftwareIds(const SoftwareIds &) = default ;
        SoftwareIds(SoftwareIds &&) = default ;
        SoftwareIds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SoftwareIds() = default ;
        SoftwareIds& operator=(const SoftwareIds &) = default ;
        SoftwareIds& operator=(SoftwareIds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isDefault_ == nullptr
        && this->softwareId_ == nullptr; };
        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline SoftwareIds& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // softwareId Field Functions 
        bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
        void deleteSoftwareId() { this->softwareId_ = nullptr;};
        inline string getSoftwareId() const { DARABONBA_PTR_GET_DEFAULT(softwareId_, "") };
        inline SoftwareIds& setSoftwareId(string softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };


      protected:
        // Indicates whether the banned software is a system built-in banned software. Valid values:
        shared_ptr<bool> isDefault_ {};
        // The ID of the prohibited software. You can obtain the value from the following operations:
        // - [ListProhibitedSoftware](~~ListProhibitedSoftware~~): Lists prohibited software.
        // - [CreateProhibitedSoftware](~~CreateProhibitedSoftware~~): Creates custom prohibited software.
        shared_ptr<string> softwareId_ {};
      };

      virtual bool empty() const override { return this->allowReport_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->forceKill_ == nullptr && this->mainButtonTextCh_ == nullptr
        && this->mainButtonTextEn_ == nullptr && this->matchMode_ == nullptr && this->minorButtonTextCh_ == nullptr && this->minorButtonTextEn_ == nullptr && this->name_ == nullptr
        && this->objectType_ == nullptr && this->policyId_ == nullptr && this->policyType_ == nullptr && this->priority_ == nullptr && this->promptCh_ == nullptr
        && this->promptEn_ == nullptr && this->softwareIds_ == nullptr && this->tagIds_ == nullptr && this->titleCh_ == nullptr && this->titleEn_ == nullptr
        && this->userGroupIds_ == nullptr && this->whitelist_ == nullptr; };
      // allowReport Field Functions 
      bool hasAllowReport() const { return this->allowReport_ != nullptr;};
      void deleteAllowReport() { this->allowReport_ = nullptr;};
      inline bool getAllowReport() const { DARABONBA_PTR_GET_DEFAULT(allowReport_, false) };
      inline Policy& setAllowReport(bool allowReport) { DARABONBA_PTR_SET_VALUE(allowReport_, allowReport) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Policy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Policy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Policy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // forceKill Field Functions 
      bool hasForceKill() const { return this->forceKill_ != nullptr;};
      void deleteForceKill() { this->forceKill_ = nullptr;};
      inline bool getForceKill() const { DARABONBA_PTR_GET_DEFAULT(forceKill_, false) };
      inline Policy& setForceKill(bool forceKill) { DARABONBA_PTR_SET_VALUE(forceKill_, forceKill) };


      // mainButtonTextCh Field Functions 
      bool hasMainButtonTextCh() const { return this->mainButtonTextCh_ != nullptr;};
      void deleteMainButtonTextCh() { this->mainButtonTextCh_ = nullptr;};
      inline string getMainButtonTextCh() const { DARABONBA_PTR_GET_DEFAULT(mainButtonTextCh_, "") };
      inline Policy& setMainButtonTextCh(string mainButtonTextCh) { DARABONBA_PTR_SET_VALUE(mainButtonTextCh_, mainButtonTextCh) };


      // mainButtonTextEn Field Functions 
      bool hasMainButtonTextEn() const { return this->mainButtonTextEn_ != nullptr;};
      void deleteMainButtonTextEn() { this->mainButtonTextEn_ = nullptr;};
      inline string getMainButtonTextEn() const { DARABONBA_PTR_GET_DEFAULT(mainButtonTextEn_, "") };
      inline Policy& setMainButtonTextEn(string mainButtonTextEn) { DARABONBA_PTR_SET_VALUE(mainButtonTextEn_, mainButtonTextEn) };


      // matchMode Field Functions 
      bool hasMatchMode() const { return this->matchMode_ != nullptr;};
      void deleteMatchMode() { this->matchMode_ = nullptr;};
      inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
      inline Policy& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


      // minorButtonTextCh Field Functions 
      bool hasMinorButtonTextCh() const { return this->minorButtonTextCh_ != nullptr;};
      void deleteMinorButtonTextCh() { this->minorButtonTextCh_ = nullptr;};
      inline string getMinorButtonTextCh() const { DARABONBA_PTR_GET_DEFAULT(minorButtonTextCh_, "") };
      inline Policy& setMinorButtonTextCh(string minorButtonTextCh) { DARABONBA_PTR_SET_VALUE(minorButtonTextCh_, minorButtonTextCh) };


      // minorButtonTextEn Field Functions 
      bool hasMinorButtonTextEn() const { return this->minorButtonTextEn_ != nullptr;};
      void deleteMinorButtonTextEn() { this->minorButtonTextEn_ = nullptr;};
      inline string getMinorButtonTextEn() const { DARABONBA_PTR_GET_DEFAULT(minorButtonTextEn_, "") };
      inline Policy& setMinorButtonTextEn(string minorButtonTextEn) { DARABONBA_PTR_SET_VALUE(minorButtonTextEn_, minorButtonTextEn) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Policy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline Policy& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Policy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline Policy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Policy& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // promptCh Field Functions 
      bool hasPromptCh() const { return this->promptCh_ != nullptr;};
      void deletePromptCh() { this->promptCh_ = nullptr;};
      inline string getPromptCh() const { DARABONBA_PTR_GET_DEFAULT(promptCh_, "") };
      inline Policy& setPromptCh(string promptCh) { DARABONBA_PTR_SET_VALUE(promptCh_, promptCh) };


      // promptEn Field Functions 
      bool hasPromptEn() const { return this->promptEn_ != nullptr;};
      void deletePromptEn() { this->promptEn_ = nullptr;};
      inline string getPromptEn() const { DARABONBA_PTR_GET_DEFAULT(promptEn_, "") };
      inline Policy& setPromptEn(string promptEn) { DARABONBA_PTR_SET_VALUE(promptEn_, promptEn) };


      // softwareIds Field Functions 
      bool hasSoftwareIds() const { return this->softwareIds_ != nullptr;};
      void deleteSoftwareIds() { this->softwareIds_ = nullptr;};
      inline const vector<Policy::SoftwareIds> & getSoftwareIds() const { DARABONBA_PTR_GET_CONST(softwareIds_, vector<Policy::SoftwareIds>) };
      inline vector<Policy::SoftwareIds> getSoftwareIds() { DARABONBA_PTR_GET(softwareIds_, vector<Policy::SoftwareIds>) };
      inline Policy& setSoftwareIds(const vector<Policy::SoftwareIds> & softwareIds) { DARABONBA_PTR_SET_VALUE(softwareIds_, softwareIds) };
      inline Policy& setSoftwareIds(vector<Policy::SoftwareIds> && softwareIds) { DARABONBA_PTR_SET_RVALUE(softwareIds_, softwareIds) };


      // tagIds Field Functions 
      bool hasTagIds() const { return this->tagIds_ != nullptr;};
      void deleteTagIds() { this->tagIds_ = nullptr;};
      inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
      inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
      inline Policy& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
      inline Policy& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


      // titleCh Field Functions 
      bool hasTitleCh() const { return this->titleCh_ != nullptr;};
      void deleteTitleCh() { this->titleCh_ = nullptr;};
      inline string getTitleCh() const { DARABONBA_PTR_GET_DEFAULT(titleCh_, "") };
      inline Policy& setTitleCh(string titleCh) { DARABONBA_PTR_SET_VALUE(titleCh_, titleCh) };


      // titleEn Field Functions 
      bool hasTitleEn() const { return this->titleEn_ != nullptr;};
      void deleteTitleEn() { this->titleEn_ = nullptr;};
      inline string getTitleEn() const { DARABONBA_PTR_GET_DEFAULT(titleEn_, "") };
      inline Policy& setTitleEn(string titleEn) { DARABONBA_PTR_SET_VALUE(titleEn_, titleEn) };


      // userGroupIds Field Functions 
      bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
      void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
      inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
      inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
      inline Policy& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
      inline Policy& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


      // whitelist Field Functions 
      bool hasWhitelist() const { return this->whitelist_ != nullptr;};
      void deleteWhitelist() { this->whitelist_ = nullptr;};
      inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
      inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
      inline Policy& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
      inline Policy& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


    protected:
      // Specifies whether end users are allowed to submit a report request for this policy. Valid values:
      // - **true**: Reporting is allowed. The pop-up window on the endpoint provides a reporting entry.
      // - **false**: Reporting is not allowed.
      shared_ptr<bool> allowReport_ {};
      // The time when the software prohibition policy was created, in the yyyy-MM-dd HH:mm:ss format. The time is displayed in UTC+8.
      shared_ptr<string> createTime_ {};
      // The description of the software prohibition policy.
      shared_ptr<string> description_ {};
      // Indicates whether the policy is enabled. Valid values:
      // 
      // - **true**: Enabled. The policy is delivered to the endpoint and takes effect.
      // - **false**: Disabled. The policy retains its configuration but is not delivered to the endpoint.
      shared_ptr<bool> enabled_ {};
      // Specifies whether to forcibly terminate running software processes. Valid values:
      // - **true**: The terminal immediately terminates the running process of the software when the policy is hit.
      // - **false**: Running processes are not terminated. Only subsequent launches are blocked.
      shared_ptr<bool> forceKill_ {};
      // The Chinese text of the primary button in the pop-up window on the endpoint.
      shared_ptr<string> mainButtonTextCh_ {};
      // The English text of the primary button in the pop-up window on the endpoint.
      shared_ptr<string> mainButtonTextEn_ {};
      // The scope of the policy. Valid values:
      // 
      // - **UserGroupAll**: The policy takes effect for all users under the current Alibaba Cloud account. You do not need to specify user groups.
      // - **UserGroupNormal**: The policy takes effect only for users in the user groups specified by UserGroupIds.
      shared_ptr<string> matchMode_ {};
      // The Chinese text of the secondary button in the pop-up window on the endpoint.
      shared_ptr<string> minorButtonTextCh_ {};
      // The English text of the secondary button in the pop-up window on the endpoint.
      shared_ptr<string> minorButtonTextEn_ {};
      // The Policy Name of the software disable policy.
      shared_ptr<string> name_ {};
      // The object type of the controlled target. Valid values:
      shared_ptr<string> objectType_ {};
      // The ID of the software prohibition policy.
      shared_ptr<string> policyId_ {};
      // The action to take. Valid values:
      shared_ptr<string> policyType_ {};
      // The policy priority. Valid values: 0 to 99. A smaller value indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The Chinese prompt content displayed in the pop-up window on the endpoint.
      shared_ptr<string> promptCh_ {};
      // The English prompt content displayed in the pop-up window on the endpoint.
      shared_ptr<string> promptEn_ {};
      // The collection of banned software directly controlled by this policy.
      shared_ptr<vector<Policy::SoftwareIds>> softwareIds_ {};
      // The collection of banned software tag IDs controlled by this policy.
      shared_ptr<vector<string>> tagIds_ {};
      // The Chinese title of the pop-up window on the endpoint.
      shared_ptr<string> titleCh_ {};
      // The English title of the pop-up window on the endpoint.
      shared_ptr<string> titleEn_ {};
      // The IDs of the user groups to which the policy applies.
      shared_ptr<vector<string>> userGroupIds_ {};
      // The list of exempted usernames.
      shared_ptr<vector<string>> whitelist_ {};
    };

    virtual bool empty() const override { return this->policy_ == nullptr
        && this->requestId_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const CreateProhibitedPolicyResponseBody::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, CreateProhibitedPolicyResponseBody::Policy) };
    inline CreateProhibitedPolicyResponseBody::Policy getPolicy() { DARABONBA_PTR_GET(policy_, CreateProhibitedPolicyResponseBody::Policy) };
    inline CreateProhibitedPolicyResponseBody& setPolicy(const CreateProhibitedPolicyResponseBody::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline CreateProhibitedPolicyResponseBody& setPolicy(CreateProhibitedPolicyResponseBody::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProhibitedPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the software prohibition policy.
    shared_ptr<CreateProhibitedPolicyResponseBody::Policy> policy_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
