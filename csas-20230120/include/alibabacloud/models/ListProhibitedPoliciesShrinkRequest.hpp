// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROHIBITEDPOLICIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROHIBITEDPOLICIESSHRINKREQUEST_HPP_
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
  class ListProhibitedPoliciesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProhibitedPoliciesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(SoftwareId, softwareIdShrink_);
      DARABONBA_PTR_TO_JSON(SoftwareName, softwareName_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProhibitedPoliciesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(SoftwareId, softwareIdShrink_);
      DARABONBA_PTR_FROM_JSON(SoftwareName, softwareName_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListProhibitedPoliciesShrinkRequest() = default ;
    ListProhibitedPoliciesShrinkRequest(const ListProhibitedPoliciesShrinkRequest &) = default ;
    ListProhibitedPoliciesShrinkRequest(ListProhibitedPoliciesShrinkRequest &&) = default ;
    ListProhibitedPoliciesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProhibitedPoliciesShrinkRequest() = default ;
    ListProhibitedPoliciesShrinkRequest& operator=(const ListProhibitedPoliciesShrinkRequest &) = default ;
    ListProhibitedPoliciesShrinkRequest& operator=(ListProhibitedPoliciesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->enabled_ == nullptr && this->matchMode_ == nullptr && this->name_ == nullptr && this->objectType_ == nullptr && this->pageSize_ == nullptr
        && this->policyIds_ == nullptr && this->policyType_ == nullptr && this->softwareIdShrink_ == nullptr && this->softwareName_ == nullptr && this->tagId_ == nullptr
        && this->tagName_ == nullptr && this->userGroupId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListProhibitedPoliciesShrinkRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListProhibitedPoliciesShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline ListProhibitedPoliciesShrinkRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProhibitedPoliciesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline ListProhibitedPoliciesShrinkRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListProhibitedPoliciesShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline ListProhibitedPoliciesShrinkRequest& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline ListProhibitedPoliciesShrinkRequest& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListProhibitedPoliciesShrinkRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // softwareIdShrink Field Functions 
    bool hasSoftwareIdShrink() const { return this->softwareIdShrink_ != nullptr;};
    void deleteSoftwareIdShrink() { this->softwareIdShrink_ = nullptr;};
    inline string getSoftwareIdShrink() const { DARABONBA_PTR_GET_DEFAULT(softwareIdShrink_, "") };
    inline ListProhibitedPoliciesShrinkRequest& setSoftwareIdShrink(string softwareIdShrink) { DARABONBA_PTR_SET_VALUE(softwareIdShrink_, softwareIdShrink) };


    // softwareName Field Functions 
    bool hasSoftwareName() const { return this->softwareName_ != nullptr;};
    void deleteSoftwareName() { this->softwareName_ = nullptr;};
    inline string getSoftwareName() const { DARABONBA_PTR_GET_DEFAULT(softwareName_, "") };
    inline ListProhibitedPoliciesShrinkRequest& setSoftwareName(string softwareName) { DARABONBA_PTR_SET_VALUE(softwareName_, softwareName) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline ListProhibitedPoliciesShrinkRequest& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline ListProhibitedPoliciesShrinkRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListProhibitedPoliciesShrinkRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The page number of the current page in a paged query. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> currentPage_ {};
    // Specifies whether the policy is enabled. Valid values:
    // - **true**: Enabled. The policy is delivered to endpoints and takes effect.
    // - **false**: Disabled. The policy configuration is retained but not delivered to endpoints.
    shared_ptr<bool> enabled_ {};
    // The effective scope. Valid values:
    // - **UserGroupAll**: Applies to all users under the current Alibaba Cloud account. No user group needs to be specified.
    // - **UserGroupNormal**: Applies only to users in the user groups specified by UserGroupIds.
    shared_ptr<string> matchMode_ {};
    // Policy Name of the software prohibition policy. Fuzzy match is supported. Policy Name can be up to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), and hyphens (-). Spaces are not supported.
    shared_ptr<string> name_ {};
    // The object type of the controlled target. Valid values:
    // - **App**: Controls by prohibited software. The controlled objects are specified by SoftwareIds.
    // - **Tag**: Controls by prohibited software tag. The controlled objects are specified by TagIds. All prohibited software under the tag is controlled.
    shared_ptr<string> objectType_ {};
    // The number of entries per page in a paged query. Valid values: 1 to 500.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The collection of software prohibition policy IDs. Duplicate values are not allowed.
    shared_ptr<vector<string>> policyIds_ {};
    // The action to take. Valid values:
    // - **Ban**: Blocks the software from running and displays a pop-up notification on the endpoint to alert the user.
    // - **BanSilent**: Blocks the software from running without notifying the user. The blocking is silent.
    // - **Warn**: Only displays a pop-up notification on the endpoint to alert the user without blocking the software from running.
    shared_ptr<string> policyType_ {};
    // The unique identifier of the prohibited software.
    shared_ptr<string> softwareIdShrink_ {};
    // The name of the prohibited software. Fuzzy match is supported. The name can be up to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), and hyphens (-). Spaces are not supported.
    shared_ptr<string> softwareName_ {};
    // The prohibited software tag ID, used to filter policies that reference this tag. You can obtain the value from the following operations:
    // - [ListProhibitedTags](~~ListProhibitedTags~~): Lists prohibited software tags.
    // - [CreateProhibitedTag](~~CreateProhibitedTag~~): Creates a custom prohibited software tag.
    shared_ptr<string> tagId_ {};
    // The name of the prohibited software tag. Fuzzy match is supported. The name can be up to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), and hyphens (-). Spaces are not supported.
    shared_ptr<string> tagName_ {};
    // The user group ID, used to filter policies whose effective scope includes this user group. You can obtain the value from the following operations:
    // - [ListUserGroups](~~ListUserGroups~~): Lists user groups.
    // - [CreateUserGroup](~~CreateUserGroup~~): Creates a user group.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
