// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSPOLICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSPOLICESREQUEST_HPP_
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
  class ListPrivateAccessPolicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessPolicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyAction, policyAction_);
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessPolicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyAction, policyAction_);
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListPrivateAccessPolicesRequest() = default ;
    ListPrivateAccessPolicesRequest(const ListPrivateAccessPolicesRequest &) = default ;
    ListPrivateAccessPolicesRequest(ListPrivateAccessPolicesRequest &&) = default ;
    ListPrivateAccessPolicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessPolicesRequest() = default ;
    ListPrivateAccessPolicesRequest& operator=(const ListPrivateAccessPolicesRequest &) = default ;
    ListPrivateAccessPolicesRequest& operator=(ListPrivateAccessPolicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->applicationName_ == nullptr && return this->currentPage_ == nullptr && return this->name_ == nullptr && return this->pageSize_ == nullptr && return this->policyAction_ == nullptr
        && return this->policyIds_ == nullptr && return this->status_ == nullptr && return this->tagId_ == nullptr && return this->tagName_ == nullptr && return this->userGroupId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListPrivateAccessPolicesRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListPrivateAccessPolicesRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListPrivateAccessPolicesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPrivateAccessPolicesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPrivateAccessPolicesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyAction Field Functions 
    bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
    void deletePolicyAction() { this->policyAction_ = nullptr;};
    inline string policyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
    inline ListPrivateAccessPolicesRequest& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & policyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> policyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline ListPrivateAccessPolicesRequest& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline ListPrivateAccessPolicesRequest& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPrivateAccessPolicesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline ListPrivateAccessPolicesRequest& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline ListPrivateAccessPolicesRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListPrivateAccessPolicesRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The ID of the office application. Either the ID or tag of the office application is used for queries. You can obtain the value by calling the following operations:
    // 
    // *   [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): queries office applications.
    // *   [CreatePrivateAccessApplication](~~CreatePrivateAccessApplication~~): creates an office application.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The name of the office application.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The page number. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The name of the private access policy. The value must be 1 to 128 characters in length and can contain letters, digits, hyphens (-), underscores (_), and periods (.).
    std::shared_ptr<string> name_ = nullptr;
    // The number of entries per page. Valid values: 1 to 1000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The action in the private access policy. Valid values:
    // 
    // *   **Block**
    // *   **Allow**
    std::shared_ptr<string> policyAction_ = nullptr;
    // The IDs of the private access policies. You can enter up to 100 IDs.
    std::shared_ptr<vector<string>> policyIds_ = nullptr;
    // The status of the private access policy. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the tag for the office application. Either the ID or tag of the office application is used for queries. You can obtain the value by calling the following operations:
    // 
    // *   [ListPrivateAccessTags](~~ListPrivateAccessTags~~): queries tags for office applications.
    // *   [CreatePrivateAccessTag](~~CreatePrivateAccessTag~~): creates a tag for office applications.
    std::shared_ptr<string> tagId_ = nullptr;
    // The name of the tag.
    std::shared_ptr<string> tagName_ = nullptr;
    // The ID of the user group. You can obtain the value by calling the following operations:
    // 
    // *   [ListUserGroups](~~ListUserGroups~~): queries user groups.
    // *   [CreateUserGroup](~~CreateUserGroup~~): creates a user group.
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
