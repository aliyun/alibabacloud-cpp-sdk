// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROHIBITEDPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROHIBITEDPOLICYREQUEST_HPP_
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
  class UpdateProhibitedPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProhibitedPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowReport, allowReport_);
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
    friend void from_json(const Darabonba::Json& j, UpdateProhibitedPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowReport, allowReport_);
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
    UpdateProhibitedPolicyRequest() = default ;
    UpdateProhibitedPolicyRequest(const UpdateProhibitedPolicyRequest &) = default ;
    UpdateProhibitedPolicyRequest(UpdateProhibitedPolicyRequest &&) = default ;
    UpdateProhibitedPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProhibitedPolicyRequest() = default ;
    UpdateProhibitedPolicyRequest& operator=(const UpdateProhibitedPolicyRequest &) = default ;
    UpdateProhibitedPolicyRequest& operator=(UpdateProhibitedPolicyRequest &&) = default ;
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
      // Indicates whether the prohibited software is a system built-in entry. Valid values:
      // - **true**: A system built-in prohibited software entry shared across all Alibaba Cloud accounts. It cannot be modified or deleted.
      // - **false**: A custom prohibited software entry under the current Alibaba Cloud account.
      shared_ptr<bool> isDefault_ {};
      // The ID of the prohibited software. You can obtain the value from the following operations:
      // - [ListProhibitedSoftware](~~ListProhibitedSoftware~~): Lists prohibited software.
      // - [CreateProhibitedSoftware](~~CreateProhibitedSoftware~~): Creates custom prohibited software.
      shared_ptr<string> softwareId_ {};
    };

    virtual bool empty() const override { return this->allowReport_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->forceKill_ == nullptr && this->mainButtonTextCh_ == nullptr && this->mainButtonTextEn_ == nullptr
        && this->matchMode_ == nullptr && this->minorButtonTextCh_ == nullptr && this->minorButtonTextEn_ == nullptr && this->name_ == nullptr && this->objectType_ == nullptr
        && this->policyId_ == nullptr && this->policyType_ == nullptr && this->priority_ == nullptr && this->promptCh_ == nullptr && this->promptEn_ == nullptr
        && this->softwareIds_ == nullptr && this->tagIds_ == nullptr && this->titleCh_ == nullptr && this->titleEn_ == nullptr && this->userGroupIds_ == nullptr
        && this->whitelist_ == nullptr; };
    // allowReport Field Functions 
    bool hasAllowReport() const { return this->allowReport_ != nullptr;};
    void deleteAllowReport() { this->allowReport_ = nullptr;};
    inline string getAllowReport() const { DARABONBA_PTR_GET_DEFAULT(allowReport_, "") };
    inline UpdateProhibitedPolicyRequest& setAllowReport(string allowReport) { DARABONBA_PTR_SET_VALUE(allowReport_, allowReport) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProhibitedPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateProhibitedPolicyRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // forceKill Field Functions 
    bool hasForceKill() const { return this->forceKill_ != nullptr;};
    void deleteForceKill() { this->forceKill_ = nullptr;};
    inline bool getForceKill() const { DARABONBA_PTR_GET_DEFAULT(forceKill_, false) };
    inline UpdateProhibitedPolicyRequest& setForceKill(bool forceKill) { DARABONBA_PTR_SET_VALUE(forceKill_, forceKill) };


    // mainButtonTextCh Field Functions 
    bool hasMainButtonTextCh() const { return this->mainButtonTextCh_ != nullptr;};
    void deleteMainButtonTextCh() { this->mainButtonTextCh_ = nullptr;};
    inline string getMainButtonTextCh() const { DARABONBA_PTR_GET_DEFAULT(mainButtonTextCh_, "") };
    inline UpdateProhibitedPolicyRequest& setMainButtonTextCh(string mainButtonTextCh) { DARABONBA_PTR_SET_VALUE(mainButtonTextCh_, mainButtonTextCh) };


    // mainButtonTextEn Field Functions 
    bool hasMainButtonTextEn() const { return this->mainButtonTextEn_ != nullptr;};
    void deleteMainButtonTextEn() { this->mainButtonTextEn_ = nullptr;};
    inline string getMainButtonTextEn() const { DARABONBA_PTR_GET_DEFAULT(mainButtonTextEn_, "") };
    inline UpdateProhibitedPolicyRequest& setMainButtonTextEn(string mainButtonTextEn) { DARABONBA_PTR_SET_VALUE(mainButtonTextEn_, mainButtonTextEn) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline UpdateProhibitedPolicyRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // minorButtonTextCh Field Functions 
    bool hasMinorButtonTextCh() const { return this->minorButtonTextCh_ != nullptr;};
    void deleteMinorButtonTextCh() { this->minorButtonTextCh_ = nullptr;};
    inline string getMinorButtonTextCh() const { DARABONBA_PTR_GET_DEFAULT(minorButtonTextCh_, "") };
    inline UpdateProhibitedPolicyRequest& setMinorButtonTextCh(string minorButtonTextCh) { DARABONBA_PTR_SET_VALUE(minorButtonTextCh_, minorButtonTextCh) };


    // minorButtonTextEn Field Functions 
    bool hasMinorButtonTextEn() const { return this->minorButtonTextEn_ != nullptr;};
    void deleteMinorButtonTextEn() { this->minorButtonTextEn_ = nullptr;};
    inline string getMinorButtonTextEn() const { DARABONBA_PTR_GET_DEFAULT(minorButtonTextEn_, "") };
    inline UpdateProhibitedPolicyRequest& setMinorButtonTextEn(string minorButtonTextEn) { DARABONBA_PTR_SET_VALUE(minorButtonTextEn_, minorButtonTextEn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProhibitedPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline UpdateProhibitedPolicyRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdateProhibitedPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline UpdateProhibitedPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateProhibitedPolicyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // promptCh Field Functions 
    bool hasPromptCh() const { return this->promptCh_ != nullptr;};
    void deletePromptCh() { this->promptCh_ = nullptr;};
    inline string getPromptCh() const { DARABONBA_PTR_GET_DEFAULT(promptCh_, "") };
    inline UpdateProhibitedPolicyRequest& setPromptCh(string promptCh) { DARABONBA_PTR_SET_VALUE(promptCh_, promptCh) };


    // promptEn Field Functions 
    bool hasPromptEn() const { return this->promptEn_ != nullptr;};
    void deletePromptEn() { this->promptEn_ = nullptr;};
    inline string getPromptEn() const { DARABONBA_PTR_GET_DEFAULT(promptEn_, "") };
    inline UpdateProhibitedPolicyRequest& setPromptEn(string promptEn) { DARABONBA_PTR_SET_VALUE(promptEn_, promptEn) };


    // softwareIds Field Functions 
    bool hasSoftwareIds() const { return this->softwareIds_ != nullptr;};
    void deleteSoftwareIds() { this->softwareIds_ = nullptr;};
    inline const vector<UpdateProhibitedPolicyRequest::SoftwareIds> & getSoftwareIds() const { DARABONBA_PTR_GET_CONST(softwareIds_, vector<UpdateProhibitedPolicyRequest::SoftwareIds>) };
    inline vector<UpdateProhibitedPolicyRequest::SoftwareIds> getSoftwareIds() { DARABONBA_PTR_GET(softwareIds_, vector<UpdateProhibitedPolicyRequest::SoftwareIds>) };
    inline UpdateProhibitedPolicyRequest& setSoftwareIds(const vector<UpdateProhibitedPolicyRequest::SoftwareIds> & softwareIds) { DARABONBA_PTR_SET_VALUE(softwareIds_, softwareIds) };
    inline UpdateProhibitedPolicyRequest& setSoftwareIds(vector<UpdateProhibitedPolicyRequest::SoftwareIds> && softwareIds) { DARABONBA_PTR_SET_RVALUE(softwareIds_, softwareIds) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline UpdateProhibitedPolicyRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline UpdateProhibitedPolicyRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


    // titleCh Field Functions 
    bool hasTitleCh() const { return this->titleCh_ != nullptr;};
    void deleteTitleCh() { this->titleCh_ = nullptr;};
    inline string getTitleCh() const { DARABONBA_PTR_GET_DEFAULT(titleCh_, "") };
    inline UpdateProhibitedPolicyRequest& setTitleCh(string titleCh) { DARABONBA_PTR_SET_VALUE(titleCh_, titleCh) };


    // titleEn Field Functions 
    bool hasTitleEn() const { return this->titleEn_ != nullptr;};
    void deleteTitleEn() { this->titleEn_ = nullptr;};
    inline string getTitleEn() const { DARABONBA_PTR_GET_DEFAULT(titleEn_, "") };
    inline UpdateProhibitedPolicyRequest& setTitleEn(string titleEn) { DARABONBA_PTR_SET_VALUE(titleEn_, titleEn) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline UpdateProhibitedPolicyRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline UpdateProhibitedPolicyRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline UpdateProhibitedPolicyRequest& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline UpdateProhibitedPolicyRequest& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    // Specifies whether endpoint users are allowed to submit a filing request for this policy. Valid values:
    // - **true**: Filing is allowed. A filing entry is provided in the pop-up notification on the endpoint.
    // - **false**: Filing is not allowed.
    shared_ptr<string> allowReport_ {};
    // The description of the software prohibition policy. The description can contain Chinese characters, uppercase and lowercase letters, digits, spaces, periods (.), underscores (_), and hyphens (-). The description can be up to 128 characters in length and can be left empty.
    shared_ptr<string> description_ {};
    // Specifies whether the policy is enabled. Valid values:
    // - **true**: Enabled. The policy is delivered to endpoints and takes effect.
    // - **false**: Disabled. The policy configuration is retained but not delivered to endpoints.
    shared_ptr<bool> enabled_ {};
    // Specifies whether to forcibly terminate running software processes. Valid values:
    // - **true**: The endpoint immediately terminates the running processes of the software when the policy is triggered.
    // - **false**: Running processes are not terminated. Only subsequent launches are blocked.
    shared_ptr<bool> forceKill_ {};
    // The Chinese text of the primary button in the pop-up notification on the endpoint.
    shared_ptr<string> mainButtonTextCh_ {};
    // The English text of the primary button in the pop-up notification on the endpoint.
    shared_ptr<string> mainButtonTextEn_ {};
    // The scope in which the policy takes effect. Valid values:
    // - **UserGroupAll**: Takes effect for all users under the current Alibaba Cloud account. No user group needs to be specified.
    // - **UserGroupNormal**: Takes effect only for users in the user groups specified by UserGroupIds.
    shared_ptr<string> matchMode_ {};
    // The Chinese text of the secondary button in the pop-up notification on the endpoint.
    shared_ptr<string> minorButtonTextCh_ {};
    // The English text of the secondary button in the pop-up notification on the endpoint.
    shared_ptr<string> minorButtonTextEn_ {};
    // Policy Name of the software prohibition policy. Policy Name must be 1 to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), and hyphens (-). Spaces are not supported.
    shared_ptr<string> name_ {};
    // The object type. Valid values:
    // - **App**: Controls by prohibited software. The controlled objects are specified by SoftwareIds.
    // - **Tag**: Controls by prohibited software tag. The controlled objects are specified by TagIds. All prohibited software under the specified tags is controlled.
    shared_ptr<string> objectType_ {};
    // The ID of the software prohibition policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The action to take. If this parameter is not specified, the original value is retained. Valid values:
    // - **Ban**: Blocks the software from running and displays a pop-up notification on the endpoint to alert the user.
    // - **BanSilent**: Blocks the software from running without notifying the user (silent blocking).
    // - **Warn**: Displays a pop-up notification on the endpoint to alert the user without blocking the software from running.
    shared_ptr<string> policyType_ {};
    // The policy priority. Valid values: 0 to 99. A smaller value indicates a higher priority.
    shared_ptr<int32_t> priority_ {};
    // The Chinese prompt content displayed in the pop-up notification on the endpoint.
    shared_ptr<string> promptCh_ {};
    // The English prompt content displayed in the pop-up notification on the endpoint.
    shared_ptr<string> promptEn_ {};
    // The collection of prohibited software directly controlled by this policy.
    shared_ptr<vector<UpdateProhibitedPolicyRequest::SoftwareIds>> softwareIds_ {};
    // The collection of prohibited software tag IDs controlled by this policy.
    shared_ptr<vector<string>> tagIds_ {};
    // The Chinese title of the pop-up notification on the endpoint.
    shared_ptr<string> titleCh_ {};
    // The English title of the pop-up notification on the endpoint.
    shared_ptr<string> titleEn_ {};
    // The collection of user group IDs for which the policy takes effect. Duplicate values are not allowed.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The list of exempted usernames. Duplicate values are not allowed.
    shared_ptr<vector<string>> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
